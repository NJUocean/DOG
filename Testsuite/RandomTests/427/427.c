// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_3 = 0x0C3414B5L;
static volatile int32_t *g_2 = &g_3;
static volatile int32_t **volatile g_4 = &g_2;

static int8_t func_1(void);

static int8_t func_1(void) {
  uint32_t l_5 = 0UL;
  (*g_4) = g_2;
  return l_5;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
