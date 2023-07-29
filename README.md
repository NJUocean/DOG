# The replication kit of DOG

***

## Title: Uncovering bugs in code coverage profilers via control flow constraint solving
The latest replication kit package: [Zenodo](https://zenodo.org/record/8189924)

## 1.Folder Introduction:
  - `Testsuite`. It contains five tests uite can be directly fed to DOG. `ManuanalTests` and `RandomTests` are two testsuites for uncovering new bugs. `Gcov-bugs-old` and `llvm-cov-bugs-old` are two testsuites containing trigger programs of those bugs revealed in old versions by existing methods. `CsmithLarge` is 100 random programs with over 1000 lines, which is to demonstrate the scalability of our method. 
  - `Script` It currently contains `DOG.py`, i.e.,the DOG prototype.
  - `Result` It contains the results of using `DOG.py` to test `Gcov` and `llvm-cov` with the five input sets in `Testsuite`.

## 2.Execution Command:
  `python3 DOG.py --compiler=[compiler] --testsuite=[test inputs]  --output=[output dir]`
  
  In above command,

-	`[compiler]` indicates the subject under test. DOG currently supports only `gcov` and `llvm-cov`.
-	`[test inputs]` indicates the absolute path of a test input set.
-	`[output inputs]` indicates the absolute path of a test output. It defaults to `[test inputs]/input`

## 3.Bugs Found
#### `Gcov` bugs:
|  ID  |  REPORT STATUS  |  BUG STATUS  |
|  ----  |  ----  |  ----  | 
[#99440](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99440)  |  NEW  |  Confirmed 
[#99441](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99441)  |  NEW  |  Confirmed 
[#99442](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99442)  |  RESPLVED INVALID  |  Invalid 
[#99443](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99443)  |  RESOLVED FIXED  |  Invalid 
[#99444](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99444)  |  NEW  |  Confirmed  
[#99485](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99485)  |  RESPLVED INVALID  | Invalid 
[#100938](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=100938)  |  NEW  |  Confirmed  
[#101192](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101192)  |  NEW  |  Confirmed  
[#101193](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101193)  |  NEW  |  Confirmed  
[#101554](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101554)  |  UNCONFIRMED  |  Pending 
[#101569](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101569)  |  UNCONFIRMED  |  Pending  
[#101618](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101618)  |  RESOLVED FIXED  |  Fixed 
[#101644](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101644)  |  UNCONFIRMED  |  Pending 
#### `llvm-cov` bugs:
|  ID  |  REPORT STATUS  |  BUG STATUS  |
|  ----  |  ----  |  ----  | 
[#48767](https://github.com/llvm/llvm-project/issues/48767)  |  Closed  |  Fixed  |
[#48770](https://github.com/llvm/llvm-project/issues/48770)  |  Closed  |  Fixed  | 
[#48771](https://github.com/llvm/llvm-project/issues/48771)  |  Closed  |  Fixed  |  
[#48772](https://github.com/llvm/llvm-project/issues/48772)  |  Closed  |  Fixed  |  
[#48779](https://github.com/llvm/llvm-project/issues/48779)  |  Open  |  Pending  | 
[#48782](https://github.com/llvm/llvm-project/issues/48782)  |  Closed  |  Fixed  |
[#48783](https://github.com/llvm/llvm-project/issues/48783)  |  Closed  |  Fixed  |
[#48784](https://github.com/llvm/llvm-project/issues/48784)  |  Closed  |  Fixed  |
[#48827](https://github.com/llvm/llvm-project/issues/48827)  |  Open  |  Pending  |
[#50201](https://github.com/llvm/llvm-project/issues/50201)  |  Open  |  Pending  |
[#50500](https://github.com/llvm/llvm-project/issues/50500)  |  Open  |  Pending  |
[#50610](https://github.com/llvm/llvm-project/issues/50610)  |  Closed  |  Fixed  |
[#50611](https://github.com/llvm/llvm-project/issues/50611)  |  Closed  |  Fixed  |
[#50614](https://github.com/llvm/llvm-project/issues/50614)  |  Closed  |  Fixed  |

## 4.Contact us
Mail: <njuwy@smail.nju.edu.cn>
