#include <string.h>

static int special_format (const char *fmt)
{
  return (
    strchr (fmt, '*') != 0 ||
    strchr (fmt, 'V') != 0 ||
    strchr (fmt, 'S') != 0 ||
    strchr (fmt, 'n') != 0 );
}

int main()
{
  special_format ("ee");
  return 0;
}