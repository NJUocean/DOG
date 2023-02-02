# -*- coding: utf-8 -*-

import os
import glob
import re
from graphviz import Digraph
from pathlib import Path
from copy import deepcopy
from queue import LifoQueue
import shutil
from z3 import *
from optparse import OptionParser


class MyError(Exception):
    def __init__(self, value):
        self.value = value

    def __str__(self):
        return repr(self.value)


class ERR:
    def __init__(self, errType, file, func, node, order, message):#,triggerCu):
        self.errType = errType
        self.file = file
        self.func = func
        self.node = node
        self.order = order
        self.message = message

def getTP(node):
    if node != None:
        return tpdict[V[node].tp]
    else:
        return "None"


def CFCNodeLabel(nodename):
    # if getTP(nodename)
    return str(cov1.getCovByName(nodename)) + getTP(nodename) + ', '.join(str(x) for x in getLine(nodename))

def LOGBH(cfc,bhnodes):
    with cfc.subgraph(name='cluster_bh') as bh:
        bh.attr(color='red',label="SFF")
        for i in bhnodes:
            if i != '__N2':
                bh.node(i, label=CFCNodeLabel(i))
def LOGEXIT(cfc,nodes):
    cfc.node("__N0",label=CFCNodeLabel("__N0"))
    cfc.node("EXIT")
    for node in nodes:
        cfc.node(node,label=CFCNodeLabel(node))
        cfc.edge("__N0",node,label="FEL",color="red")
        cfc.edge(node,"EXIT")


def LOGSize(nodes):
    path = os.path.join(resultdir, compiler)
    logfile = os.path.join(path, "diagnostic.txt")
    if len(nodes)==0:
        return
    lines=set()
    nodecount=set()
    for node in nodes:
        if node in V.keys():
            lines.update(set(V[node].line))
            nodecount.add(node)
        else:
            if ARN[node].agent != "":
                nodecount.add(ARN[node].agent[0])
                lines.update(set(V[ARN[node].agent[0]].line))
                nodecount.add(ARN[node].pred)
                lines.update(set(V[ARN[node].pred].line))
    log = str(len(nodecount))+";"+str(len(V.keys())-3)+";"+ str(len(lines))+";"+str(len(funclines))+";"+func_name+"_"+folder+"\n"
    with open(logfile, 'a+') as f:
        f.write(log)
    f.close()


def LOG(err):
    flag = err.errType
    if flag == 0:
        for i in statistics.keys():
            logfile = os.path.join(tcwd, i + '.txt')
            log = "\n".join(sorted(list(statistics[i])))
            with open(logfile, 'a+') as f:
                f.write(log)
            f.close()
        logfile = os.path.join(tcwd, 'triggers.txt')
        with open(logfile, 'a+') as f:
            for item in CuCount.items():
                f.write(str(item[0])+": "+str(item[1])+"\n")
        f.close()
    elif flag > 0:

        folder = err.file
        outdir=os.path.join(tcwd,folder)
        messages = err.message
        funcname = err.func
        currentnode = err.node
        order = err.order
        # print(flag,folder,messages)
        for message in messages:
            if message not in statistics.keys():
                statistics[message] = list()
            if message == "Infer":
                statistics[message].add(folder+"-"+funcname+"-"+currentnode+"["+"/".join(order)+"]")
            elif message == "C0":
                statistics[message].append(folder + "-" + funcname + "-" + CFCNodeLabel(currentnode) )
            elif message == "C4":
                statistics[message].append(folder + "-" + funcname)
            else:
                statistics[message].append(folder)
        if flag == 3:
            statistics["potential-bugs"].add(folder)
        if flag == 1:
            statistics["potential-bugs"].add(folder)
            order = err.order

            cfc = Digraph(comment='control flow context')
            diagnode=set()
            InferFlag = False
            if messages[0] == "C0":
                cfc.node("c", label=getTP(currentnode) + ', '.join(str(x) for x in rankNodeLines(getLines(order))),
                         color="red")
                #diagnode.update(order)
            elif messages[0] == "C1":
                LOGBH(cfc, order)
                diagnode.update(order)
            elif messages[0] == "C4":

                return
            elif messages[0] == "C5":
                LOGEXIT(cfc,order)
            else:


                sus = order[0][4]
                for node in order[0][2]:
                    for i in range(len(NfineBH)):
                        candidateBH=NfineBH[i]
                        if node in candidateBH:
                            bh=candidateBH
                            #print(cov1.getCovByName(node))
                            sus.extend(CovNfineBH[i][cov1.getCovByName(node)])
                            LOGBH(cfc,bh)
                            diagnode.update(bh)
                            NfineBH.pop(i)
                            CovNfineBH.pop(i)
                            break
                if len(order[0][3])>0:
                    LOGEXIT(cfc,errIO)

                cfc.node(currentnode,label=CFCNodeLabel(currentnode), shape="box")
                diagnode.add(currentnode)

                if ("C2C3" in Node2Rule[currentnode] or "C2" in Node2Rule[currentnode]) and currentnode in FRN.keys():
                    for j in FRN[currentnode]:
                        #region father node and father of region farher node

                        rn = "in" + j
                        fn = ARN[j].pred
                        if fn == currentnode:
                            continue

                        cfc.node(rn, label=str(ARN[j].cov), style="dotted")
                        cfc.node(fn, label=CFCNodeLabel(fn))
                        cfc.edge(rn, currentnode, color="red")
                        diagnode.add(j)
                        # edge between region father node and current node

                        #agent of region farher node

                        if ARN[j].agent != "":# and ARN[j].pred != ARN[j].agent[0]:
                            an = ARN[j].agent[0]
                            if an != currentnode:
                                cfc.node(an, label=CFCNodeLabel(an), style="filled", color="lightblue")
                                cfc.edge(rn, an)
                            else:
                                cfc.node(currentnode, shape="box", style="filled", color="lightblue")
                            if an in order[0][0]:
                                cfc.edge(fn, rn, color="red")
                                cfc.node(ARN[j].agent[0], style="filled", color="yellow")

                                InferFlag = True
                            else:
                                cfc.edge(fn, rn)
                        else:
                            cfc.edge(fn, rn)


                if currentnode in CRN.keys():
                    for k in CRN[currentnode]:

                        #region child node
                        rn = "out" + k
                        cfc.node(rn, label=str(ARN[k].cov), style="dotted")
                        # edge between region father node and current node
                        if "C2C3" in Node2Rule[currentnode] or "C3" in Node2Rule[currentnode]:
                            cfc.edge(currentnode, rn, color="red")
                            diagnode.add(k)
                        else:
                            cfc.edge(currentnode, rn)
                        #agent of region child node
                        if ARN[k].agent != "":# and ARN[k].pred != ARN[k].agent[0]:
                            an=ARN[k].agent[0]
                            cfc.node(an, label=CFCNodeLabel(an), style="filled",color="lightblue")
                            cfc.edge(rn, an)
                            #child of region child node
                            for cn in ARN[k].succ:
                                if V[cn].tp > -3 and cn not in ARN[k].agent:
                                    if cn != currentnode:
                                        cfc.node(cn, label=CFCNodeLabel(cn))
                                        if "C2C3" in Node2Rule[cn] or "C2" in Node2Rule[cn]:
                                            cfc.node(an, style="filled", color="yellow")

                                            InferFlag = True
                                            cfc.edge(rn, cn, color="red")
                                        else:
                                            cfc.edge(rn, cn)
                                    else:
                                        if "C2C3" in Node2Rule[cn] or "C2" in Node2Rule[cn]:
                                            cfc.edge(rn, cn, color="red")
                                        else:
                                            cfc.edge(rn, cn)
                        else:
                            for cn in ARN[k].succ:
                                if V[cn].tp > -3:
                                    if cn == currentnode:
                                        if "C2C3" in Node2Rule[cn] or "C2" in Node2Rule[cn]:
                                            cfc.edge(rn, cn,color="red")
                                        else:
                                            cfc.edge(rn, cn)
                                    else:
                                        cfc.node(cn, label=CFCNodeLabel(cn))
                                        cfc.edge(rn, cn)

                for node in sus :

                    cfc.node(node,style="filled",color="yellow")

                    InferFlag = True
            if not os.path.exists(outdir):
                os.mkdir(outdir)
            cfc.render(filename=funcname +"_"+ currentnode +"_"+ "_".join(x for x in set(messages)) , directory=outdir)
            triggerNum.append(folder+"_"+funcname +"_"+ currentnode +"_"+ "_".join(x for x in set(messages)))

            print("ERROR:", message, folder, funcname, order)


