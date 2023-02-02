#include <stdlib.h>

void foo1(int x)
{
  if (x < 1)
    exit(0);
}

int main()
{
  foo1(0);
  return 0;
}