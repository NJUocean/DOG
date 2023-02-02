// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const uint32_t f0;
  uint32_t f1;
};

static int32_t g_6 = 3L;
static uint8_t g_31 = 0xE2L;
static int32_t g_36 = (-5L);
static int32_t g_39 = 6L;
static int32_t g_44 = 0x7FC3FE76L;
static int32_t g_45 = 0x5E948ECAL;

static int8_t func_1(void);
static uint64_t func_8(const int32_t p_9, uint32_t p_10, int64_t p_11, uint32_t p_12, int8_t p_13);

static int8_t func_1(void) {
  int32_t l_7 = 1L;
  struct S0 l_21 = {4294967293UL, 0UL};
  uint8_t *l_30[1];
  int32_t l_32 = 1L;
  int32_t *l_35 = &g_36;
  int32_t *l_37 = (void *)0;
  int32_t *l_38 = &g_39;
  uint64_t l_40 = 1UL;
  int8_t *l_43[5];
  int i;
  for (i = 0; i < 1; i++)
    l_30[i] = &g_31;
  for (i = 0; i < 5; i++)
    l_43[i] = (void *)0;
  g_45 &= ((safe_mul_func_int16_t_s_s(((0x4EE7D214L >= (safe_div_func_uint16_t_u_u(0xDDBCL, (0x7F737A9AL & (g_6 != l_7))))) < (g_44 = (((((func_8((((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((+0xF7919ADBL) != (safe_div_func_uint64_t_u_u((l_21, (safe_sub_func_int64_t_s_s((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint64_t_u_u((((((*l_38) = ((*l_35) ^= (safe_div_func_int32_t_s_s(((l_32 = g_6), ((((safe_add_func_int64_t_s_s(((((&g_31 != (void *)0), (void *)0) == (void *)0) < 1UL), l_32)) <= l_32) || 0x94L) ^ 0xDBL)), l_21.f0)))) >= g_31), (*l_38)) > g_31), g_31)), 0x1EL)) | 65533UL) != g_31), g_31))), 0x37B78F18B01197BALL))) > 0x438E2136L), 0xE7A32987L)), 1UL)) && g_39), (-1L)), l_40, g_31, g_6, g_6) ^ 0x9718B2F1036C1418LL), g_36) < g_31) <= g_31) > g_6))), g_6)) == g_6);
  return (*l_38);
}

static uint64_t func_8(const int32_t p_9, uint32_t p_10, int64_t p_11, uint32_t p_12, int8_t p_13) {
  int32_t *l_41 = &g_36;
  int8_t l_42[1][3];
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++)
      l_42[i][j] = (-1L);
  }
  (*l_41) ^= g_6;
  return l_42[0][0];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