def funcloc(flfile):
    res = dict()
    with open(flfile, 'r', errors='ignore') as f:
        lines = f.readlines()
        for line in lines:
            func = line.split(':')[0]
            loc = line.split(':')[1].strip("\n")
            res[func] = int(loc)
    f.close()
    return res


def foo(start, end, call, vis, cpath, infectedcs, locs):
    if start == end:
        cpath.append(start)
        for i in range(len(cpath) - 1):
            for item in locs[cpath[i] + "2" + cpath[i + 1]]:
                infectedcs.add(item)
        cpath.pop()
        vis[start] = False
        return
    vis[start] = True
    cpath.append(start)
    if start in call.keys():
        for callee in call[start]:
            if not vis[callee]:
                foo(callee, end, call, vis, cpath, infectedcs, locs)
    cpath.pop()
    vis[start] = False


def funccall(fcfile, funcs):
    exits = set()
    flowin = dict()
    call = dict()
    locs = dict()
    cpath = list()
    vis = dict()
    infectedcs = set()
    with open(fcfile, 'r', errors='ignore') as f:
        lines = f.readlines()
        for line in lines:
            caller = line.split(':')[0]
            callee = line.split(':')[1]
            loc = line.split(':')[2].strip("\n")

            if str(cov1.getCovByLine(int(loc))) == "0":
                continue
            if caller + "2" + callee not in locs.keys():
                locs[caller + "2" + callee] = list()
            locs[caller + "2" + callee].append(int(loc))
            if callee == "exit" or callee == "abort" or callee == "__builtin_exit" or callee == "__builtin abort":
                if caller != "main":
                    exits.add(caller)
            elif callee in funcs:
                if callee not in flowin.keys():
                    flowin[callee] = list()
                flowin[callee].append(int(loc))
                if caller not in call.keys():
                    call[caller] = set()
                call[caller].add(callee)

    f.close()

    for func in funcs:
        vis[func] = False
    for item in exits:
        foo("main", item, call, vis, cpath, infectedcs, locs)
    return flowin, infectedcs


def parseFreq(freq):
    if freq.isdigit():
        return int(freq)
    if freq == '-' or '':
        return -1
    if freq == "#####":
        return 0
    if freq.endswith('*'):
        return int(freq.strip('*'))
    if freq.endswith('k') or freq.endswith('M'):
        # err = ERR(2, folder, None, None, None, ["k%M"])
        # LOG(err)
        pass
    return -1


class Coverage:
    def __init__(self):
        self.lineCov = dict()  # line number(int) -> freq(int)
        self.statementCov = dict()  # node name(str) -> freq(int)
        self.lines = set()

    def parse(self, testsuite, folder, compiler):
        with open(os.path.join(testsuite, folder, folder) + '.c', 'r', errors='ignore') as f:
            lines = f.readlines()
            lineslen=len(lines)
        f.close()
        if compiler == "gcc":
            cov_file = os.path.join(testsuite, folder, folder) + '.c.gcov'
            if not os.path.exists(cov_file):
                err = ERR(2, folder, None, None, None, ["nogcov"])
                LOG(err)
                return 0

            with open(cov_file, 'r', errors='ignore') as f:
                lines = f.readlines()
                for line in lines:
                    if ":" not in line :
                        continue
                    items = line.split(":")
                    freq = items[0].strip()
                    lnum = items[1].strip()

                    if not lnum.isdigit() or lnum == '0':
                        continue
                    if int(lnum) in self.lineCov.keys():
                        err = ERR(2, folder, None, None, None, ["multiline"])
                        LOG(err)
                        return 0
                    self.lineCov[int(lnum)] = parseFreq(freq)
                    if int(lnum) == lineslen:
                        break

            f.close()
        else:
            cov_file = os.path.join(testsuite, folder, folder) + '.c.lcov'
            if not os.path.exists(cov_file):
                err = ERR(2, folder, None, None, None, ["nolcov"])
                LOG(err)
                return 0


            with open(cov_file, 'r', errors='ignore') as f:
                lines = f.readlines()
                for line in lines:

                    if "|" not in line :
                        continue

                    items = line.split("|", 2)
                    freq = items[1].strip()
                    lnum = items[0].strip()

                    if not lnum.isdigit() or lnum == '0':
                        continue

                    if int(lnum) in self.lineCov.keys():
                        err = ERR(2, folder, None, None, None, ["multiline"])
                        LOG(err)
                        return 0
                    self.lineCov[int(lnum)] = parseFreq(freq)
                    if int(lnum) == lineslen:
                        break

            f.close()

        if set(self.lineCov.values()).issubset({0, -1}):
            err = ERR(3, folder, "main", None, None, ["C4"])
            LOG(err)
            CuCount[Cu[4]] += 1
            return 0

        if len(self.lineCov)!=lineslen:
            print(len(self.lineCov),lineslen)
            return -1
        return len(self.lineCov)

    def getCovByLine(self, line):
        line = int(line)
        if line == -1:
            return -1
        elif line == -2:
            return called
        else:
            return self.lineCov[line]

    def getCovByName(self, name):
        if name == '__N0':
            return called
        else:
            return self.statementCov[name]
    def load(self, name, dp):
        node = V[name]
        lines = node.line
        tp = node.tp
        # print(name,lines)
        if (set(lines) & self.lines) != set():
            if tp == -2 and (set(lines) & self.lines == set([funcLocation])):
                err = ERR(2, folder, None, None, None, ["multinode"])
                # print("multinode: ",name,lines,self.lines)
                raise MyError([err])
            else:
                for line in set(lines) & self.lines:
                    # self.lineCov[line] = -1
                    node.line=[-1]
        dp = dp | (set(lines) & self.lines)
        for line in lines:
            if line > 0:
                self.lines.add(line)

    def initial(self, name):
        node = V[name]
        #print(name, node.line, node.tp, self.getCovByLine(node.line[0]))
        lines = node.line
        tp = node.tp
        succ = True
        covs = set()
        if tp < -2:
            self.statementCov[name] = -1
        else:
            infect = set(lines) & infectedcs
            for line in lines:
                tmp = self.getCovByLine(line)
                if tmp != -1:
                    covs.add(tmp)
            # print("len",len(covs),tp)
            if len(covs) == 0:
                self.statementCov[name] = -1
            elif len(covs) > 1 + len(infect) and tp == 0:  # and self.getCovByLine(lines[0])==0 and max(covs)>0:
                self.statementCov[name] = -1
                #print(name, lines, tp)
                succ = False
            else:
                self.statementCov[name] = max(covs)
        #print(name, node.line, node.tp,self.getCovByName(name))
        return succ

    def update(self, name, freq):
        node = V[name]
        lines = node.line
        self.lines.update(set(lines))
        self.statementCov[name] = freq

    def resetStatemenCov(self):
        self.statementCov = dict()


