// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_11 = 18446744073709551611UL;
static int16_t g_24 = 0xB37DL;
static int32_t g_26 = 1L;
static int32_t *volatile g_25 = &g_26;

static int32_t func_1(void);

static int32_t func_1(void) {
  uint16_t l_2[5][5] = {{0x26FFL, 0x2263L, 0x2263L, 0x26FFL, 0x9AEDL}, {0x26FFL, 1UL, 0UL, 0UL, 1UL}, {0x9AEDL, 0x2263L, 0UL, 0x82EAL, 0x82EAL}, {0x2263L, 0x9AEDL, 0x2263L, 0UL, 0x82EAL}, {1UL, 0x26FFL, 0x82EAL, 0x26FFL, 1UL}};
  int16_t *l_23[2];
  int32_t *l_27 = &g_26;
  int i, j;
  for (i = 0; i < 2; i++)
    l_23[i] = (void *)0;
  (*g_25) ^= ((l_2[3][3] | (safe_rshift_func_int8_t_s_s((-5L), 0))), ((safe_sub_func_uint64_t_u_u((((0L ^ (l_2[0][0] == (((safe_lshift_func_int32_t_s_s((safe_lshift_func_int64_t_s_s(0x4EF66B17B722BA7BLL, g_11)), (safe_rshift_func_uint16_t_u_s(l_2[3][3], l_2[2][3])))) <= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((~((safe_mod_func_uint8_t_u_u(((g_24 = g_11) != 0L), g_11)) && 0UL)), 1)), l_2[1][0]))) ^ g_11))) & g_11) ^ g_11), 0xCC8AF953423637B3LL)) >= l_2[3][3]));
  (*l_27) = 0L;
  return (*l_27);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
