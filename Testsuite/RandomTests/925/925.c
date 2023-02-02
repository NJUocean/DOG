// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_11 = 1L;
static int32_t *g_10 = &g_11;
static int32_t **const volatile g_12 = &g_10;
static int32_t **volatile g_13 = &g_10;

static int32_t func_1(void);
static int32_t *func_2(int32_t *p_3, int64_t p_4, int32_t *p_5);

static int32_t func_1(void) {
  int32_t *l_6 = (void *)0;
  int32_t l_7[3][1];
  int32_t *l_8 = &l_7[0][0];
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++)
      l_7[i][j] = 0x9F7FD1E8L;
  }
  (*g_13) = func_2(l_6, l_7[0][0], l_8);
  (*l_8) &= (*g_10);
  return (*g_10);
}

static int32_t *func_2(int32_t *p_3, int64_t p_4, int32_t *p_5) {
  uint32_t l_9[5] = {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL};
  int i;
  for (p_4 = 0; (p_4 <= 4); p_4 += 1) {
    (*g_12) = g_10;
  }
  return (*g_12);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