# 一个node代表一个basicblock，既是CFG中的，也是支配树中的，也是CDG中的
class Node:
    def __init__(self, name):
        self.name = name  # dot文件中节点名称W
        self.num = -1  # dfn
        self.line = []  # basicblock中代码的行号
        self.succ = set()  # CFG上直接子节点集合
        self.pred = set()  # CFG上的直接父节点集合
        self.tp = 0  # 0:非控制头，1:while和for，2:do-while, 3:switch, 4:if
        self.content = ""

        # for dominator
        self.parent = name  # DFS生成树上的直接父节点
        self.semi = 0  # 半支配点

    def addLine(self, linenumber):
        for number in linenumber:
            self.line.append(str(number))

    def addSucc(self, succ):
        self.succ.add(succ)

    def addPred(self, pred):
        self.pred.add(pred)

    def show(self):
        print("node " + self.name + " contains line:", self.line)


class Edge:
    def __init__(self, tail, head, label):
        self.tail = tail
        self.head = head
        self.label = label  # 是否有跳转条件yes/no
        self.name = tail + head

    def show(self):
        print("edge: " + self.tail + " -> " + self.head + " with label " + self.label)


# 在CFG中使用nodename代表node，或作为索引从cfg.V中得到对应的node对象
class CFG:
    def __init__(self):
        self.V = dict()
        self.E = dict()
        self.entry = None
        self.start = None
        self.stop = None
        self.exits = set()

    def addV(self, v):
        self.V[v.name] = v

    def addE(self, e):
        self.E[e.name] = e
        self.V[e.tail].addSucc(e.head)
        self.V[e.head].addPred(e.tail)

    def show(self):
        print("start: ", self.start)
        print("stop: ", self.stop)
        print("V: ", self.V)
        print("E: ", self.E)


def generateReverseCFG(file):
    with open(file, errors='ignore') as f:
        lines = f.readlines()
    l = len(lines)
    if l==0:
        return None
    cfg = CFG()
    entry = Node("__N0")
    entry.tp = -2
    entry.line = [-1]
    cfg.addV(entry)
    cfg.entry = entry.name
    # 解析dot文件
    for i in range(l):

        line = lines[i].strip()
        # print(line.startswith("__"),line)
        if line.startswith("__"):  # 找出cfg点和边的定义

            name = re.findall(r'__N\d+', line)

            if len(name) == 1:  # 定义了node
                label = re.search(r'label=".*?", ', line)
                if label != None:
                    label = label.group()
                else:
                    label = re.search(r'label=".*?"]', line).group()
                statements = label.split(" - passive")
                node = Node(name[0])
                lnums = set()
                if (len(statements) > 1):
                    for index in range(1, len(statements)):
                        statement = statements[index]
                        divide = statement.find(r'\n\n')
                        if divide == -1:
                            content = ''
                            statement = statement
                        else:
                            content = statement[divide + 4:].strip().strip(',').strip(']').strip("\"").strip(r'\n')
                            statement = statement[:divide]
                        tmp2 = statement.split(',')
                        startl = tmp2[1]
                        if (startl == ''):
                            if content == "start":
                                cfg.start = name[0]
                                node.tp = -3
                            elif content == "end":

                                cfg.stop = name[0]
                                node.tp = -4
                            continue
                        endl = tmp2[3]
                        # print(startl,endl)
                        for lnum in range(int(startl), int(endl) + 1):
                            lnums.add(lnum)
                    node.line = list(lnums)
                else:
                    divide = label.find(r'\n\n')
                    if divide == -1:
                        content = ''
                        label = label
                    else:
                        content = label[divide + 4:].strip().strip(',').strip(']').strip("\"").strip(r'\n')
                        label = label[:divide]
                    tmp1 = label.split(' - ')

                    if len(tmp1) == 2:

                        if tmp1[1].find("do-while ") != -1:
                            node.tp = 1
                        elif tmp1[1].find("while-for") != -1:
                            node.tp = 2
                        elif tmp1[1].find("if ") != -1:
                            node.tp = 3
                        elif tmp1[1].find("switch-default ") != -1:
                            node.tp = 4
                        elif tmp1[1].find("switch-case ") != -1:
                            node.tp = 4.5
                        elif tmp1[1].find("switch ") != -1:
                            node.tp = 5
                        elif tmp1[1].find("return ") != -1:
                            node.tp = -1
                        elif tmp1[1].find("continue ") != -1:
                            node.tp = 1.5
                        elif tmp1[1].find("break ") != -1:
                            node.tp = 2.5
                        elif tmp1[1].find("goto ") != -1:
                            node.tp = 0.5

                        tmp2 = tmp1[1].split(',')
                        startl = tmp2[1]
                        if (startl != ''):
                            endl = tmp2[3]
                            # print(startl,endl)
                            for lnum in range(int(startl), int(endl) + 1):
                                lnums.add(lnum)
                        node.line = list(lnums)

                        if node.tp == -1 or node.tp == -1:
                            cfg.exits = cfg.exits | lnums

                if not lnums:
                    node.line = [-1]
                elif (content.find('{') != -1 or content.find('}') != -1) and (
                        content.find('({') != -1 or content.find('})') != -1):
                    if len(node.line) == 1:
                        cov1.lineCov[int(startl)] = -1
                    elif len(node.line) == 2:
                        cov1.lineCov[int(endl)] = -1
                    else:
                        for item in node.line:
                            if int(item) > int(startl) + 1:
                                cov1.lineCov[int(item)] = -1
                node.line.sort()
                cfg.addV(node)

            else:  # 定义了edge
                label = re.search(r'label=".*?"', line).group()
                edge = Edge(name[1], name[0], label[7:-1])
                # 为switch语句（tp>=5）出来的所有边添上true标签，
                # 并且如果有default语句的话，将switch语句的tp由5改为6
                if cfg.V[name[0]].tp >= 5:
                    edge.label = "yes"

                cfg.addE(edge)
    f.close()
    cfg.addE(Edge(cfg.start, entry.name, "yes"))
    cfg.addE(Edge(cfg.stop, entry.name, "no"))


    return cfg


