// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint64_t g_2 = 0UL;
static int32_t g_4 = 0L;
static int32_t *volatile g_3 = &g_4;

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t l_5[4];
  int i;
  for (i = 0; i < 4; i++)
    l_5[i] = 0x4F84B811L;
  (*g_3) &= g_2;
  return l_5[0];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
