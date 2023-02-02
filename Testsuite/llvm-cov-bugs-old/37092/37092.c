#include <stdlib.h>

int main (void)
{
  static int *p;

  p = malloc (sizeof (int));
  if (p == NULL)
    return 0;

  *p = 7;
  return 1;
}