# DFS的过程中，生成按dfn索引的vertex list，将semi先置为dfn，并修改每个节点的parent属性
def DFS(cfg, entryname):
    global index
    entry = cfg.V[entryname]
    entry.semi = index
    vertex[index] = entry
    entry.num = index
    index = index + 1
    for succname in entry.succ:
        succ = cfg.V[succname]
        if succ.semi == 0:
            succ.parent = entryname
            DFS(cfg, succname)


# LINK和EVAL都是使用dfn代表node，或者作为索引从vertex中获取node对象
def LINK(parent, son):
    pre[son] = parent


def EVAL(v):
    res = v
    semi = len(vertex)
    while (pre[v] != -1):
        tmpsemi = vertex[v].semi
        if tmpsemi < semi:
            semi = tmpsemi
            res = v
        v = pre[v]
    return res


class RegionNode:
    def __init__(self, name):
        self.name = name  # dot文件中节点名称W
        self.succ = ""  # CDG上直接子节点集合
        self.pred = ""  # CDG上直接父节点集合
        self.cov = -1
        self.agent = ""
        self.min = 0
        self.max = -1
        self.infected = 0

    def setSucc(self, succ):
        self.succ = succ

    def setPred(self, pred):
        self.pred = pred


def commonParent(tail, head, dom):
    A = tail
    B = head
    ancesterA = set()
    pathBL = set()
    result=None
    while (dom[A] != A):
        ancesterA.add(A)
        A = dom[A]
    ancesterA.add(A)
    while (B not in ancesterA):
        pathBL.add(B)
        B = dom[B]
    if B == tail:
        pathBL.add(B)
    if len(pathBL) > 0:
        if tail not in CRN.keys():
            COVS[tail] = []
            CRN[tail] = []

        COVS[tail].append(-1)
        RNname = tail + head
        R = RegionNode(RNname)
        R.setSucc(pathBL)
        R.setPred(tail)
        R.infected = len(getLines(pathBL) & infectedcs)
        ARN[RNname] = R
        CRN[tail].append(RNname)
        if R.infected>0:
            result=RNname


        for node in pathBL:
            if node not in FRN.keys():
                FRN[node] = []
                # cdgpred[node]=set()
            FRN[node].append(RNname)
            # cdgpred[node].add(tail)
    return result

def epidemic(rnlist):
    newlist=set()
    for rn in rnlist:
        tmp=ARN[rn].pred
        if V[tmp].line[0]>0:
            infectedcs.add(V[tmp].line[0])
        if tmp in FRN.keys():
            for f in FRN[tmp]:
                if ARN[f].pred!="__N0" and f!=rn:
                    newlist.add(f)
    #print(rnlist,newlist)
    return newlist


def SKIP(err):
    tcwd = os.path.join(testsuite, "result")
    folder = err[0]
    if folder not in done:
        done.add(folder)
        skiptype = err[1]
        logfile1 = os.path.join(tcwd, skiptype + '.txt')
        log = '-'.join(err[1:]) + '\n'
        with open(logfile1, 'a+') as f:
            f.write(log)
        f.close()

def defaultcheck(node):
    for RN in CRN[node]:
        for i in ARN[RN].succ:
            if getTP(i)=="-switch-default-":
                return True
    return False

