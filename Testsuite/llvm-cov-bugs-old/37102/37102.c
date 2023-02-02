#include <stdlib.h>

extern int (*_Unwind_RaiseException)(void *) __attribute__((weak));

int main(void) {
  if (&_Unwind_RaiseException != NULL)
    return 0;
  return 1;
}
