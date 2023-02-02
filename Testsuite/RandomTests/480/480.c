// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U3 {
  int64_t f0;
};

static volatile uint8_t g_8[5][2][3] = {{{0x1AL, 0x1AL, 0x1AL}, {1UL, 0UL, 1UL}}, {{0x1AL, 0x1AL, 0x1AL}, {1UL, 0UL, 1UL}}, {{0x1AL, 0x1AL, 0x1AL}, {1UL, 0UL, 1UL}}, {{0x1AL, 0x1AL, 0x1AL}, {1UL, 0UL, 1UL}}, {{0x1AL, 0x1AL, 0x1AL}, {1UL, 0UL, 1UL}}};
static const uint64_t g_9 = 18446744073709551615UL;
static uint64_t g_15[1] = {0UL};
static uint8_t g_21 = 3UL;
static int32_t g_29[2] = {0xB7758B39L, 0xB7758B39L};
static volatile int32_t g_34 = 0L;
static volatile int32_t *g_33 = &g_34;

static int16_t func_1(void);
static uint64_t func_2(int8_t p_3, uint32_t p_4, int16_t p_5, int32_t p_6, int64_t p_7);

static int16_t func_1(void) {
  uint64_t *l_14 = &g_15[0];
  union U3 l_19 = {1L};
  uint8_t *l_20 = &g_21;
  int32_t *l_28[5];
  uint32_t l_35 = 0xABA9A984L;
  uint8_t l_42[3][5][4] = {{{0x6EL, 0xA4L, 0x6EL, 253UL}, {0x16L, 0xA4L, 0x56L, 0xA4L}, {0x16L, 253UL, 0x6EL, 0xA4L}, {0x6EL, 253UL, 0x56L, 0xE8L}, {0x6EL, 253UL, 0x16L, 253UL}}, {{0x6EL, 0xE8L, 0x56L, 253UL}, {0x56L, 253UL, 0x56L, 0xE8L}, {0x6EL, 253UL, 0x16L, 253UL}, {0x6EL, 0xE8L, 0x56L, 253UL}, {0x56L, 253UL, 0x56L, 0xE8L}}, {{0x6EL, 253UL, 0x16L, 253UL}, {0x6EL, 0xE8L, 0x56L, 253UL}, {0x56L, 253UL, 0x56L, 0xE8L}, {0x6EL, 253UL, 0x16L, 253UL}, {0x6EL, 0xE8L, 0x56L, 253UL}}};
  int i, j, k;
  for (i = 0; i < 5; i++)
    l_28[i] = &g_29[1];
  (*g_33) = (func_2(((g_8[3][1][0] >= g_9), ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint64_t_u_s(((*l_14) = g_8[1][1][0]), 49)) | ((((void *)0 == l_14) > (+g_9)), (safe_mul_func_uint8_t_u_u((l_19, (--(*l_20))), (safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((g_29[1] = g_9), (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint16_t_u((g_33 == g_33))), 1)))), g_9)))))), g_9)) == g_9)), l_35, g_9, g_9, g_9), l_42[2][3][3]);
  return g_8[0][1][2];
}

static uint64_t func_2(int8_t p_3, uint32_t p_4, int16_t p_5, int32_t p_6, int64_t p_7) {
  int32_t l_38 = (-1L);
  (*g_33) ^= ((safe_div_func_int16_t_s_s(((l_38, (safe_rshift_func_uint64_t_u_u((l_38 || (p_7 <= p_4)), p_3))) & 0x83L), (~0UL))) != 6L);
  return p_4;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_15[i], "g_15[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_21, "g_21", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_29[i], "g_29[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
