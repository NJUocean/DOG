// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_15 = 0x7C1188E17B844A75LL;
static uint8_t g_37[3][5] = {{0x96L, 1UL, 0UL, 0UL, 1UL}, {0x96L, 1UL, 0UL, 0UL, 1UL}, {0x96L, 1UL, 0UL, 0UL, 1UL}};
static int16_t g_42 = 1L;
static uint16_t g_45 = 0x40B3L;
static uint64_t g_49 = 18446744073709551615UL;
static uint32_t g_50 = 4294967289UL;
static int32_t g_59 = 0xC0953B22L;
static int32_t *volatile g_58 = &g_59;

static const uint64_t func_1(void);
static uint64_t func_4(uint32_t p_5, uint64_t p_6, uint16_t p_7, int8_t p_8, int32_t p_9);

static const uint64_t func_1(void) {
  const int32_t l_14 = 0xBF2121F9L;
  uint8_t l_18 = 0UL;
  int32_t l_27 = 0xA7B5CF1CL;
  uint8_t *l_36 = &g_37[2][0];
  uint16_t *l_43 = (void *)0;
  uint16_t *l_44[4][5] = {{&g_45, (void *)0, (void *)0, (void *)0, (void *)0}, {(void *)0, &g_45, &g_45, &g_45, &g_45}, {&g_45, (void *)0, (void *)0, (void *)0, (void *)0}, {(void *)0, &g_45, &g_45, &g_45, &g_45}};
  uint8_t l_46[3];
  uint32_t *l_47 = (void *)0;
  uint32_t *l_48 = (void *)0;
  int i, j;
  for (i = 0; i < 3; i++)
    l_46[i] = 0x07L;
  (*g_58) = (safe_add_func_int64_t_s_s(1L, func_4((g_49 = (((((safe_div_func_int64_t_s_s(l_14, g_15)) & (((safe_add_func_int16_t_s_s((((l_18 & ((g_45 &= ((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((((safe_lshift_func_int64_t_s_u(l_18, (safe_div_func_uint16_t_u_u(l_27, ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u(l_18, l_18)) | ((g_42 = ((safe_lshift_func_uint8_t_u_s(((*l_36)++), ((((safe_rshift_func_int32_t_s_u(l_14, 15)) != 0x2DL) > 0xD7L), g_15))) < g_15)) >= l_14)) && g_15), 5)), g_42) & g_15), 0x52L)) | g_15))))) | 1UL) | g_15), 1L), g_15)), l_27)) ^ g_15)), l_46[0])) == 65535UL) == l_18), g_15)) == 0xF079038991F32AFCLL) != 0UL)) & g_15), 0x0C1731D4L) & 0xC242EA6AL)), g_15, g_50, g_50, l_27)));
  return g_15;
}

static uint64_t func_4(uint32_t p_5, uint64_t p_6, uint16_t p_7, int8_t p_8, int32_t p_9) {
  for (p_5 = 17; (p_5 <= 12); p_5 = safe_sub_func_uint8_t_u_u(p_5, 8)) {
    for (p_9 = (-23); (p_9 > (-5)); p_9 = safe_add_func_uint16_t_u_u(p_9, 1)) {
      uint32_t l_57[3];
      int i;
      for (i = 0; i < 3; i++)
        l_57[i] = 4294967295UL;
      for (p_7 = 11; (p_7 != 8); p_7--) {
        return l_57[2];
      }
    }
  }
  return g_45;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_15, "g_15", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_37[i][j], "g_37[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_59, "g_59", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
