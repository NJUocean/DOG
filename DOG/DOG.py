# -*- coding: utf-8 -*-

import os
import glob
import re
from graphviz import Digraph
from pathlib import Path
from copy import deepcopy
from queue import Queue
from z3 import *
from optparse import OptionParser


def funcloc(flfile):
    res=dict()
    with open(flfile,'r',errors='ignore') as  f:
        lines=f.readlines()
        for line in lines:
            func=line.split(':')[0]
            loc=line.split(':')[1].strip("\n")
            res[func]=int(loc)
    f.close()
    return res

def parseFreq(freq):
    if freq.isdigit():
        return int(freq)
    if freq=='-' or '':
        return -1
    if freq=="#####":
        return 0
    if freq.endswith('*'):
        return int(freq.strip('*'))
    if freq.endswith('k'):
        return int(float(freq.strip('k'))*1000)
    if freq.endswith('M'):
        return int(float(freq.strip('M'))*1000000)
    return -1   

class Coverage:
    def __init__(self):
        self.lineCov=dict() #line number(int) -> freq(int)
        self.statementCov=dict() # node name(str) -> freq(int)
        
    def parse(self,folder,compiler):
        if compiler=="gcc":
            cov_file=folder+'.c.gcov'
            print(cov_file)
            with open(cov_file,'r',errors='ignore') as f:
                lines=f.readlines()
                for line in lines:
                    if ":" not in line:
                        continue
                    items = line.split(":")
                    freq  = items[0].strip()
                    lnum  = items[1].strip()
                    if not lnum.isdigit() or lnum == '0':
                        continue
                    
                    self.lineCov[int(lnum)] = parseFreq(freq)                    
            f.close()
        else:
            cov_file=folder+".lcov"
            with open(cov_file,'r',errors='ignore') as f:
                lines=f.readlines()
                for line in lines:
                    if "|" not in line:
                        continue
                    items = line.split("|",2)
                    freq  = items[1].strip()
                    lnum  = items[0].strip()
                    if not lnum.isdigit() or lnum == '0':
                        continue        
                    self.lineCov[int(lnum)] = parseFreq(freq)                     
            f.close()   
        return len(self.lineCov)

    def getCovByLine(self,line):
        line=int(line)
        if line==-1:
            return -1
        elif line==-2:
            return called
        else:
            return self.lineCov[line]
    
    def getCovByName(self,name):
        if name=='__N0':
            return called
        else:
            return self.statementCov[name]
    
    def initial(self,name,lines,tp):
        succ=True
        covs=set()
        
       # print(lines,len(lines))

        for line in lines:
            
            #print(line)
            tmp=self.getCovByLine(line)
            if tmp!=-1:
                covs.add(tmp)
        if len(covs)==0:
            self.statementCov[name]=-1
        else:
            if len(lines)>1 and self.getCovByLine(lines[0])==0 and max(covs)>0:
                return False
            self.statementCov[name]=max(covs)
            
        return succ        
    
    def update(self,name,freq):
        if name=="__N25":
            print("update ",name," from ",self.statementCov[name]," to ",freq)
        self.statementCov[name]=freq
    
    def resetStatemenCov(self):
        self.statementCov=dict()

            
    
#一个node代表一个basicblock，既是CFG中的，也是支配树中的，也是CDG中的
class Node:
    def __init__(self,name):
        self.name=name   #dot文件中节点名称W
        self.num=-1      #dfn
        self.line=[]  #basicblock中代码的行号
        self.succ=set()  #CFG上直接子节点集合
        self.pred=set()  #CFG上的直接父节点集合
        self.tp=0   #0:非控制头，1:while和for，2:do-while, 3:switch, 4:if
        self.content=""
        
        #for dominator
        self.parent=name #DFS生成树上的直接父节点
        self.semi=0      #半支配点
    
    def addLine(self,linenumber):
        for number in linenumber:    
            self.line.append(str(number))
    
    def addSucc(self,succ):
        self.succ.add(succ)
        
    def addPred(self,pred):
        self.pred.add(pred)        
    
    def show(self):
        print("node "+self.name+" contains line:",self.line)
        
        
class Edge:
    def __init__(self,tail,head,label):
        self.tail=tail
        self.head=head
        self.label=label #是否有跳转条件yes/no
        self.name=tail+head
    
    def show(self):
        print("edge: "+self.tail+" -> "+self.head+" with label "+self.label)

