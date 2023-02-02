#include <stdarg.h>

extern void abort (void);
long x = 0, y = 0;

inline void __attribute__((always_inline))
f1i (va_list ap)
{
  x = va_arg (ap, double);
  x += va_arg (ap, long);
}

void f4 (int i, ...)
{
  va_list ap;

  va_start (ap, i);
  switch (i)
  {
    case 4:
      y = va_arg (ap, double);
      break;
    case 5:
      y = va_arg (ap, double);
      y += va_arg (ap, double);
      break;
    default:
      ; // abort ();
  }
  f1i (ap);
  va_end (ap);
}

int main ()
{
  f4 (4, 6.0, 9.0, 16L, 18.0);
  return 0;
}