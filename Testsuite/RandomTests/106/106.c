// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U3 {
  int8_t f0;
  const uint64_t f1;
  const int32_t f2;
};

union U6 {
  uint16_t f0;
};

static volatile uint64_t g_12 = 18446744073709551615UL;
static int64_t g_15 = (-5L);
static int64_t g_17 = 6L;
static union U3 g_21 = {-1L};
static volatile int64_t g_29[4][4] = {{7L, (-3L), (-3L), 7L}, {7L, (-3L), (-3L), 7L}, {7L, (-3L), (-3L), 7L}, {7L, (-3L), (-3L), 7L}};
static volatile int64_t *g_28 = &g_29[0][2];
static int32_t g_34[1] = {9L};
static uint16_t g_36 = 0x5F4DL;
static uint32_t g_38[5] = {1UL, 1UL, 1UL, 1UL, 1UL};
static int16_t g_53 = 0L;
static int32_t g_57 = (-1L);
static int32_t *volatile g_56 = &g_57;
static union U6 g_58 = {0xFC39L};
static int16_t *const *g_62 = (void *)0;
static int32_t g_65 = (-5L);

static union U6 func_1(void);
static union U3 func_4(uint32_t p_5, union U6 p_6, uint16_t p_7, uint16_t p_8, int32_t p_9);

static union U6 func_1(void) {
  const int32_t l_13 = 0x0BB94D0FL;
  int64_t *l_14 = &g_15;
  int64_t *l_16 = &g_17;
  uint16_t *l_35 = &g_36;
  int64_t *l_37 = (void *)0;
  union U6 l_39 = {1UL};
  int32_t *l_64 = &g_65;
  (*l_64) &= (safe_mod_func_uint8_t_u_u((((func_4((safe_rshift_func_int64_t_s_s(g_12, (g_38[4] = (((l_13 || (((*l_16) = ((*l_14) |= 8L)) ^ ((safe_rshift_func_uint8_t_u_s(l_13, 1)) | ((((*l_35) ^= (((safe_unary_minus_func_uint64_t_u((g_21, ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((void *)0 != g_28) != ((safe_div_func_int32_t_s_s((safe_lshift_func_int64_t_s_u((g_28 != g_28), 51)), g_21.f0)) | l_13)) && g_21.f0), 65535UL)), 0x06DCL)), g_34[0])) <= l_13)))), (-1L)) != g_34[0])), 0xDBL) <= l_13)))) >= g_21.f0), g_36)))), l_39, g_21.f0, l_13, g_34[0]), l_13) <= 65531UL) | 0xDFL), g_58.f0));
  return g_58;
}

static union U3 func_4(uint32_t p_5, union U6 p_6, uint16_t p_7, uint16_t p_8, int32_t p_9) {
  int16_t *l_60 = &g_53;
  int16_t *const *l_59 = &l_60;
  int16_t *const **l_61[2][5] = {{&l_59, &l_59, &l_59, &l_59, &l_59}, {&l_59, &l_59, &l_59, &l_59, &l_59}};
  union U3 l_63 = {0x6BL};
  int i, j;
  for (p_8 = 0; (p_8 <= 3); p_8 += 1) {
    int16_t *l_52 = &g_53;
    int32_t l_54 = 8L;
    int64_t *l_55 = &g_15;
    (*g_56) = (safe_mod_func_int64_t_s_s(((*l_55) = ((safe_lshift_func_int16_t_s_u(((~(&p_7 != (p_6, &p_7))) > (safe_unary_minus_func_uint32_t_u(((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_17 | ((*l_52) &= 0x1D57L)), (p_6, 2UL))), p_9)), p_8)) && 0x21L)))), 12)) < l_54)), p_6.f0));
    for (p_5 = 0; (p_5 <= 3); p_5 += 1) {
      for (g_15 = 0; (g_15 <= 3); g_15 += 1) {
        int i, j;
        if (g_29[g_15][g_15])
          break;
      }
    }
  }
  g_62 = (((g_17 >= ((g_58, (void *)0) == &g_36)) <= (&g_36 == &p_8)), l_59);
  return l_63;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_29[i][j], "g_29[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 1; i++) {
    transparent_crc(g_34[i], "g_34[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_38[i], "g_38[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_53, "g_53", print_hash_value);
  transparent_crc(g_57, "g_57", print_hash_value);
  transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
  transparent_crc(g_65, "g_65", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
