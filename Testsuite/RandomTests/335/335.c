// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint16_t g_4[2] = {0xA42BL, 0xA42BL};
static int16_t g_8 = 0L;
static int16_t g_12 = 2L;
static int16_t g_16[3] = {1L, 1L, 1L};
static int16_t *g_15 = &g_16[2];
static uint32_t g_19 = 3UL;

static uint32_t func_1(void);
static uint32_t func_13(int16_t *p_14);

static uint32_t func_1(void) {
  int16_t *l_5 = (void *)0;
  int16_t *l_6 = (void *)0;
  int16_t *l_7 = &g_8;
  int32_t l_11[1][2][4] = {{{(-6L), (-6L), (-6L), (-6L)}, {(-6L), (-6L), (-6L), (-6L)}}};
  uint32_t *l_18 = &g_19;
  int32_t l_20 = 0xA0C8D467L;
  int i, j, k;
  l_11[0][0][3] = ((g_12 &= (safe_mul_func_int16_t_s_s(((*l_7) = g_4[1]), (!(safe_unary_minus_func_int8_t_s(l_11[0][0][3])))))) <= (l_20 = (((*l_18) = func_13(g_15)), l_11[0][0][1])));
  return g_4[1];
}

static uint32_t func_13(int16_t *p_14) {
  int8_t l_17 = 0L;
  return l_17;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_16[i], "g_16[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_19, "g_19", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
