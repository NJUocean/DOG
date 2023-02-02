// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const int64_t f0;
};

static volatile int32_t g_3 = 0L;
static volatile int32_t g_4[1][3][1] = {{{(-10L)}, {(-10L)}, {(-10L)}}};
static int32_t g_5 = (-3L);
static volatile int32_t *g_30[4] = {&g_4[0][1][0], &g_4[0][1][0], &g_4[0][1][0], &g_4[0][1][0]};
static volatile int32_t **volatile g_29 = &g_30[0];
static int32_t g_33[2][4][2] = {{{7L, 9L}, {0x742D63D2L, 9L}, {7L, 9L}, {0x742D63D2L, 9L}}, {{7L, 9L}, {0x742D63D2L, 9L}, {7L, 9L}, {0x742D63D2L, 9L}}};
static int32_t g_37 = 0xF4275799L;

static uint8_t func_1(void);
static int32_t func_6(int32_t p_7, uint16_t p_8, int8_t p_9, union U1 p_10, int16_t p_11);

static uint8_t func_1(void) {
  int16_t l_2[5][4][5] = {{{0x196AL, 0x196AL, 0x4D2EL, 0L, (-1L)}, {0L, 0x7CEFL, 0x7CEFL, 0L, (-1L)}, {(-1L), 0L, 0x9CC1L, 0x9CC1L, 0L}, {(-1L), 0x7CEFL, (-3L), 0L, 0L}}, {{2L, 0x196AL, 2L, 0x4D2EL, 0x196AL}, {(-3L), 0x7CEFL, (-1L), 0x7CEFL, (-3L)}, {0L, 2L, (-1L), 0x9CC1L, (-1L)}, {8L, 8L, (-1L), (-3L), 0L}}, {{2L, 0L, 0L, 2L, (-1L)}, {0x7CEFL, (-3L), 0L, 0L, (-3L)}, {(-1L), 0L, 0x4D2EL, 0x196AL, 0x196AL}, {0x173BL, 8L, 0x173BL, 0L, (-1L)}}, {{0x9CC1L, 2L, 0x196AL, 2L, 0x9CC1L}, {0x173BL, 0x7CEFL, 8L, (-3L), 8L}, {(-1L), (-1L), 0x196AL, 0x9CC1L, (-1L)}, {0x7CEFL, 0x173BL, 0x173BL, 0x7CEFL, 8L}}, {{2L, 0x9CC1L, 0x4D2EL, 0x4D2EL, 0x9CC1L}, {8L, 0x173BL, 0L, (-1L), (-1L)}, {0L, (-1L), 0L, 0x4D2EL, 0x196AL}, {(-3L), 0x7CEFL, (-1L), 0x7CEFL, (-3L)}}};
  uint8_t l_13 = 0x3FL;
  uint32_t l_27[1][2][4] = {{{0x0127420EL, 0UL, 0x0127420EL, 0UL}, {0x0127420EL, 0UL, 0x0127420EL, 0UL}}};
  int32_t l_31 = 0x720F84B0L;
  int i, j, k;
  for (g_5 = 0; (g_5 <= 3); g_5 += 1) {
    uint16_t l_14 = 0xC36FL;
    union U1 l_28 = {9L};
    l_31 ^= func_6(g_3, ((safe_unary_minus_func_uint64_t_u(l_2[4][2][2])) && ((l_13 = g_5) || 0x3ECF04B0L)), l_14, (((0x5B641B44ADCA1A1FLL != (safe_mod_func_int32_t_s_s((safe_lshift_func_int64_t_s_u(((safe_rshift_func_uint32_t_u_s(((((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((g_5 < (safe_mul_func_uint64_t_u_u((((g_5 < l_2[4][3][2]) || 0x7E011B55E97312B9LL) > 254UL), g_5))) && g_5) ^ g_5), l_27[0][1][3])), 0x396DL)), l_27[0][1][3]) || l_2[0][0][2]) ^ g_5), g_5)) & 1UL), l_14)), l_27[0][0][2]))), l_14), l_28), l_28.f0);
    for (l_31 = 3; (l_31 >= 0); l_31 -= 1) {
      int32_t *l_32[5] = {&l_31, &l_31, &l_31, &l_31, &l_31};
      uint32_t l_34 = 1UL;
      int i;
      l_34++;
      (**g_29) = l_28.f0;
      for (l_13 = 0; (l_13 <= 3); l_13 += 1) {
        if (l_31)
          break;
        return g_37;
      }
    }
  }
  return g_5;
}

static int32_t func_6(int32_t p_7, uint16_t p_8, int8_t p_9, union U1 p_10, int16_t p_11) {
  (*g_29) = &g_3;
  return p_11;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
