
#include <stdio.h>

static int func(int i) {
  int a = 0;
  switch (i) {
    case 8:
      printf("8\n");
      a = 6;
    case 0:
      ;
    case 3:
      ;
    case 2:
      printf("2\n"); break;
    case 1:
      ;
    case 7: a = 7;
    case 9: printf("9\n"); break;
    default: printf("4 or 5 or 6\n"); a = 1;
  }
  return a;
}


int main() {
  int i;
  for (i = 0; i < 10; ++i)
    func(i);
  return 0;
}