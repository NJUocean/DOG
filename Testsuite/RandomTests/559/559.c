// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_17 = (-4L);
static int64_t g_19 = 0x2A8D3A18E418A527LL;
static int64_t g_28 = 0L;
static int64_t *g_27[3] = {&g_28, &g_28, &g_28};
static uint8_t g_45 = 0x06L;
static uint32_t g_47 = 1UL;
static int16_t g_49 = 0x5E0EL;
static int32_t g_51 = 7L;

static int16_t func_1(void);
static int32_t func_6(uint8_t p_7, int64_t p_8, const int8_t p_9, int32_t p_10, uint64_t p_11);

static int16_t func_1(void) {
  uint32_t l_12[4];
  int64_t *l_18 = &g_19;
  int64_t **l_29 = &g_27[1];
  int64_t *l_32 = &g_28;
  int32_t *l_50 = &g_51;
  int i;
  for (i = 0; i < 4; i++)
    l_12[i] = 4UL;
  (*l_50) ^= ((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(func_6(l_12[2], (safe_sub_func_int32_t_s_s((((safe_rshift_func_int64_t_s_s(((*l_18) = g_17), l_12[3])) ^ (safe_lshift_func_uint8_t_u_u(0x8EL, (safe_unary_minus_func_int16_t_s((safe_div_func_uint16_t_u_u(((g_17 != (safe_mod_func_uint16_t_u_u(g_17, 65534UL))), ((((*l_29) = g_27[1]) == (l_32 = ((safe_lshift_func_uint8_t_u_s(0xE0L, l_12[2])), (void *)0))), 0x974CL)), g_28))))))) | l_12[2]), 6UL)), l_12[2], l_12[0], l_12[2]), l_12[1])), g_49)) | 0x7E942FAFL);
  return g_19;
}

static int32_t func_6(uint8_t p_7, int64_t p_8, const int8_t p_9, int32_t p_10, uint64_t p_11) {
  int64_t **l_43 = &g_27[1];
  uint8_t *l_44 = &g_45;
  int32_t *l_46 = &g_17;
  int32_t l_48 = 0xD6326003L;
  l_48 = (g_47 = (p_11 > (safe_mod_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(p_10, (0x627E80A7L || ((*l_46) = (((*l_44) ^= (((safe_sub_func_uint64_t_u_u((((0UL || p_9), p_7) >= (g_28 && (safe_lshift_func_uint64_t_u_s(((((((safe_div_func_int32_t_s_s((l_43 != ((((void *)0 != &g_27[1]), 0xF2059515ED761E7FLL), &g_27[1])), (-10L))) & g_28) != p_10) < 8L) ^ g_17) | p_8), 54)))), p_9)) < p_8) > p_11)) ^ g_28))))), 5UL))));
  return g_49;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
