// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int8_t g_7[1][3] = {{0L, 0L, 0L}};
static uint16_t g_23 = 9UL;
static int64_t g_29[2] = {0xBE62699FF93F8DE9LL, 0xBE62699FF93F8DE9LL};
static volatile int32_t g_30 = 0L;

static uint32_t func_1(void);
static int32_t func_2(uint32_t p_3, int8_t p_4);

static uint32_t func_1(void) {
  int16_t l_5 = 0x1265L;
  int8_t *l_6 = &g_7[0][0];
  uint16_t *l_21 = (void *)0;
  uint16_t *l_22 = &g_23;
  int32_t l_28 = 1L;
  uint32_t l_31 = 1UL;
  int32_t *l_32[2][2];
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++)
      l_32[i][j] = &l_28;
  }
  g_30 = func_2((((*l_6) = l_5) && (safe_add_func_uint64_t_u_u((g_7[0][0] ^ (((((safe_mod_func_uint16_t_u_u((g_29[0] = ((((((g_7[0][0] ^ (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint32_t_u_u((g_7[0][1] < (g_7[0][0], ((safe_lshift_func_int16_t_s_u(0x13D0L, 11)) | (safe_unary_minus_func_uint64_t_u((((((((safe_rshift_func_uint16_t_u_u(((*l_22) = g_7[0][2]), 5)), (l_28 = ((&g_23 == ((safe_sub_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(g_23, g_23)) >= g_23) >= l_5), 1L)), l_22)) > l_5))), l_28) <= g_7[0][1]) | g_7[0][0]) | 0x0BD2F23D37F4A1D2LL) | g_7[0][1])))))), l_5)) & 0x34L), 7))) && 65535UL), 0xF2633933B839BF5BLL) && g_23) <= 0x68927649L) >= g_7[0][2])), g_7[0][0])) ^ 0x5FBC01D4L) > g_30) ^ g_7[0][0]) || l_28)), g_7[0][0]))), l_31);
  return g_7[0][2];
}

static int32_t func_2(uint32_t p_3, int8_t p_4) { return g_30; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_23, "g_23", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_29[i], "g_29[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_30, "g_30", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
