// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0L;
static volatile int32_t g_3 = 4L;
static int32_t g_4 = 0x6FF23B1AL;

static int64_t func_1(void);

static int64_t func_1(void) {
  volatile uint64_t l_7 = 1UL;
  for (g_4 = 11; (g_4 != (-16)); g_4 = safe_sub_func_int16_t_s_s(g_4, 1)) {
    l_7 = g_3;
    return g_4;
  }
  return l_7;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
