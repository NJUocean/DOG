__attribute__((target_clones("arch=slm","default")))
int foo1 (int a, int b) {
  return a + b;
}

int foo2 (int a, int b) {
  return a + b;
}

int main() {
  foo1(1, 1);
  foo2(1, 1);
  return 1;
}