def checkNode(node):
    candidates = list()
    sat = True
    results = dict()
    if node == '__N0':
        pass
    else:
        tp = V[node].tp
        if tp == 5 and defaultcheck(node):
            tp = 6
        a = 0
        b = 0
        C2flag = False
        if node in FRN.keys():
            father = FRN[node]
            a = len(father)
        if node in CRN.keys():
            child = CRN[node]
            b = len(child)
        if a == 0 and (set(V[node].line) & duplines != set()):
            return sat, results

        if cov1.getCovByName(node) != -1:
            s = Solver()
            # current node
            n = Int('n')
            s.add(n == cov1.getCovByName(node))
            fs = IntVector('f', a)
            for i in range(a):
                fRegion = ARN[FRN[node][i]]
                if  len(getLines(fRegion.succ) & infectedcs) > 0:
                    C2flag = True
                if str(fRegion.cov).isdigit() and fRegion.cov != -1:
                    s.add(fs[i] == fRegion.cov)
                else:
                    s.add(fs[i] >= 0)
                    grandf = fRegion.pred
                    gfcov = cov1.getCovByName(grandf)
                    other = 0

                    if gfcov != -1 and grandf!="__N0":
                        ccount = 0
                        if not (grandf in Node2Rule.keys() and len(Node2Rule[grandf])>0):
                            for tmp in CRN[grandf]:
                                if tmp != FRN[node][i] and str(ARN[tmp].cov).isdigit() and ARN[tmp].cov!= -1:
                                    other = other + ARN[tmp].cov
                                    ccount += 1
                            # print(node,ccount,len(CRN[grandf]))
                        x = len(CRN[grandf])
                        if ccount == x - 1 and ((V[grandf].tp == 3 and x == 2) or V[grandf].tp == 6):  # swich and if
                            s.add(fs[i] == gfcov - other)
                            fRegion.cov = "= "+str(gfcov - other)
                        else:
                            s.add(fs[i] <= gfcov - other)
                            fRegion.cov = "<= "+str(gfcov - other)

            if C2flag:
                s.add(Sum([f for f in fs]) >= n)
            else:
                s.add(Sum([f for f in fs]) == n)

            if str(s.check()) != "sat":
                sat = False
                if node in FRN.keys():
                    results["C2"] = FRN[node]

                else:
                    results["C2"] = []

            if b > 0:
                s = Solver()
                # current node
                n = Int('n')
                if cov1.getCovByName(node) != -1:
                    s.add(n == cov1.getCovByName(node))
                else:
                    s.add(n >= 0)
                cs = IntVector('c', b)
                for i in range(b):
                    if str(ARN[CRN[node][i]].cov).isdigit() and ARN[CRN[node][i]].cov != -1:
                        s.add(cs[i] == ARN[CRN[node][i]].cov)
                    else:
                        s.add(cs[i] >= 0)
                if tp == 3:
                    if b == 1:
                        s.add(Sum([c for c in cs]) <= n)
                    elif b == 2:
                        s.add(Sum([c for c in cs]) == n)

                elif tp == 2 or tp == 1:
                    s.add(Sum([c for c in cs]) <= n)

                elif tp >= 5:
                    if tp == 5:
                        s.add(Sum([c for c in cs]) <= n)
                    elif tp == 6:
                        s.add(Sum([c for c in cs]) == n)
                # for xx in V:
                #     print(V[xx].line,cov1.getCovByName(xx))
                if str(s.check()) != "sat":
                    sat = False
                    results["C3"] = CRN[node]
                    # print(node,CRN[node])


        else:
            if b > 0:
                s = Solver()
                # current node
                n = Int('n')
                s.add(n >= 0)
                fs = IntVector('f', a)
                for i in range(a):
                    fRegion = ARN[FRN[node][i]]
                    if len(getLines(fRegion.succ) & infectedcs) > 0:
                        C2flag = True
                    if str(fRegion.cov).isdigit() and fRegion.cov != -1:
                        s.add(fs[i] == fRegion.cov)
                    else:
                        s.add(fs[i] >= 0)

                        grandf = fRegion.pred
                        gfcov = cov1.getCovByName(grandf)
                        other = 0
                        if gfcov != -1 and grandf!="__N0":
                            ccount = 0
                            if not (grandf in Node2Rule.keys() and len(Node2Rule[grandf])>0):
                                for tmp in CRN[grandf]:
                                    if tmp != FRN[node][i] and str(ARN[tmp].cov).isdigit() and ARN[tmp].cov != -1:
                                        other = other + ARN[tmp].cov
                                        ccount += 1
                            x = len(CRN[grandf])
                            #print(x,ccount)
                            if ccount == x - 1 and (
                                    (V[grandf].tp == 3 and x == 2) or V[grandf].tp == 6):  # swich and if
                                s.add(fs[i] == gfcov - other)
                            else:
                                s.add(fs[i] <= gfcov - other)

                if C2flag:
                    s.add(Sum([f for f in fs]) >= n)
                else:
                    s.add(Sum([f for f in fs]) == n)
                cs = IntVector('c', b)
                for i in range(b):
                    if str(ARN[CRN[node][i]].cov).isdigit() and ARN[CRN[node][i]].cov != -1:
                        s.add(cs[i] == ARN[CRN[node][i]].cov)
                    else:
                        s.add(cs[i] >= 0)
                if tp == 3:
                    if b == 1:
                        s.add(Sum([c for c in cs]) <= n)
                    elif b == 2:
                        s.add(Sum([c for c in cs]) == n)
                elif tp == 2 or tp == 1:
                    s.add(Sum([c for c in cs]) <= n)
                elif tp >= 5:
                    if tp == 5:
                        s.add(Sum([c for c in cs]) <= n)
                    elif tp == 6:
                        s.add(Sum([c for c in cs]) == n)

                if str(s.check()) != "sat":
                    candidates = [FRN[node], CRN[node]]
                    # return False,"C2C3",candidates
                    sat = False
                    results["C2C3"] = candidates

    return sat, results

def CheckFunCall(folder,func_name):
    # cfc = Digraph(comment='control flow context')
    enter = cov1.getCovByName("__N0")
    call = 0

    s = Solver()
    n = Int('n')

    if enter < 0:
        s.add(n >= 0)
    else:
        s.add(n == enter)
    # cfc.node("n", label=CFCNodeLabel("__N0"))
    i = Int('i')
    s.add(n <= i)

    if func_name == "main":
        s.add(i == 1)
    elif func_name in flowin.keys():
        fs = IntVector('f', len(flowin[func_name]))
        for index in range(len(flowin[func_name])):
            cs = flowin[func_name][index]
            # cfc.node("f" + str(index), label="Line_"+str(cs)+"_call_"+str(cov1.getCovByLine(cs)))
            # cfc.edge("f" + str(index),"n")
            if cov1.getCovByLine(cs) > -1:
                call += cov1.getCovByLine(cs)
                s.add(fs[index] == cov1.getCovByLine(cs))
            else:
                s.add(fs[index] >= 0)
        s.add(Sum([f for f in fs]) >= i)

    if str(s.check()) != "sat":
        CuCount[Cu[4]] += 1
        LOG(ERR(3, folder, func_name, None, None, ["C4"]))
        Node2Rule["__N0"].add("C4")

def CheckFunExit(cfc,folder, func_name):
    # cfc = Digraph(comment='control flow context')
    enter = cov1.getCovByName("__N0")
    errIO = set()
    exit = 0
    nodeCov=dict()

    s = Solver()
    n = Int('n')

    if enter < 0:
        s.add(n >= 0)
    else:
        s.add(n == enter)
    # cfc.node("n", label=CFCNodeLabel("__N0"))
    o = Int('o')
    if len(funclines & infectedcs) == 0:
        s.add(n == o)
    else:
        s.add(n >= o)
    outlist=list()
    for n in V[cfg.stop].succ:
        if n!="__N0" and V[n].tp > -3 and dom[n] == cfg.stop :
            outlist.append(n)
    if len(outlist)>0:
        ss = IntVector('s', len(outlist))
        for index in range(len(outlist)):
            n=outlist[index]
            flag1 = True
            flag2 = True
            nodeCov[n]=list()
            # cfc.node("s" + str(index), label=CFCNodeLabel(n))
            # cfc.edge("n","s" + str(index))
            if len(set(V[n].line) & infectedcs)!=0:
                s.add(ss[index] >= 0)
            else:
                errIO.add(n)
                tmp1=0
                tmp2=0
                if cov1.getCovByName(n) != -1:
                    tmp1+=cov1.getCovByName(n)
                elif n in FRN.keys():
                    for frn in FRN[n]:
                        if str(ARN[frn].cov).isdigit() and ARN[frn].cov != -1:
                            tmp1 += ARN[frn].cov
                        else:
                            flag1 = False
                if n in CRN.keys():
                    for crn in CRN[n]:
                        if str(ARN[crn].cov).isdigit() and ARN[crn].cov != -1:
                            tmp2 += ARN[crn].cov
                        else:
                            flag2 = False

                if flag1:
                    if flag2:
                        s.add(ss[index]==tmp1 - tmp2)
                        exit+=tmp1 - tmp2
                        nodeCov[n].append("=")
                    else:
                        s.add(ss[index] >= 0)
                        s.add(ss[index]<=tmp1 - tmp2)
                        nodeCov[n].append("<=")
                    nodeCov[n].append(tmp1 - tmp2)
                else:
                    nodeCov[n].append(">=")
                    if flag2:
                        s.add(ss[index]>=tmp1 - tmp2)
                        exit += tmp1 - tmp2
                        nodeCov[n].append(tmp1 - tmp2)
                    else:
                        s.add(ss[index]>=0)
                        nodeCov[n].append(tmp1 - tmp2)
                #print(flag1,flag2)
        s.add(Sum([s for s in ss]) == o)
    else:
        s.add(o>=0)

    if str(s.check()) != "sat":
        cfc.node("__N0", label=CFCNodeLabel("__N0"))
        cfc.node("EXIT")
        for item in nodeCov.items():
            cfc.node(item[0], label=CFCNodeLabel(item[0]))
            cfc.edge("__N0", item[0], label="FEL", color="red")
            cfc.edge(item[0], "EXIT",label=item[1][0]+str(item[1][1]))
        triggerNum.append(folder+"_"+func_name+"_call")
        return errIO
    return set()


