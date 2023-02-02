#include <stdio.h>

int foo(int a)
{
  void *l = &&error;

  if(a == 4)
    ; //goto *l;

  return 150;

error:
;//  return a;
}

int main(int argc, char **argv)
{
  printf("value: %d\n", foo(argc));

  return 0;
}