#在CFG中使用nodename代表node，或作为索引从cfg.V中得到对应的node对象        
class CFG:
    def __init__(self):
        self.V=dict()
        self.E=dict()
        self.entry=None
        self.start=None
        self.stop=None
    
    def addV(self,v):
        self.V[v.name]=v
    
    def addE(self,e):
        self.E[e.name]=e
        self.V[e.tail].addSucc(e.head)
        self.V[e.head].addPred(e.tail)
    
    
    def show(self):
        print("start: ",self.start)
        print("stop: ",self.stop)
        print("V: ",self.V)
        print("E: ",self.E)
        
def generateReverseCFG(file):
    with open(file,errors='ignore') as f:
        lines=f.readlines()   
    l=len(lines)
    cfg=CFG()
    
    #解析dot文件
    for i in range(l):
        line=lines[i].strip()
        if line.startswith("__"):#找出cfg点和边的定义
            #print(line)
            name = re.findall(r'__N\d+',line)    
            if len(name)==1:#定义了node
                label = re.search(r'label=".*?", ', line)
                if label!=None:
                    label=label.group()
                else:
                    label=re.search(r'label=".*?"]', line).group()

                divide=label.find(r'\n\n')
                if divide==-1:
                    content=''
                    label=label
                else:
                    content=label[divide+4:].strip().strip(',').strip(']').strip("\"").strip(r'\n')
                    label=label[:divide]
                #print(content)
                tmp1=label.split(' - ')                        
                node=Node(name[0])
                node.content=content
                if len(tmp1)==2:#控制语句的节点是不是只有自己？
                    if tmp1[1].find("do-while ")!=-1:
                        node.tp=1
                    elif tmp1[1].find("while-for")!=-1:
                        node.tp=2
                    elif tmp1[1].find("if ")!=-1:
                        node.tp=3
                    elif tmp1[1].find("switch-default ")!=-1:
                        node.tp=4
                    elif tmp1[1].find("switch-case ")!=-1:
                        node.tp=4.5
                    elif tmp1[1].find("switch ")!=-1:
                        node.tp=5
                    elif tmp1[1].find("return ")!=-1:
                        node.tp=-1

                if node.tp==0 and content.startswith('({') and content.endswith('})'):
                    node.line=[-1]                   
                else:
                    lnums=set([])
                    for i in range(1,len(tmp1)):
                    #print(tmp1[i])
                        tmp2=tmp1[i].split(',')
                        startl=tmp2[1]
                        if(startl==''):
                        #print("------------"+name[0]+"----------")
                            if content=="start":
                                cfg.start=name[0]
                            elif content=="end":
                                cfg.stop=name[0]
                            break
                        endl=tmp2[3]
                        #print(startl,endl)
                        for lnum in range(int(startl),int(endl)+1):
                            lnums.add(lnum)
                    node.line=list(lnums)
                    
                    if not lnums:
                        node.line=[-1]
                    elif (content.find('{')!=-1 or content.find('}')!=-1) and (content.find('({')!=-1 or content.find('})')!=-1):

                        if len(node.line)==1:
                            cov1.lineCov[int(startl)]=-1
                        elif len(node.line)==2:
                            cov1.lineCov[int(endl)]=-1
                        else:
                            for item in node.line: 
                                if int(item)>int(startl)+1:
                                    cov1.lineCov[int(item)]=-1
                    node.line.sort()
                cfg.addV(node)

            else:#定义了edge
                label = re.search(r'label=".*?"', line).group()
                edge=Edge(name[1],name[0],label[7:-1])
                #为switch语句（tp>=5）出来的所有边添上true标签，
                #并且如果有default语句的话，将switch语句的tp由5改为6
                if cfg.V[name[0]].tp>=5:
                    edge.label="yes"
# =============================================================================
#                     if cfg.V[name[1]].tp==4 or cfg.V[name[1]].tp==4.5:
#                         edge.label="yes"
# =============================================================================
                    if cfg.V[name[1]].tp==4 :
                        #print("ok",name[0],cfg.V[name[0]].tp,name[1])
                        cfg.V[name[0]].tp=6
                    #edge.show()
                cfg.addE(edge)

    entry=Node("__N0")
    entry.tp=3
    entry.line=[-2]
    cfg.addV(entry)
    cfg.entry=entry.name
    cfg.addE(Edge(cfg.start,entry.name,"yes"))
    cfg.addE(Edge(cfg.stop,entry.name,"no"))
    f.close()
    
    return cfg


