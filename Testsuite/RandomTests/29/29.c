// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  const int64_t f0;
};

static uint32_t g_9 = 0UL;
static union U0 g_20[2][4] = {{{1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}}};
static uint64_t g_30 = 1UL;
static int32_t g_33 = (-1L);

static int32_t func_1(void);
static int8_t func_3(int16_t p_4, int64_t p_5, uint8_t p_6, int32_t p_7, int32_t p_8);

static int32_t func_1(void) {
  int16_t l_2[1][1];
  int64_t l_15 = (-4L);
  uint64_t *l_28 = (void *)0;
  uint64_t *l_29 = &g_30;
  int32_t l_31 = 0x8129EC6EL;
  int32_t *l_32 = &g_33;
  int64_t l_34 = 0xDE2CAEABA4A2C6EBLL;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++)
      l_2[i][j] = 0xC5A6L;
  }
  (*l_32) = ((l_2[0][0] && func_3(g_9, l_2[0][0], ((safe_unary_minus_func_uint32_t_u(((g_9 > ((safe_mul_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(l_2[0][0], (((l_15 >= (safe_mul_func_int32_t_s_s(((*l_32) |= (safe_rshift_func_int64_t_s_s((l_31 = ((g_20[1][0], ((*l_29) |= ((safe_add_func_int32_t_s_s(((((safe_div_func_int32_t_s_s((~l_2[0][0]), (safe_mod_func_uint64_t_u_u(0xE607D19FA553FC2FLL, 0xC0B333EE67684593LL)))) != l_2[0][0]) ^ 0xF3392002L), 0xE56E623BL), g_20[1][0].f0)), 5UL))), g_30)), 51))), 0xF47F28A9L))) == g_20[1][0].f0), (*l_32)))) <= g_9) ^ l_34), 0x94L)) == g_20[1][0].f0)) & l_2[0][0]))) || (*l_32)), l_2[0][0], g_20[1][0].f0)) == 4L);
  return g_33;
}

static int8_t func_3(int16_t p_4, int64_t p_5, uint8_t p_6, int32_t p_7, int32_t p_8) {
  int32_t l_35[1];
  int i;
  for (i = 0; i < 1; i++)
    l_35[i] = 0x61302D9CL;
  for (p_8 = 0; (p_8 >= 0); p_8 -= 1) {
    int i;
    return l_35[p_8];
  }
  return p_5;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_20[i][j].f0, "g_20[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
