// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_9 = (-8L);
static int8_t g_10 = (-10L);
static uint32_t g_24 = 4294967295UL;
static int8_t g_28 = (-4L);
static int32_t *g_31 = &g_9;
static int32_t **volatile g_30 = &g_31;
static const int8_t g_39 = 0xD2L;
static const int8_t g_41[3] = {0L, 0L, 0L};
static const int8_t *g_40 = &g_41[0];
static int16_t g_54 = (-9L);
static int16_t g_56 = 0xBF8CL;
static int64_t g_58 = (-6L);
static int64_t g_66 = 0x1BE33BD0D8167E60LL;
static uint64_t g_78 = 0xCE577E9FB133D7BFLL;
static int32_t g_90 = 6L;

static const uint32_t func_1(void);
static int8_t func_2(uint8_t p_3, int32_t *p_4, const int32_t p_5, int32_t *p_6);

static const uint32_t func_1(void) {
  int8_t l_7 = (-3L);
  int32_t *l_8 = &g_9;
  uint32_t *l_23[2][2];
  int8_t *l_25 = (void *)0;
  int8_t *l_26 = (void *)0;
  int8_t *l_27 = &g_28;
  const int8_t **l_36 = (void *)0;
  const int8_t *l_38 = &g_39;
  const int8_t **l_37[3];
  int8_t l_52 = 2L;
  int16_t *l_53 = &g_54;
  int16_t *l_55 = &g_56;
  int64_t *l_57 = &g_58;
  const uint32_t l_91[1] = {0xEACAA091L};
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++)
      l_23[i][j] = &g_24;
  }
  for (i = 0; i < 3; i++)
    l_37[i] = &l_38;
  (*g_30) = ((((*l_27) = func_2(l_7, l_8, (((g_9 != g_10) == 7L) != 0x24L), (((*l_27) = (safe_div_func_int8_t_s_s((safe_lshift_func_int32_t_s_u(((safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s(g_10, (safe_mul_func_int8_t_s_s((g_10 == (g_24 ^= (safe_add_func_uint32_t_u_u((g_9 & g_10), (*l_8))))), (*l_8))))), g_10)) < (*l_8)), 0)), (*l_8)))), (void *)0))) ^ 7L), l_23[1][0]);
  if ((safe_add_func_int16_t_s_s(((*l_8) < (&l_7 != (((*l_57) ^= (safe_rshift_func_int16_t_s_u(((*l_55) ^= (((g_40 = &g_10) == ((((*l_53) ^= ((safe_div_func_int64_t_s_s((safe_lshift_func_int32_t_s_u((safe_rshift_func_int8_t_s_s((*l_8), (safe_sub_func_int8_t_s_s(0xD3L, ((&g_10 == &g_10), (((((safe_add_func_uint16_t_u_u(g_39, g_39)), (*l_8)), 0x9B4CCC41L) != 0UL) || l_52)))))), (*l_8))), g_10)) && g_24)) | 0xFB64L), (void *)0)) > (*l_8))), g_9))), &g_39))), 0xD11EL))) {
    uint32_t l_59 = 0UL;
    (*g_31) ^= (l_59 || (g_58 <= (*l_8)));
  } else {
    uint64_t *l_77 = &g_78;
    int32_t l_81 = (-1L);
    uint8_t l_88 = 1UL;
    int32_t *l_89 = &g_90;
    (*g_31) |= 0L;
    (*l_89) ^= (((((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_58 | ((safe_sub_func_uint32_t_u_u(g_66, (((((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((*g_31) &= ((safe_mod_func_int16_t_s_s(0xEAECL, (safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((*l_77)--), l_81)), (safe_add_func_int16_t_s_s(((*l_53) &= (*l_8)), 0xBF32L)))))), (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((void *)0 != &g_54) & (*g_40)), 0xCEL)), l_81)))) | g_41[0]), (*l_8))), l_88)) | 0x5B6CC60A97593EB6LL) > l_88) < 6L) || (**g_30)))) | g_39)), l_88)), (*l_8))) != (*l_8)), (void *)0) != (void *)0) >= l_88);
  }
  return l_91[0];
}

static int8_t func_2(uint8_t p_3, int32_t *p_4, const int32_t p_5, int32_t *p_6) {
  uint8_t l_29 = 0x62L;
  (*p_4) = 0L;
  return l_29;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_41[i], "g_41[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_54, "g_54", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  transparent_crc(g_58, "g_58", print_hash_value);
  transparent_crc(g_66, "g_66", print_hash_value);
  transparent_crc(g_78, "g_78", print_hash_value);
  transparent_crc(g_90, "g_90", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
