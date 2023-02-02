// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int16_t g_10 = 0xD9B4L;
static uint64_t g_16 = 1UL;
static uint32_t g_19 = 4294967295UL;
static uint8_t g_25[2][1] = {{0xF7L}, {0xF7L}};
static int32_t g_28 = 0xD89BB643L;
static int32_t *volatile g_27 = &g_28;
static int64_t g_44 = (-4L);
static int64_t *volatile g_43 = &g_44;
static int16_t g_51 = 0xCE4CL;
static int32_t *const volatile g_53[5] = {&g_28, &g_28, &g_28, &g_28, &g_28};

static uint8_t func_1(void);
static uint16_t func_4(uint8_t p_5, uint32_t p_6);

static uint8_t func_1(void) {
  int8_t l_11 = 0xF5L;
  int64_t l_14[3];
  uint64_t *l_15 = &g_16;
  uint32_t l_23 = 0xFF5ECCE3L;
  uint8_t *l_24 = &g_25[1][0];
  int64_t *l_26 = &l_14[0];
  uint64_t l_37[5];
  int8_t l_42 = (-1L);
  int64_t *l_46 = &g_44;
  int64_t **l_45 = &l_46;
  uint32_t l_48 = 0x7D796E99L;
  int16_t *l_49 = (void *)0;
  int16_t *l_50 = &g_51;
  int64_t l_52 = 1L;
  int32_t *l_54 = &g_28;
  int i;
  for (i = 0; i < 3; i++)
    l_14[i] = (-3L);
  for (i = 0; i < 5; i++)
    l_37[i] = 0xD083830386B9BDD1LL;
  (*g_27) = (((safe_sub_func_uint16_t_u_u((((func_4((((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(g_10)), l_11)) || (((0UL <= ((((safe_mod_func_uint64_t_u_u((0x0A22L > g_10), ((*l_26) = ((((*l_15) = l_14[0]) | 1UL) | ((safe_mul_func_int8_t_s_s(g_19, ((*l_24) ^= (+((((((safe_rshift_func_int32_t_s_s(g_19, g_19)), l_14[0]), 0xAA23L) != 0xB26CL) || l_23) >= g_19))))), g_25[1][0]))))) || (-2L)) != 18446744073709551613UL) >= 0x294B58FE4DE5A82ALL)) == g_19) < l_11)) >= 0UL), l_11), g_19) >= l_11) >= l_23), 0x3ECFL)) == 0x04BAL) ^ g_19);
  (*l_54) = (((safe_rshift_func_int16_t_s_s((g_25[0][0] < (safe_div_func_uint32_t_u_u((&g_16 == l_26), (+((safe_lshift_func_uint64_t_u_s((l_37[3] & (((safe_div_func_int16_t_s_s(((*l_50) = (safe_add_func_int16_t_s_s((l_42, (g_43 == ((*l_45) = &l_14[0]))), ((((((4L <= (!(g_44 != 0UL))) && l_48) ^ 0xD91AL), g_19) != l_42) < l_23)))), l_37[1])), g_19), l_14[0])), g_19)) & l_52))))), l_37[3])), 0x4B24D3E44E821FD1LL) == l_48);
  return (*l_54);
}

static uint16_t func_4(uint8_t p_5, uint32_t p_6) {
  int16_t l_29 = (-9L);
  for (p_6 = 0; (p_6 <= 0); p_6 += 1) {
    for (g_16 = 0; (g_16 <= 0); g_16 += 1) {
      int i, j;
      (*g_27) &= ((g_25[p_6][p_6] && (((((void *)0 == &p_5), &p_5) == (p_6, (void *)0)) < 0x6B3883FAL)) > 0x58A13C444C9CADCDLL);
    }
    return l_29;
  }
  return g_19;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
