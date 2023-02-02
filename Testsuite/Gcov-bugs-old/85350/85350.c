#include <stdio.h>

int main (void)
{
  const int t = 2;
  struct s1 {
    int x;
    int g[t];
  };

  struct s2 {
    int x;
    int g[2];
  };

  printf("Sucess!\n");
  return 0;
}