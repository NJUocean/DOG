// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-1L);
static volatile int32_t g_3 = 8L;
static volatile int32_t g_4 = 3L;
static volatile int32_t g_5 = (-1L);
static volatile int32_t g_6[4] = {6L, 6L, 6L, 6L};
static int32_t g_7 = 0L;
static int32_t g_10[1] = {(-10L)};
static int32_t g_15 = 9L;

static int32_t func_1(void);

static int32_t func_1(void) {
  for (g_7 = 0; (g_7 > 23); ++g_7) {
    for (g_10[0] = (-28); (g_10[0] != 17); g_10[0] = safe_add_func_int16_t_s_s(g_10[0], 5)) {
      uint64_t l_13 = 18446744073709551609UL;
      int32_t *l_14 = &g_15;
      (*l_14) = l_13;
    }
  }
  return g_10[0];
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_15, "g_15", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
