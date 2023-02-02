// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 5L;
static volatile int32_t g_5 = (-1L);
static int32_t g_6 = 0x7DC4B4E1L;
static int32_t g_10 = 0L;

static const int64_t func_1(void);

static const int64_t func_1(void) {
  const int8_t l_17[4] = {(-10L), (-10L), (-10L), (-10L)};
  int i;
  for (g_2 = 0; (g_2 == 8); ++g_2) {
    uint64_t l_14 = 0x2F80C3414B58E17CLL;
    for (g_6 = 8; (g_6 < 11); g_6 = safe_add_func_int8_t_s_s(g_6, 1)) {
      int32_t *l_9 = &g_10;
      int32_t *l_11 = (void *)0;
      int32_t *l_12 = &g_10;
      int32_t *l_13[1];
      int i;
      for (i = 0; i < 1; i++)
        l_13[i] = (void *)0;
      l_14--;
    }
    return l_17[0];
  }
  return l_17[0];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
