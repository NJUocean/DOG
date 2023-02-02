// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_5 = 0xF54C3C69L;

static const int32_t func_1(void);

static const int32_t func_1(void) {
  int32_t **l_2 = (void *)0;
  int32_t *l_4 = &g_5;
  int32_t **l_3 = &l_4;
  const int32_t l_6 = (-8L);
  (*l_3) = (void *)0;
  return l_6;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
