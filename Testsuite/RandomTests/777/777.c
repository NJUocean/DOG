// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x643CDF98L;
static int32_t *volatile g_7[4] = {&g_2, &g_2, &g_2, &g_2};
static int32_t *const volatile g_8 = &g_2;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  uint64_t l_6 = 4UL;
  for (g_2 = (-5); (g_2 == 11); g_2++) {
    uint32_t l_5 = 0x9609C3FBL;
    return l_5;
  }
  (*g_8) |= l_6;
  return l_6;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
