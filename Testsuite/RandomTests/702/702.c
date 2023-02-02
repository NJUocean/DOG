// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  uint8_t f0;
};

union U3 {
  uint16_t f0;
  const volatile uint8_t f1;
};

static uint16_t g_4 = 0xF1EBL;
static union U3 g_11 = {0x0785L};
static union U2 g_14 = {0x89L};
static int16_t g_43 = 0x11F6L;
static uint8_t g_56 = 0x41L;
static int32_t g_79 = 0x090E7AF8L;
static int32_t *volatile g_78[5] = {&g_79, &g_79, &g_79, &g_79, &g_79};
static int32_t *g_85 = &g_79;
static int32_t **volatile g_84 = &g_85;

static int32_t func_1(void);
static uint64_t func_12(union U2 p_13);

static int32_t func_1(void) {
  const uint32_t l_54 = 0x519BA600L;
  uint8_t *l_55 = &g_56;
  uint16_t l_77[5] = {0x1C31L, 0x1C31L, 0x1C31L, 0x1C31L, 0x1C31L};
  int32_t l_80 = 0x10F657D2L;
  int i;
  if ((safe_lshift_func_int64_t_s_u(((((g_4 ^ (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((g_11, g_11.f0), func_12(g_14))), 0x6AL)), ((safe_lshift_func_int64_t_s_u(((-2L) != g_14.f0), (((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((((*l_55) = (safe_div_func_uint8_t_u_u(((((4UL < 0xF603F559L), g_4) & (-1L)) ^ l_54), 255UL))) <= g_14.f0) >= (-3L)), l_54)), l_54)) <= g_4), g_56))) < l_54)))) < l_54) | 0x0576L), l_54), g_4))) {
    int16_t *const l_61 = &g_43;
    int32_t l_74 = (-5L);
    l_80 |= (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((g_4 >= ((void *)0 != l_61)), (((safe_sub_func_uint8_t_u_u(g_43, 0x7CL)), (safe_rshift_func_int32_t_s_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(g_11.f0, (safe_rshift_func_int64_t_s_u(((((safe_div_func_uint32_t_u_u(l_74, ((safe_mul_func_int8_t_s_s((l_74 || 0x3D17L), g_43)), 0x38B1AAE8L))) >= 4L) | 65535UL), g_4), l_74)))), l_77[3])), g_56))) >= g_43)), 0xE5L)), 0xAD70L));
  } else {
    for (g_11.f0 = 10; (g_11.f0 != 22); g_11.f0++) {
      int32_t *l_83 = &g_79;
      (*g_84) = l_83;
    }
  }
  return g_11.f0;
}

static uint64_t func_12(union U2 p_13) {
  union U2 l_24 = {246UL};
  uint16_t l_40[2];
  int16_t l_41 = (-3L);
  int16_t *l_42 = &g_43;
  int32_t l_44[3];
  int32_t l_45 = 0L;
  int i;
  for (i = 0; i < 2; i++)
    l_40[i] = 0xC8A3L;
  for (i = 0; i < 3; i++)
    l_44[i] = 0xA52B3395L;
  l_45 = (safe_rshift_func_uint8_t_u_s(((p_13.f0 == (l_44[2] = ((((safe_sub_func_int16_t_s_s(((*l_42) |= (safe_div_func_uint8_t_u_u((g_14, ((~(safe_mod_func_int16_t_s_s((l_24, ((safe_add_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(g_14.f0, (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((((p_13.f0 <= (safe_mul_func_uint8_t_u_u((!(safe_add_func_uint64_t_u_u(((g_11.f0 >= (l_24.f0, (g_4 <= (g_14.f0, p_13.f0)))), p_13.f0), l_24.f0))), l_24.f0))), l_24.f0) != l_24.f0), g_14), l_24), l_40[1]), l_41)), p_13.f0)))) >= l_41), g_4)) > 1UL) && 0UL), 252UL)), g_11.f0)), l_24.f0))) == l_41)), 0x81L))), l_40[1])) != 0x35L) >= l_41) >= l_40[1]))), p_13.f0), 0));
  return p_13.f0;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  transparent_crc(g_43, "g_43", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  transparent_crc(g_79, "g_79", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