#DFS的过程中，生成按dfn索引的vertex list，将semi先置为dfn，并修改每个节点的parent属性
def DFS(cfg,entryname):
    global index
    entry=cfg.V[entryname]
    entry.semi=index
    vertex[index]=entry
    entry.num=index
    index=index+1
    for succname in entry.succ:
        succ=cfg.V[succname]
        if succ.semi==0:
            succ.parent=entryname
            DFS(cfg,succname)

#LINK和EVAL都是使用dfn代表node，或者作为索引从vertex中获取node对象
def LINK(parent,son):
    pre[son]=parent

def EVAL(v):
    res=v
    semi=len(vertex)
    while(pre[v]!=-1):
        tmpsemi=vertex[v].semi
        if tmpsemi<semi:
            semi=tmpsemi
            res=v
        v=pre[v]
    return res

class RegionNode:
    def __init__(self,name):
        self.name=name   #dot文件中节点名称W
        self.succ=""  #CDG上直接子节点集合
        self.pred=""  #CDG上直接父节点集合
        self.cov=-1
        self.agent=""
    
    def setSucc(self,succ):
        self.succ= succ
        
    def setPred(self,pred):
        self.pred = pred        


def commonParent(tail,head,dom):
    A=tail
    B=head
    ancesterA=set()
    pathBL=set()
    while(dom[A]!=A):
        ancesterA.add(A)
        A=dom[A]
    ancesterA.add(A)
    while(B not in ancesterA):
        pathBL.add(B)
        B=dom[B]
    if B==tail:
        pathBL.add(B)
    if len(pathBL)>0:
        if tail not in cdo.keys():
            #cdo[tail]=[]
            COVS[tail]=[]
            CRN[tail]=[]
        #print(tail,"->",head)
        #cdo[tail].append(pathBL)
        COVS[tail].append(-1)
        RNname=tail+head
        R=RegionNode(RNname)
        R.setSucc(pathBL)
        R.setPred(tail)
        ARN[RNname]=R
        CRN[tail].append(RNname)
        for node in pathBL:
            if node not in FRN.keys():
                FRN[node]=[]
                #cdgpred[node]=set()
            FRN[node].append(RNname)
            #cdgpred[node].add(tail)



def checkS(S):
    tmp=set()
    covs=set()
    brotherhood=[]
    for node in S:
        if not tmp:
            tmp=set(FRN[node])
        tmp=tmp&set(FRN[node])
    
    for node in S:
        if set(FRN[node])==tmp:
            coverage=cov1.getCovByName(node)
            brotherhood.append(node)
            if coverage!=-1:
                covs.add(coverage)
                    
    return brotherhood,covs,len(tmp)


class MyError(Exception):
    def __init__(self, value):
        self.value = value
    def __str__(self):
        return repr(self.value)

def LOG(err):
    tcwd=os.path.join(testsuite,"result")
    folder=err[0]
    if folder not in done:
        done.add(folder)
        bugtype=err[2]
        logfile1=os.path.join(tcwd,bugtype+'.txt')
        if compiler=="gcc":
            logfile2=os.path.join(tcwd,'C-gcov.txt')
        else:
            logfile2=os.path.join(tcwd,'C-llvm.txt')
        log='-'.join(err)+'\n'
        with open(logfile1,'a+') as f:
            f.write(log)
        f.close()
        with open(logfile2,'a+') as f:
            f.write(err[0]+'\n')
        f.close()
    

