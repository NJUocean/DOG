// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const uint32_t g_9 = 0x52C58FB7L;
static uint16_t g_24[4][1][3] = {{{0UL, 1UL, 0UL}}, {{65534UL, 65531UL, 65534UL}}, {{0UL, 1UL, 0UL}}, {{65534UL, 65531UL, 65534UL}}};

static int64_t func_1(void);
static int16_t func_4(const uint16_t p_5, uint32_t p_6, uint8_t p_7, const int16_t p_8);

static int64_t func_1(void) {
  uint16_t l_10[3];
  int32_t l_15 = 0x95D1C58BL;
  int32_t *l_25 = &l_15;
  int i;
  for (i = 0; i < 3; i++)
    l_10[i] = 2UL;
  (*l_25) = ((safe_mod_func_uint32_t_u_u((func_4(g_9, g_9, (g_24[2][0][2] = (((l_10[0] | ((g_9 != ((safe_sub_func_int8_t_s_s(l_10[0], (safe_sub_func_int32_t_s_s(((l_15 = 0x43L) >= ((safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(l_10[0], (l_10[0] | (((safe_rshift_func_uint32_t_u_u(0UL, g_9)) & 6UL) && 0x796D402DL)))), 255UL)) <= g_9), l_10[0])) >= g_9)), 0xDF0442E1L)))) >= 0L)) != l_10[0])) != g_9), l_10[0])), g_9) ^ 65535UL), 0xFAB8D232L)), l_15);
  return g_24[1][0][2];
}

static int16_t func_4(const uint16_t p_5, uint32_t p_6, uint8_t p_7, const int16_t p_8) { return g_9; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_24[i][j][k], "g_24[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