def getLine(node):
    l = len(V[node].line)
    if l < 1:
        return V[node].line
    else:
        return [V[node].line[0], V[node].line[-1]]


def getLines(nodes):
    lines = set()
    for node in nodes:
        if node != None:
            for line in V[node].line:
                lines.add(line)
    return lines


def rankNodeLines(recommend):
    count = dict()
    nocov = []
    # print(cov1.lineCov)
    for item in recommend:
        tmp = cov1.getCovByLine(int(item))
        if tmp == -1:
            nocov.append(item)
        else:
            if tmp not in count.keys():
                count[tmp] = list()
            count[tmp].append(item)

    ranked = sorted(count.items(), key=lambda kv: (len(kv[1]), kv[0]))
    final = []
    for i in ranked:
        final.extend(i[1])
    final.extend(nocov)
    return final


def sumLines(nodes):
    count = 0
    for node in nodes:
        count = count + len(V[node].line)
    return count


def rankRegionNodes(ok):
    count = dict()

    for item in ok:
        tmp = cov1.getCovByName(item)
        if tmp not in count.keys():
            count[tmp] = list()
        count[tmp].append(item)

    ranked = sorted(count.items(), key=lambda kv: (sumLines(kv[1]), kv[0]))
    order = []
    for i in ranked:
        order.extend(i[1])
    return order


def checkBH(name, bh):
    covSet = dict()
    nocovNode = []
    suspects = []
    okNode = []
    flag = True
    order = []

    succofrn=set()
    frns = name.split("+")
    for frn in frns:
        succofrn.update(getLines(ARN[frn].succ))

    for bro in bh:
        coverage = cov1.getCovByName(bro)
        # =============================================================================
        #         if name=="__N44__N46":
        #             print(bro,coverage)
        # =============================================================================
        if coverage == -1:
            nocovNode.append(bro)

        else:
            if coverage not in covSet.keys():
                covSet[coverage] = []
            covSet[coverage].append(bro)

    #print(len(covSet.keys()),succofrn ,infectedcs,getLines(bh))
    if len(covSet.keys()) > 1 + len(succofrn & infectedcs):
        flag = False

    elif len(covSet.keys()) == 1 and "+" not in name:  # and getLines():
        if ARN[name].cov == -1 and ARN[name].pred!="__N0":
            ARN[name].cov = list(covSet.items())[0][0]
            ARN[name].agent = list(covSet.items())[0][1]

    elif len(succofrn & infectedcs) == 0:
        if 0 in covSet.keys():
            for tmp in name.split('+'):
                if ARN[tmp].cov == -1:
                    ARN[tmp].cov = 0
                    ARN[tmp].agent = covSet[0]

    return flag, covSet


def checkS(S):
    tmp = set()
    bhcovs = set()
    brotherhood = []
    allcovs = set()
    for node in S:
        if not tmp:
            tmp = set(FRN[node])
        tmp = tmp & set(FRN[node])

    for node in S:
        coverage = cov1.getCovByName(node)
        allcovs.add(coverage)
        if set(FRN[node]) == tmp:
            brotherhood.append(node)
            if coverage != -1:
                bhcovs.add(coverage)

    return brotherhood, bhcovs, len(tmp), allcovs

def violatedBrothers(node):
    for bh in NfineBH:
        if node in bh:
            return True
    return False

