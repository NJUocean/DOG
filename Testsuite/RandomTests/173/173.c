// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_5[5][5] = {{7L, 0xC3EEE2FDL, 0xC3EEE2FDL, 7L, 7L}, {(-10L), 1L, (-10L), 1L, (-10L)}, {7L, 7L, 0xC3EEE2FDL, 0xC3EEE2FDL, 7L}, {0x1F1EB32AL, 1L, 0x1F1EB32AL, 1L, 0x1F1EB32AL}, {7L, 0xC3EEE2FDL, 0xC3EEE2FDL, 7L, 7L}};
static int32_t *g_4 = &g_5[2][4];
static int32_t g_6[3] = {0x5C285CE9L, 0x5C285CE9L, 0x5C285CE9L};
static volatile int32_t g_7 = (-9L);
static int32_t g_8 = 0L;

static int32_t func_1(void);
static int32_t *const func_2(int32_t *p_3);

static int32_t func_1(void) {
  uint64_t l_37 = 1UL;
  g_4 = func_2(g_4);
  return l_37;
}

static int32_t *const func_2(int32_t *p_3) {
  int8_t l_19 = 0xC5L;
  int8_t l_25 = 0x51L;
  int32_t l_33 = 0x19924203L;
  for (g_6[0] = 4; (g_6[0] >= 0); g_6[0] -= 1) {
    uint32_t l_24 = 0x00B0881DL;
    for (g_8 = 1; (g_8 <= 4); g_8 += 1) {
      uint64_t l_26 = 18446744073709551615UL;
      int i, j;
      g_5[g_6[0]][g_6[0]] = (safe_mul_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_5[g_8][g_8] == (safe_mod_func_uint64_t_u_u((g_5[g_8][g_8], (((((g_7 >= (safe_mul_func_int64_t_s_s(g_6[0], ((l_19 && ((((safe_rshift_func_int64_t_s_u((safe_sub_func_uint32_t_u_u(l_24, (g_5[2][4] == g_5[2][4]))), 30)) || ((((g_5[1][0] ^ l_19), l_24) & g_5[g_8][g_8]), g_6[2])) & g_6[0]) ^ l_25)) <= g_5[2][4])))), p_3) == &g_6[2]), l_26) == l_24)), g_8))), g_8)), g_5[g_8][g_8])) >= 0xC5A4A104L), 0xF6C5533FL));
    }
    for (l_24 = 1; (l_24 <= 4); l_24 += 1) {
      int32_t *l_27 = &g_5[2][4];
      int32_t *l_28 = &g_5[g_6[0]][g_6[0]];
      int32_t *l_29 = (void *)0;
      int32_t *l_30 = &g_5[3][3];
      int32_t *l_31 = (void *)0;
      int32_t *l_32[3];
      uint32_t l_34 = 1UL;
      int i, j;
      for (i = 0; i < 3; i++)
        l_32[i] = &g_5[l_24][l_24];
      ++l_34;
    }
  }
  (*g_4) = (*p_3);
  return &g_8;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 3; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
