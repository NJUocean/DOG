// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int8_t g_22 = 4L;
static int32_t g_27 = 0x59EC1348L;
static int16_t g_29 = 7L;
static uint32_t g_35 = 1UL;
static int64_t g_37 = 9L;
static uint64_t g_38 = 0UL;
static uint64_t g_42 = 8UL;

static const uint8_t func_1(void);
static const int32_t func_2(uint8_t p_3, uint64_t p_4);

static const uint8_t func_1(void) {
  uint64_t l_5 = 0x09C3FBB4EBB0CB8CLL;
  int16_t *l_28[1];
  int32_t l_34 = 0xB15B45BEL;
  int64_t *l_36 = &g_37;
  int32_t l_39 = 0x71799991L;
  int i;
  for (i = 0; i < 1; i++)
    l_28[i] = &g_29;
  g_42 = func_2((9L > (0x33EFL | l_5)), ((safe_add_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u(((l_39 ^= (safe_mod_func_int8_t_s_s(((((g_38 = ((*l_36) = ((safe_div_func_uint16_t_u_u((((g_35 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(l_5, 1UL)), (((safe_add_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s((g_22, (g_22 ^ (+((((safe_div_func_uint16_t_u_u((!((g_29 = g_27) & (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_34 |= l_5), g_27)), 0x6565L)))), 1UL)) < l_5) > 0x34071E9942C3B03CLL) & 0x9E4A0435E45DB0FFLL)))), l_5)), 0UL) & l_5) || g_22) < l_5), 1L)) ^ g_27) <= 0xEBL)))) != l_5) ^ 0x4C996E15L), 0xEB60L)) != l_5))) > g_27) >= g_27) | 0x332A5B4DL), 246UL))) | l_5), g_27)), g_27)), l_39));
  for (l_34 = 0; l_34 < 1; l_34 += 1) {
    l_28[l_34] = &g_29;
  }
  return g_27;
}

static const int32_t func_2(uint8_t p_3, uint64_t p_4) {
  int16_t l_40 = 0L;
  const int64_t l_41 = 6L;
  l_40 = (0xFF510212L >= g_37);
  return l_41;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