if __name__ == "__main__":
    parser = OptionParser()
    parser.add_option("--compiler", default="clang", type=str, dest="compiler", help="the cmpiler under test")
    parser.add_option("--testsuite", default="ManualTests", type=str, dest="testsuite",
                      help="the subject testsuite")
    (options, args) = parser.parse_args()
    testsuite = options.testsuite
    compiler = options.compiler
    resultdir = os.path.join(testsuite,"result")
    tcwd = os.path.join(resultdir, compiler)

    if os.path.exists(tcwd):
        shutil.rmtree(tcwd)
    if not os.path.exists(tcwd):
        os.makedirs(tcwd)

    skip=[]

    os.chdir(testsuite)
    file_list = sorted(os.listdir(testsuite))
    s = 0
    n = len(file_list)
    Debug = True
    Debug = False
    verbose = True
    done = set()
    statistics = dict()
    statistics["potential-bugs"] = set()
    statistics["Infer"] = set()
    duplines = set()
    tpdict = dict()
    tpdict[0] = "-passive-"
    tpdict[1] = "-do-while-"
    tpdict[2] = "-while-for-"
    tpdict[3] = "-if-"
    tpdict[4] = "-switch-default-"
    tpdict[4.5] = "-switch-case-"
    tpdict[5] = "-switch-"
    tpdict[6] = "-switch-"
    tpdict[1.5] = "-return-"
    tpdict[2.5] = "-break-"
    tpdict[0.5] = "-goto-"
    tpdict[-1] = "-exit-"
    tpdict[-2] = "-func-entry-"

    Cu=["C0","C1","C2","C3","C4","C5","C2C3"]
    CuCount=dict()
    for cu in Cu:
        CuCount[cu]=0
    funcNodeNum=list()
    funcLineNum=list()
    triggerNum=list()
    for file_index in range(s, n):  # number

        folder = file_list[file_index]
        if Debug:
            #print("folder: ",folder)
            if folder != "89470":
                continue
            else:
                print(folder)
        if folder in skip:
            print("skip")
            continue
        if not folder.isdigit():
            continue

        interval = ERR(-1, folder, None, None, None, None)

        if os.path.isdir(folder):
            dot_list = glob.glob(os.path.join(folder,"cfg", "*.dot"))  # number/xx.dot
            skipit = False

            print("obtain coverage statistics")
            cov1 = Coverage()
            xyz=cov1.parse(testsuite, folder, compiler)
            if xyz<=0:
                if xyz==-1:
                    err = ERR(2, folder, None, None, None, ["skip"])
                    LOG(err)
                continue

            # fu
            flfile = os.path.join(testsuite, folder, 'func_def.txt')
            if os.path.exists(flfile):
                fl = funcloc(flfile)
            else:
                continue
            fcfile = os.path.join(testsuite, folder, 'func_call.txt')
            if os.path.exists(fcfile):

                flowin, infectedcs = funccall(fcfile, fl.keys())
            else:
                flowin = dict()
                infectedcs = set()

            for dot_index in range(len(dot_list)):
                dot_name = dot_list[dot_index]  # number/xx.dot
                func_name = dot_name.split('/')[-1][:-4]
                ERRFLAG = False
                NfineBH = list() #
                CovNfineBH = list()  #
                fineFlag=True
                try:
                    funcLocation = fl[func_name]
                    called = cov1.getCovByLine(funcLocation)
                    if func_name == "main":
                        # print("passed")
                        if set(cov1.lineCov.values()).issubset({0, -1}):
                            err = ERR(3, folder, "main", None, None, ["C4"])
                            LOG(err)
                            CuCount[Cu[4]] += 1
                            # LOG(err)
                            outdir = os.path.join(resultdir, compiler, folder)
                            if not os.path.exists(outdir):
                                os.mkdir(outdir)
                            # print(outdir)
                            # cfc.render(filename=func_name, directory=outdir)
                            continue
                        if called == -1:
                            called = 1

                    print("    Cov(" + func_name + ") = " + str(called))
                    print("generate reverseCFG for " + str(file_index) + "_" + dot_name)

                    cfg = generateReverseCFG(dot_name)
                    if cfg == None:
                        continue
                    E = cfg.E
                    V = cfg.V
                    funcNodeNum.append(len(V.keys())-3)
                    #
                    cov1.resetStatemenCov()
                    funclines=set()
                    for nodename in V.keys():
                        cov1.load(nodename,duplines)
                        funclines.update(set(V[nodename].line))
                    cov1.update("__N0",cov1.getCovByLine(funcLocation))
                    if -1 in funclines:
                        funclines.remove(-1)
                    funcLineNum.append(len(funclines))
                    susnodes=set()
                    susedges=set()
                    cfc = Digraph(comment='control flow context')
                    for nodename in V.keys():
                        if not cov1.initial(nodename):

                            order = [nodename]
                            CuCount[Cu[0]]+=1

                            LOG(ERR(3, folder, func_name, nodename, order, ["C0"]))



                    print("generate PDT")
                    # DFS生成了vertex，parent，修改了semi
                    # step1
                    index = 1
                    vertex = {}  # key是dfn，value是节点对象
                    DFS(cfg, cfg.stop)  # stop是reverseCFG的开始节点

                    pre = [-1] * (len(vertex) + 1)  # forest中的前继关系

                    dom = {}  # key是nodename，value是key的idom的nodename
                    bucket = {}  # semi为key的节点集合value

                    for i in range(len(vertex), 1, -1):  # 按dfn倒序遍历节点
                        w = vertex[i]
                        # step2
                        for v in w.pred:
                            u = vertex[EVAL(V[v].num)]
                            if u.semi < w.semi:
                                w.semi = u.semi

                        if w.semi not in bucket.keys():
                            bucket[w.semi] = set()
                        bucket[w.semi].add(w)
                        parent = V[w.parent]
                        LINK(parent.num, w.num)

                        # step3,所有节点都会作为v被遍历到，所以dom都会有值
                        if parent.num in bucket.keys():
                            for k in range(len(bucket[parent.num])):
                                v = bucket[parent.num].pop()
                                u = vertex[EVAL(v.num)]
                                if u.semi < v.semi:
                                    v.dom = u
                                else:
                                    v.dom = parent

                    # step4，dfn正序遍历节点，根据公式计算idom
                    for i in range(2, len(vertex) + 1):
                        w = vertex[i]
                        if w.dom != vertex[w.semi]:
                            w.dom = w.dom.dom
                        dom[w.name] = w.dom.name
                    vertex[1].dom = vertex[1]
                    dom[vertex[1].name] = vertex[1].name

                    # cfg是反的
                    print("generate CDG")
                    cdo = {}  # control dependent on，key是nodename，value是一个list，list的元素是一条有效控制边得出的S
                    cdgpred = {}
                    COVS = {}  # 依赖于父节点p的子节点子集S的COV_S
                    FRN = {}  # key:node name value:its father region nodes
                    CRN = {}  # key:node name value:its children region nodes
                    ARN = {}  # key:region node name value: region node
                    Node2Rule = dict()
                    for node in V.keys():
                        Node2Rule[node] = set()
                    triggers = dict()

                    infectedRN=set()
                    positiveRN=set()
                    for e in E.values():
                        if e.label != "":
                            tmp=commonParent(e.head, e.tail, dom)
                            if tmp!=None:
                                infectedRN.add(tmp)

                    while(len(infectedRN)!=0):
                        positiveRN.update(infectedRN)
                        tmp=epidemic(infectedRN)
                        infectedRN=tmp-positiveRN


                    bhs = dict()
                    for node in V.keys():
                        if node not in FRN.keys():
                            continue
                        allFRN = "+".join(sorted(FRN[node]))
                        if allFRN not in bhs.keys():
                            bhs[allFRN] = list()
                        if cov1.getCovByName(node)>-1:
                            bhs[allFRN].append(node)

                    for item in bhs.items():
                        out, covSet = checkBH(item[0], item[1])
                        if out == False:
                            CuCount[Cu[1]] += 1
                            NfineBH.append(item[1])
                            CovNfineBH.append(covSet)
                            LOGBH(cfc,item[1])
                            LOG(ERR(3, folder, func_name, None, item[1], ["C1"]))
                            ERRFLAG = True
                            trigger=set()
                            for node in item[1]:
                                Node2Rule[node].add("C1")
                                susnodes.add(node)
                                # trigger.


                    for R in ARN.values():
                        if R.pred!="__N0" and cov1.getCovByName(R.pred) == 0 and R.cov == -1:
                            R.cov = 0
                            R.agent = [R.pred]

                        if len(getLines(R.succ) & infectedcs)>0:
                            R.cov = -1
                            R.agent = ""

                    errIO=set()
                    errIO = CheckFunExit(cfc,folder, func_name)
                    if len(errIO)>0:
                        CuCount[Cu[5]] += 1
                        Node2Rule["__N0"].add("C5")
                        ERRFLAG = True
                        LOG(ERR(3, folder, func_name, None, errIO, ["C5"]))
                        for node in errIO:
                            susnodes.add(node)
                            Node2Rule[node].add("C5")
                    CheckFunCall(folder, func_name)

                    for S in V.keys():
                        issat, results = checkNode(S)
                        if not issat:
                            ERRFLAG = True
                            cfc.node(S, label=CFCNodeLabel(S))
                            susnodes.add(S)
                            for item in results.items():
                                # LOGSize(susnodes)
                                unsatconstraint = item[0]
                                candidates = item[1]
                                # susnodes = set(item[1])
                                # susnodes.add(S)
                                # Node2Rule[S].append(unsatconstraint)
                                if unsatconstraint == "C2":
                                    CuCount[Cu[2]] += 1
                                    Node2Rule[S].add("C2")
                                    LOG(ERR(3, folder, func_name, S, candidates, ["C2"]))
                                    if len(candidates)==0:
                                        Node2Rule[S].add("Dead")
                                        cfc.node("dead", label="dead code")
                                        cfc.edge("dead", S, color="red", label="IL")
                                    for RN in candidates:
                                        R = ARN[RN]
                                        Rfather = R.pred
                                        if R.cov == -1 or Rfather == S:
                                            continue
                                        cfc.node(RN, label=str(R.cov), style="dotted")
                                        cfc.edge(RN, S, color="red",label="IL")
                                        if R.agent!="":
                                            agent = R.agent[0]
                                            Node2Rule[agent].add("C3")
                                            susnodes.add(agent)
                                            cfc.node(agent, label=CFCNodeLabel(agent))
                                            if RN+agent not in susedges:
                                                susedges.add(RN+agent)
                                                cfc.edge(RN, agent, color ="lightblue",label="agent")
                                        else:
                                            LOG(ERR(2, folder, func_name, S, candidates, ["completion"]))
                                            cfc.node(Rfather, label=CFCNodeLabel(Rfather))
                                            for ocn in CRN[Rfather]:
                                                oR = ARN[ocn]
                                                if oR.cov == -1 or (not str(oR.cov).isdigit() and ocn != RN):
                                                    continue
                                                if ocn != RN:
                                                    cfc.node(ocn, label=str(oR.cov), style="dotted")
                                                    if oR.agent != "":
                                                        oagent = oR.agent[0]
                                                        cfc.node(oagent, label=CFCNodeLabel(oagent))
                                                        susnodes.add(oagent)
                                                        cfc.edge(ocn, oagent, color="lightblue", label="agent")
                                                        Node2Rule[oagent].add("CP")
                                                    cfc.edge(Rfather, ocn)
                                                else:
                                                    cfc.edge(Rfather, RN, label="complete")
                                            susnodes.add(Rfather)
                                            Node2Rule[Rfather].add("CP")

                                elif unsatconstraint == "C3":
                                    CuCount[Cu[3]] += 1
                                    Node2Rule[S].add("C3")
                                    LOG(ERR(3, folder, func_name, S, candidates, ["C3"]))
                                    for RN in candidates:
                                        R = ARN[RN]
                                        sflag = False
                                        if R.cov == -1:
                                            continue
                                        cfc.node(RN, label=str(R.cov), style="dotted")
                                        cfc.edge(S, RN, color="red",label="ON")
                                        if R.agent != "":
                                            agent = R.agent[0]
                                            Node2Rule[agent].add("C2")
                                            susnodes.add(agent)
                                            cfc.node(agent, label=CFCNodeLabel(agent))
                                            if RN + agent not in susedges:
                                                susedges.add(RN + agent)
                                                cfc.edge(RN, agent, color="lightblue",label="agent")
                                elif unsatconstraint == "C2C3":
                                    CuCount[Cu[6]] += 1
                                    LOG(ERR(3, folder, func_name, S, candidates, ["C2C3"]))
                                    if len(candidates)==0:
                                        cfc.node("dead", label="dead code")
                                        cfc.edge("dead", S, color="red", label="IL")
                                    for RN in candidates[0]:
                                        R = ARN[RN]
                                        Rfather = R.pred
                                        if R.cov == -1 or Rfather == S:
                                            continue
                                        cfc.node(RN, label=str(R.cov), style="dotted")
                                        cfc.edge(RN, S, color="red",label="IL")
                                        if R.agent != "":
                                            agent = R.agent[0]
                                            Node2Rule[agent].add("C3")
                                            susnodes.add(agent)
                                            cfc.node(agent, label=CFCNodeLabel(agent))
                                            if RN + agent not in susedges:
                                                susedges.add(RN + agent)
                                                cfc.edge(RN, agent, color="lightblue",label="agent")
                                        else:
                                            LOG(ERR(2, folder, func_name, S, candidates, ["completion"]))
                                            cfc.node(Rfather, label=CFCNodeLabel(Rfather))
                                            for ocn in CRN[Rfather]:
                                                oR = ARN[ocn]
                                                if oR.cov == -1 or (not str(oR.cov).isdigit() and ocn != RN):
                                                    continue
                                                if ocn != RN:
                                                    cfc.node(ocn, label=str(oR.cov), style="dotted")
                                                    if oR.agent != "":
                                                        oagent = oR.agent[0]
                                                        cfc.node(oagent, label=CFCNodeLabel(oagent))
                                                        susnodes.add(oagent)
                                                        cfc.edge(ocn, oagent, color="lightblue", label="agent")
                                                        Node2Rule[oagent].add("CP")
                                                    cfc.edge(Rfather, ocn)
                                                else:
                                                    cfc.edge(Rfather, ocn, "complete")
                                            susnodes.add(Rfather)
                                            Node2Rule[Rfather].add("CP")

                                    for RN in candidates[1]:
                                        R = ARN[RN]
                                        sflag = False
                                        if R.cov == -1:
                                            continue
                                        cfc.node(RN, label=str(R.cov), style="dotted")
                                        cfc.edge(S, RN, color="red",label="ON")
                                        if R.agent!="":
                                            agent = R.agent[0]
                                            Node2Rule[agent].add("C2")
                                            susnodes.add(agent)
                                            cfc.node(agent, label=CFCNodeLabel(agent))
                                            if RN + agent not in susedges:
                                                susedges.add(RN + agent)
                                                cfc.edge(RN, agent, color="lightblue",label="agent")

                    for node in V.keys():
                        if len(Node2Rule[node])>1:
                            cfc.node(node,style="filled",color="yellow")
                            LOG(ERR(2, folder, func_name, node, Node2Rule[node], ["Infer"]))

                    if ERRFLAG:
                        outdir = os.path.join(resultdir, compiler, folder)
                        if not os.path.exists(outdir):
                            os.mkdir(outdir)
                        cfc.render(filename=func_name, directory=outdir)
                        LOGSize(susnodes)
                except MyError as e:
                    errs = e.value

                    for err in errs:
                        LOG(err)
                        print()

                except Exception as e:
                    err = ERR(2, folder, None, None, None, ["runtime"])
                    LOG(err)

    LOG(ERR(0, None, None, None, None, None))
    funcNodeNum=sorted(funcNodeNum)
    funcLineNum=sorted(funcLineNum)
    with open(os.path.join(resultdir, compiler,"sizecount.txt"),'w+') as f:
        f.write(str(len(funcNodeNum)) + ";" + str(len(funcLineNum)) + "\n")
        f.write(str(funcNodeNum[0]) + ";" + str(funcLineNum[0]) + "\n")
        for i in range(1,20):
            nodei = round((i)*len(funcNodeNum)/20)
            linei = round((i)*len(funcLineNum)/20)
            f.write(str(funcNodeNum[nodei])+";"+str(funcLineNum[linei])+"\n")
        f.write(str(funcNodeNum[-1]) + ";" + str(funcLineNum[-1]) + "\n")
    f.close()