def checkNode(node):

    candidates=set()
    if node=='__N0':
        #print(node,cov1.getCovByName(node),ARN[CRN[node][0]].cov)
        if cov1.getCovByName(node)>=0 and ARN[CRN[node][0]].cov>=0:            
            if cov1.getCovByName(node)!=ARN[CRN[node][0]].cov:
                candidates.add(CRN[node][0])
                return False, "C3", candidates

    else:
    
        tp=V[node].tp
        a=0
        b=0
        C2flag=False
        if node in FRN.keys():
            father=FRN[node]
            a=len(father)
    # =============================================================================
    #         for R in father:
    #             if V[ARN[R].pred].tp==1:
    #                 C2flag=True
    # =============================================================================
        if node in CRN.keys():
            child=CRN[node]
            b=len(child)          
        s=Solver()
        #current node
        n=Int('n')
        if cov1.getCovByName(node)!=-1:
            s.add(n==cov1.getCovByName(node))
        else:
            s.add(n>=0)
        #father node
        fs=IntVector('f', a)
        for i in range(a):
            if ARN[FRN[node][i]].cov!=-1:
                s.add(fs[i]==ARN[FRN[node][i]].cov)
            else:
                if a==1 and cov1.getCovByName(ARN[FRN[node][i]].pred)!=-1:
                    s.add(fs[i]==cov1.getCovByName(ARN[FRN[node][i]].pred))
                    C2flag=True
                else:
                    s.add(fs[i]>=0)   
        if C2flag:
            s.add(Sum([ f for f in fs ])>=n)
        else:
            s.add(Sum([ f for f in fs ])==n)
    
        if str(s.check())!="sat":
            if a!=0:
                candidates=set(FRN[node])
            print(s)
            return False,"C2",candidates
        if b>0:
            s=Solver()
            #current node
            n=Int('n')
            if cov1.getCovByName(node)!=-1:
                s.add(n==cov1.getCovByName(node))
            else:
                s.add(n>=0)
            cs=IntVector('c', b)
            for i in range(b):
                if ARN[CRN[node][i]].cov!=-1:
                    s.add(cs[i]==ARN[CRN[node][i]].cov)
                else:
                    s.add(cs[i]>=0)  
            if tp==3:
                if b==1:
                    s.add(Sum([ c for c in cs ])<=n)
                elif b==2:
                    s.add(Sum([ c for c in cs ])==n)
                #print(V[node].line[0],ARN[FRN[node][0]],s)
                if str(s.check())!="sat":
                    candidates=set(CRN[node])
                    return False,"C3",candidates
            elif tp==2 or tp==1:

                if str(s.check())!="sat":
                    print(s)
                    candidates=set(CRN[node])
                    return False,"C3",candidates
            elif tp>=5:
                if tp==5:
                    s.add(Sum([ c for c in cs ])<=n)
                elif tp==6:
                    s.add(Sum([ c for c in cs ])==n)
                if str(s.check())!="sat":
                    candidates=set(CRN[node])
                    return False,"C3",candidates
    
        if b>0:
            s=Solver()
            #current node
            n=Int('n')
            if cov1.getCovByName(node)!=-1:
                s.add(n==cov1.getCovByName(node))
            else:
                s.add(n>=0)
            fs=IntVector('f', a)
            for i in range(a):
                if ARN[FRN[node][i]].cov!=-1:
                    s.add(fs[i]==ARN[FRN[node][i]].cov)
                else:
                    if a==1 and cov1.getCovByName(ARN[FRN[node][i]].pred)!=-1:
                        s.add(fs[i]==cov1.getCovByName(ARN[FRN[node][i]].pred))
                        C2flag=True
                    else:
                        s.add(fs[i]>=0)   
            if C2flag:
                s.add(Sum([ f for f in fs ])>=n)
            else:
                s.add(Sum([ f for f in fs ])==n)
            cs=IntVector('c', b)
            for i in range(b):
                if ARN[CRN[node][i]].cov!=-1:
                    s.add(cs[i]==ARN[CRN[node][i]].cov)
                else:
                    s.add(cs[i]>=0)  
            if tp==3:
                if b==1:
                    s.add(Sum([ c for c in cs ])<=n)
                elif b==2:
                    s.add(Sum([ c for c in cs ])==n)
                if V[node].line[0]==18:
                    print(a,b,s)
                    print(ARN[CRN[node][0]].agent,ARN[CRN[node][0]].cov)
                if str(s.check())!="sat":
                    print(s)
                    candidates=set(FRN[node])|set(CRN[node])
                    return False,"C2C3",candidates
            elif tp==2 or tp==1:  
                s.add(Sum([ c for c in cs ])<=n)
                if str(s.check())!="sat":
                    
                    candidates=set(FRN[node])|set(CRN[node])
                    return False,"C2C3",candidates
            elif tp>=5:
                if tp==5:
                    s.add(Sum([ c for c in cs ])<=n)
                elif tp==6:
                    s.add(Sum([ c for c in cs ])==n)
                if str(s.check())!="sat":
                    candidates=set(FRN[node])|set(CRN[node])
                    return False,"C2C3",candidates
            

    return True,"sat",set()



