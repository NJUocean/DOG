# Exposing Coverage Bugs via Control Flow Constraint Checking


### DOG/DOG:
  Source code
  
### DOG/result:
  Results that need to be manually checked

### Bugs Found
#### gcov:
|  ID  |  STATUS  |  TYPE  |  VIOLATED CONSTRAINT  | 
|  ----  |  ----  |  ----  |  ----  |
[#99440](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99440)  |  New  |  Outflow  |  C3
[#99441](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99441)  |  New  |  Horizontal  |  C0/C1
[#99444](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=99444)  |  New  |  Horizontal  |  C0/C1
[#100938](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=100938)  |  New  |  Horizontal  |  C0/C1
[#100980](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=100980)  |  New  |  Inflow  |  C2 
[#101192](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101192)  |  New  |  Inflow  |  C2 
[#101193](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101193)  |  New  |  Inflow  |  C2 
[#101487](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101487)  |  UNCO  |  Horizontal  |  C0/C1
[#101554](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101554)  |  UNCO  |  Inflow  |  C2 
[#101569](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101569)  |  UNCO  |  Inflow  |  C2 
[#101618](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101618)  |  UNCO  |  Inflow  |  C2 
[#101644](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=101644)  |  UNCO  |  Inflow  |  C2 
#### llvm:
|  ID  |  STATUS  |  TYPE  |  VIOLATED CONSTRAINT  | 
|  ----  |  ----  |  ----  |  ----  |
[#49423](https://bugs.llvm.org/show_bug.cgi?id=49423)  |  New  |  Horizontal  |  C0/C1
[#49426](https://bugs.llvm.org/show_bug.cgi?id=49426)  |  New  |  Inflow  |  C2
[#49427](https://bugs.llvm.org/show_bug.cgi?id=49427)  |  New  |  Inflow  |  C2
[#49428](https://bugs.llvm.org/show_bug.cgi?id=49428)  |  New  |  Inflow  |  C2
[#49435](https://bugs.llvm.org/show_bug.cgi?id=49435)  |  New  |  Horizontal  |  C0/C1
[#49438](https://bugs.llvm.org/show_bug.cgi?id=49438)  |  New  |  Outflow  |  C3
[#49439](https://bugs.llvm.org/show_bug.cgi?id=49439)  |  New  |  Inflow  |  C2
[#49440](https://bugs.llvm.org/show_bug.cgi?id=49440)  |  New  |  Outflow  |  C3
[#49483](https://bugs.llvm.org/show_bug.cgi?id=49483)  |  New  |  Outflow  |  C3
[#50775](https://bugs.llvm.org/show_bug.cgi?id=50775)  |  New  |  Inflow  |  C2
[#50857](https://bugs.llvm.org/show_bug.cgi?id=50857)  |  New  |  Outflow  |  C3
[#51156](https://bugs.llvm.org/show_bug.cgi?id=51156)  |  New  |  Outflow  |  C3
[#51266](https://bugs.llvm.org/show_bug.cgi?id=51266)  |  New  |  Outflow  |  C3
[#51267](https://bugs.llvm.org/show_bug.cgi?id=51267)  |  New  |  Outflow  |  C3
[#51270](https://bugs.llvm.org/show_bug.cgi?id=51270)  |  New  |  Horizontal  |  C0/C1
