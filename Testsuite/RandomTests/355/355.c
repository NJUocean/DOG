// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-5L);
static uint32_t g_3 = 1UL;
static int64_t g_5 = 0xE0369BD697E780CALL;
static uint8_t g_9[1][2][4] = {{{0xF6L, 0xF6L, 0xF6L, 0xF6L}, {0xF6L, 0xF6L, 0xF6L, 0xF6L}}};
static int8_t g_36 = 0x84L;
static int8_t g_40[4][2] = {{(-5L), (-5L)}, {(-5L), (-5L)}, {(-5L), (-5L)}, {(-5L), (-5L)}};
static int32_t g_51[3][1] = {{1L}, {1L}, {1L}};
static int32_t g_54 = 1L;
static int32_t g_56 = 1L;
static int32_t *volatile g_55 = &g_56;

static int16_t func_1(void);
static int64_t func_20(int32_t p_21, const uint8_t *p_22, const uint64_t p_23, int64_t p_24, uint16_t p_25);

static int16_t func_1(void) {
  int64_t *l_4 = &g_5;
  uint8_t *l_8 = &g_9[0][1][3];
  int32_t l_33 = 1L;
  uint8_t **l_34 = &l_8;
  int8_t *l_35 = &g_36;
  int8_t *l_39 = &g_40[0][1];
  int8_t **l_38 = &l_39;
  const int32_t l_41 = 1L;
  uint64_t l_52 = 0x2B5D06DE21E52503LL;
  uint16_t l_53 = 65531UL;
  int32_t *l_57 = (void *)0;
  (*g_55) = (g_2 | (g_54 = (((*l_4) = g_3), (g_3 | (safe_mod_func_uint16_t_u_u((((++(*l_8)) && (((((((g_3 > ((safe_mul_func_int8_t_s_s((l_52 = (((g_51[2][0] = (safe_add_func_uint16_t_u_u((safe_lshift_func_int64_t_s_s(func_20((safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(l_33)), ((((*l_34) = (void *)0) != (void *)0), ((*l_35) &= l_33)))), (~(((*l_38) = l_35) != (void *)0)))), l_33)), l_35, l_41, g_40[0][1], g_40[2][0]), 50)), l_33))), l_4) == &g_5)), l_41)) < g_3)) & 3UL), l_52), 7UL), 0L), l_53) >= l_53)) != 0x0BB1DCEDL), 5L))))));
  l_33 |= (*g_55);
  return l_41;
}

static int64_t func_20(int32_t p_21, const uint8_t *p_22, const uint64_t p_23, int64_t p_24, uint16_t p_25) {
  uint8_t *l_47 = (void *)0;
  uint8_t **l_46 = &l_47;
  uint8_t ***l_48 = &l_46;
  int32_t l_49[3];
  int32_t *l_50 = &l_49[2];
  int i;
  for (i = 0; i < 3; i++)
    l_49[i] = 0x762406C4L;
  (*l_50) = (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((*l_48) = l_46) == (void *)0), g_9[0][1][3])), l_49[0]));
  return g_40[0][1];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_40[i][j], "g_40[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_54, "g_54", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