if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--compiler", default="gcc",type=str,dest="compiler",help="the cmpiler under test")                
    parser.add_option("--testsuite", default="testsuite",type=str,dest="testsuite",help="the subject testsuite")
    (options,args) = parser.parse_args()
    testsuite=options.testsuite
    compiler=options.compiler

    cfgdir=os.path.join(testsuite,"cfg")
    os.chdir(cfgdir)
    file_list=os.listdir(cfgdir)  
    s=0
    n=len(file_list)
    Debug=True
    Debug=False 
    done=set()
    for file_index in range(s,n):#number
        #get CFG of a program P
        folder=file_list[file_index]
        
        if Debug:
            if folder !="37105":
                continue
            else:
                print(folder)
                  
        if os.path.isdir(folder):
            dot_list=glob.glob(os.path.join(folder,"*.dot"))#number/xx.dot
            skipit=False
            
            print("obtain coverage statistics")
            cov1=Coverage() 
            if cov1.parse(os.path.join(testsuite,folder,folder),compiler)==0:
                continue
            
            #fu
            flfile=os.path.join(cwd,folder,'func_def.txt')
            if os.path.exists(flfile):
                fl=funcloc(flfile)
            else:
                continue

            for dot_index in range(len(dot_list)):
                dot_name=dot_list[dot_index] #number/xx.dot
                a=dot_name.find('_')
                b=dot_name.rfind('.')
                func_name=dot_name[a+1:b]
                out=0
                try:            
                    funcLocation=fl[func_name]
                    called=cov1.getCovByLine(funcLocation)  
                    if func_name=="main" and called!=1:
                        if called<0:
                            called=1
                        else:
                            print("ERROR: in C2",called,out)
                            err=[]
                            err.append(folder)
                            err.append(func_name)
                            err.append("C2")
                            err.append("func")
                            raise MyError(err)

                    
                    print("    Cov("+func_name+") = "+str(called))
                    print("generate reverseCFG for "+str(file_index)+"_"+dot_name)
                    
                    cfg=generateReverseCFG(dot_name)
                    E=cfg.E
                    V=cfg.V
                    cov1.resetStatemenCov()
                    for node in V.values():
                        if not cov1.initial(node.name,node.line,node.tp):
                            recommend=set()
                            for item in node.line:
                                if item>0:
                                    recommend.add(str(item))
                            print("ERROR: C1",)
                            err=[]
                            err.append(folder)
                            err.append(func_name)
                            err.append("C1")
                            err.append('['+(', ').join(list(recommend))+']')
                            raise MyError(err)
                    #print(cov1.statementCov)
                    print("generate PDT")
                    #DFS生成了vertex，parent，修改了semi
                    #step1
                    index=1
                    vertex={}#key是dfn，value是节点对象
                    DFS(cfg,cfg.stop)#stop是reverseCFG的开始节点
                    
                    pre=[-1]*(len(vertex)+1)#forest中的前继关系
                    
                    dom={}#key是nodename，value是key的idom的nodename
                    bucket={}#semi为key的节点集合value 
                    
                    for i in range(len(vertex),1,-1):#按dfn倒序遍历节点
                        w=vertex[i]
                        #step2
                        for v in w.pred:
                            u=vertex[EVAL(V[v].num)]
                            if u.semi<w.semi:
                                w.semi=u.semi
                    
                        if w.semi not in bucket.keys():
                            bucket[w.semi]=set()        
                        bucket[w.semi].add(w)
                        parent=V[w.parent]
                        LINK(parent.num,w.num)
                        
                        #step3,所有节点都会作为v被遍历到，所以dom都会有值
                        if parent.num in bucket.keys():
                            for k in range(len(bucket[parent.num])):
                                v=bucket[parent.num].pop()
                                u=vertex[EVAL(v.num)]
                                if u.semi<v.semi:
                                    v.dom=u
                                else:
                                    v.dom=parent
                    
                    #step4，dfn正序遍历节点，根据公式计算idom
                    for i in range(2,len(vertex)+1):
                        w=vertex[i]
                        if w.dom!=vertex[w.semi]:
                            w.dom=w.dom.dom
                        dom[w.name]=w.dom.name
                    vertex[1].dom=vertex[1]
                    dom[vertex[1].name]=vertex[1].name
                    

                    
                    #cfg是反的
                    print("generate CDG")
                    cdo={}#control dependent on，key是nodename，value是一个list，list的元素是一条有效控制边得出的S
                    cdgpred={}
                    COVS={}#依赖于父节点p的子节点子集S的COV_S
                    FRN={}
                    CRN={} #key:node value:its region node
                    ARN={} #key:name value: region node
                    
                    for e in E.values():
                        if e.label != "":
                            #print(dom[e.tail],e.head,e.tail)
                            commonParent(e.head,e.tail,dom)

                        
                    for R in ARN.values():
                        bh,covs,a=checkS(R.succ)
                        if len(covs)>1:
                            suspects=[]
                            for bro in bh:
                                A,B,C=checkNode(bro)
                                if not A: 
                                    if cov1.getCovByName(bro)<0:
                                        continue
                                    scov=cov1.getCovByName(bro)
                                    for node in bh:
                                        if cov1.getCovByName(node)==scov:
                                            suspects.append(node)
                            recommend=set()
                            if len(suspects)==0:
                                suspects=bh                         
                            for item in suspects:
                                if V[item].line[0]>=0:
                                    recommend.add(str(V[item].line[0]))

                                        
                            print("ERROR:","C1",V[bh[0]].line[0])
                            err=[]
                            err.append(folder)
                            err.append(func_name)
                            err.append("C1")
                            err.append('['+(', ').join(list(recommend))+']')
                            raise MyError(err)
                            
                        if R.pred=='__N0' and called>=0:
                            R.cov=called
                            R.agent=funcLocation
                        elif len(covs)==1 and a==1:
                            for agent in bh:
                                if cov1.getCovByName(agent)>0:  
                                    R.cov=cov1.getCovByName(agent)
                                    R.agent=V[agent].line[0]
                        if R.pred=='__N0' and called<0 and R.cov>=0:
                            called=R.cov

                    for S in V.keys():
                        if V[S].tp==-1:
                            if cov1.getCovByName(S)!=-1:
                                out+=cov1.getCovByName(S)
                        issat,unsatconstraint,candidates=checkNode(S)
                        if not issat:
                            suspects=[]
                            if unsatconstraint == "C2":
                                for RN in candidates:
                                    R=ARN[RN]
                                    Rfather=R.pred
                                    A,B,C= checkNode(Rfather)
                                    if not A:
                                        if R.agent!="":
                                            suspects.append(R.agent)
                            elif unsatconstraint == "C3":
                                for RN in candidates:
                                    R=ARN[RN]
                                    for Rchild in R.succ:
                                        A,B,C= checkNode(Rchild)
                                        if not A:
                                            if R.agent!="":
                                                suspects.append(R.agent)
                                                break
                            if len(suspects)==0:
                                for RN in candidates:
                                    R=ARN[RN]
                                    if R.agent!="":
                                        suspects.append(R.agent)

                            suspects.append(V[S].line[0])
                            recommend=set()
                            for item in suspects:
                                if item>=0:
                                    recommend.add(str(item))
                           
                            print("ERROR:",unsatconstraint,candidates,S,V[S].tp,V[S].line[0])
                            err=[]
                            err.append(folder)
                            err.append(func_name)
                            err.append(unsatconstraint)
                            err.append('['+(', ').join(list(recommend))+']')
                            raise MyError(err)
                                 #LOG(err)
                    print(out)
                    if called>=0 and out>called:
                            print("ERROR: out C3",called, out)
                            err=[]
                            err.append(folder)
                            err.append(func_name)
                            err.append("C3")
                            err.append("func")
                            raise MyError(err)


                except MyError as e:
                    err=e.value
                    LOG(err)
                    print()
                        
                except Exception as e:
                    LOG(e,tp=0,index=file_index,filename=folder)
                
                

          
                            
                            
                    