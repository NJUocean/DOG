// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0L;
static int16_t g_19 = 0xB37DL;
static int64_t g_39 = 1L;
static uint16_t g_41 = 65529UL;
static int8_t g_48 = 0x65L;
static int32_t g_53 = 1L;

static uint16_t func_1(void);
static uint64_t func_7(uint64_t p_8);

static uint16_t func_1(void) {
  uint32_t l_17 = 5UL;
  uint16_t l_20[5][4][4] = {{{0x2363L, 0xFCC8L, 0x258DL, 1UL}, {0xFCC8L, 5UL, 0x2363L, 5UL}, {65535UL, 0xD065L, 0UL, 0xD065L}, {9UL, 0x628EL, 1UL, 0xF4CCL}}, {{0xF953L, 0x477AL, 0x11ECL, 1UL}, {0UL, 5UL, 65535UL, 0x2363L}, {0UL, 0x258DL, 0x11ECL, 0xFCC8L}, {0xF953L, 0x2363L, 1UL, 65535UL}}, {{9UL, 0UL, 0UL, 9UL}, {65535UL, 1UL, 0x2363L, 0xF953L}, {0xFCC8L, 0x11ECL, 0x258DL, 0UL}, {0x2363L, 65535UL, 0x628EL, 0x79D4L}}, {{4UL, 0xFCC8L, 5UL, 0x2363L}, {0x11ECL, 0UL, 65535UL, 0x5AB4L}, {0x35A7L, 0x79D4L, 0x35A7L, 0x477AL}, {0xD065L, 65535UL, 5UL, 0xF953L}}, {{0UL, 5UL, 0xF953L, 65535UL}, {5UL, 0x628EL, 0xF953L, 4UL}, {0UL, 5UL, 5UL, 0x11ECL}, {0xD065L, 65535UL, 0x35A7L, 0x35A7L}}};
  int i, j, k;
  for (g_2 = 28; (g_2 >= 18); --g_2) {
    uint16_t l_16 = 0x587CL;
    int16_t *l_18[1][1];
    int32_t *l_52 = &g_53;
    int i, j;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 1; j++)
        l_18[i][j] = &g_19;
    }
    (*l_52) = ((safe_add_func_int64_t_s_s((func_7(((0x165352F7L == g_2) > (l_20[2][3][3] = (((safe_rshift_func_uint32_t_u_s((safe_sub_func_uint64_t_u_u(g_2, (safe_div_func_int16_t_s_s((g_2, 0x81FFL), g_2)))), (((((1UL | ((+(l_16 ^ 0xB89BL)), l_17)) > 0x29B85755261FC42FLL) < l_17) & l_16) & 0xDAL))) >= l_17), g_2)))) | (-2L)), l_16)) & g_19);
    g_53 &= (safe_lshift_func_uint16_t_u_u((1L & (safe_rshift_func_int64_t_s_s((&g_19 != (void *)0), 2))), 15));
  }
  return l_20[3][3][1];
}

static uint64_t func_7(uint64_t p_8) {
  uint32_t l_32 = 0x1F6ED734L;
  int32_t l_37 = 0L;
  int64_t *l_38 = &g_39;
  uint16_t *l_40 = &g_41;
  const uint32_t l_42 = 0UL;
  if ((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(0xE7AEBB1BB30B137DLL, (((safe_div_func_int8_t_s_s((+(((void *)0 == &g_19) <= (safe_lshift_func_uint8_t_u_s(l_32, 1)))), (safe_lshift_func_uint32_t_u_u(p_8, ((((*l_40) = ((1L <= (4294967287UL && 4294967295UL)) >= (((((safe_sub_func_uint8_t_u_u((((*l_38) = (l_37 = g_2)) == l_32), g_2)) != 0xA6F576105F61CA72LL) & l_32) ^ (-4L)) || g_39))), l_37) && g_2))))) != g_2) > 0L))) == l_42) ^ 7L), 0x45F0L)), p_8))) {
    int8_t *l_47 = &g_48;
    int32_t *l_49 = &l_37;
    (*l_49) |= (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(g_41, ((*l_47) ^= g_39))), 0xAB8BF514L));
    return p_8;
  } else {
    int64_t **l_51[4][1] = {{&l_38}, {&l_38}, {&l_38}, {&l_38}};
    int64_t ***l_50 = &l_51[0][0];
    int i, j;
    (*l_50) = (void *)0;
  }
  return l_32;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  transparent_crc(g_53, "g_53", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
