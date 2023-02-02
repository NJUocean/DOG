// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_7 = 2L;
static uint8_t g_8 = 255UL;
static const int32_t g_28 = 0x4132D38CL;
static int32_t g_33 = 0x4B05EF13L;

static uint32_t func_1(void);
static int8_t func_9(const uint32_t p_10, uint64_t p_11, uint16_t p_12, const uint64_t p_13);

static uint32_t func_1(void) {
  uint64_t l_6 = 0x8C66F5A9C4C8D3C8LL;
  uint16_t l_26 = 5UL;
  uint8_t *l_27 = &g_8;
  int32_t *l_32[1][5];
  uint8_t l_34 = 0xA7L;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++)
      l_32[i][j] = &g_33;
  }
  l_34 ^= ((safe_mod_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(0x97EEDE0BL, l_6)) > (((g_7 &= l_6) != (g_8 && func_9(l_6, (safe_mod_func_uint16_t_u_u((((*l_27) = ((l_6 <= (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((((g_8 <= ((0xCA7B5CF1L | (safe_mul_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((g_8 < 0x4AB653B1L), l_6)) == 0x82L), g_8))) ^ g_8)), 65535UL) ^ g_8) == l_6), g_8)) >= l_6), 14)), 3))), l_26)) > g_28), g_28)), g_28, g_28))) == l_6)), g_28)), 0x914A3A6DL);
  return g_28;
}

static int8_t func_9(const uint32_t p_10, uint64_t p_11, uint16_t p_12, const uint64_t p_13) {
  uint32_t l_29 = 0xFA72D50FL;
  ++l_29;
  return l_29;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
