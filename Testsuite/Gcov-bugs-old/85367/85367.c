#include <x86intrin.h>

int main ()
{
  unsigned char c;
  unsigned long long x, y;

  c = 0;
  x = 1LL;
  y = 0LL;

  /* X = 0x0000000000000001, Y = 0x0000000000000000, C = 0.  */
  c = _subborrow_u64 (c, y, x, &x);

  return 0;
}