// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_7 = (-1L);
static int32_t g_10 = (-10L);
static int32_t *g_9[4] = {&g_10, &g_10, &g_10, &g_10};
static int16_t g_13 = 0xDFE0L;
static uint8_t g_17 = 0x22L;
static int64_t g_32 = 0x6A0B3493876A47CDLL;
static uint16_t g_33 = 65534UL;
static int32_t *volatile g_37 = &g_10;
static int32_t **volatile g_38 = &g_9[3];

static int16_t func_1(void);
static int8_t func_2(int8_t p_3, uint16_t p_4, int32_t p_5, int32_t p_6);

static int16_t func_1(void) {
  int8_t l_8 = 0xD3L;
  uint32_t l_39 = 6UL;
  (*g_37) = (func_2(g_7, l_8, g_7, l_8) | (g_7, (g_7 && g_7)));
  (*g_38) = &g_10;
  return l_39;
}

static int8_t func_2(int8_t p_3, uint16_t p_4, int32_t p_5, int32_t p_6) {
  int32_t **l_11 = &g_9[3];
  int16_t *l_12 = &g_13;
  uint8_t *l_16 = &g_17;
  uint8_t l_30 = 0xBAL;
  int64_t *l_31 = &g_32;
  int16_t l_34[1][1];
  int32_t l_35[5][4][2] = {{{0L, 0x200279E5L}, {0L, 0L}, {0L, 0x200279E5L}, {0L, 0L}}, {{0L, 0x200279E5L}, {0L, 0L}, {0L, 0x200279E5L}, {0L, 0L}}, {{0L, 0x200279E5L}, {0L, 0L}, {0L, 0x200279E5L}, {0L, 0L}}, {{0L, 0x200279E5L}, {0L, 0L}, {0L, 0x200279E5L}, {0L, 0L}}, {{0L, 0x200279E5L}, {0L, 0L}, {0L, 0x200279E5L}, {0L, 0L}}};
  int32_t *l_36 = &g_10;
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++)
      l_34[i][j] = 0x6768L;
  }
  (*l_11) = g_9[3];
  (*l_36) = (((*l_12) = g_7), (safe_sub_func_int32_t_s_s(((++(*l_16)), (safe_lshift_func_int32_t_s_u(((safe_mul_func_int32_t_s_s((((((*l_11) == (void *)0), (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int64_t_s_s((g_17 ^ (g_33 = ((*l_31) &= (l_30 < (1UL != (l_11 != (void *)0)))))), 22)), (g_10 <= p_3))), l_34[0][0]))), &l_30) == (void *)0), l_35[0][0][0])) || 0x3D88L), 0))), p_6)));
  return p_5;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
