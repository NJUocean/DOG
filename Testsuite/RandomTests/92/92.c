// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const int8_t g_2 = 1L;
static uint64_t g_17[2][2] = {{0x36745799333C7D24LL, 0x36745799333C7D24LL}, {0x36745799333C7D24LL, 0x36745799333C7D24LL}};
static uint64_t **g_23 = (void *)0;
static int32_t g_33 = 0xC114FF6AL;
static int32_t *volatile g_32 = &g_33;
static int32_t g_34 = 0xD0519924L;

static const uint8_t func_1(void);
static uint32_t func_3(uint8_t p_4, uint32_t p_5, int16_t p_6, int64_t p_7, int8_t p_8);

static const uint8_t func_1(void) {
  int64_t l_9 = 0x4B4B13281D21F1EBLL;
  int32_t l_10 = 7L;
  uint64_t *l_16[1][4][1];
  uint8_t l_18 = 255UL;
  const int8_t l_35 = (-1L);
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 1; k++)
        l_16[i][j][k] = &g_17[1][1];
    }
  }
  g_34 ^= (g_2, (func_3((l_18 = ((((((l_10 = l_9) & l_9), l_10) && 0x85CE96B779C63C40LL), (((g_2 & (-10L)) && ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((l_10 |= ((safe_unary_minus_func_uint16_t_u(5UL)) & g_2)) & g_2) != l_9), g_17[0][1])), 255UL), g_17[1][0])) || l_10)), (-5L))) != g_17[1][1])), g_17[1][1], l_9, g_2, g_17[1][1]), (*g_32)));
  return l_35;
}

static uint32_t func_3(uint8_t p_4, uint32_t p_5, int16_t p_6, int64_t p_7, int8_t p_8) {
  const uint64_t **l_19 = (void *)0;
  const uint64_t ***l_20 = &l_19;
  uint64_t **l_21 = (void *)0;
  uint64_t ***l_22[2];
  int32_t l_31 = 0x95CC9E52L;
  int i;
  for (i = 0; i < 2; i++)
    l_22[i] = (void *)0;
  (*l_20) = l_19;
  (*g_32) |= ((((0x9E149CFFL | ((g_23 = l_21) == (void *)0)) || (p_8 = (safe_sub_func_uint8_t_u_u(0x6AL, ((safe_lshift_func_int64_t_s_u((-10L), 49)) && ((1UL == (((safe_mul_func_int32_t_s_s(0x33D73C12L, p_8)), (safe_unary_minus_func_uint8_t_u((((((g_17[1][1] >= l_31) != g_17[1][1]) && l_31), l_31), p_5)))), g_17[0][0])), 0xB1L)))))), g_23) == (void *)0);
  return l_31;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
