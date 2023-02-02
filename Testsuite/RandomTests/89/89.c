// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_5 = 8L;
static volatile int32_t *const g_12 = (void *)0;
static uint32_t g_13 = 18446744073709551615UL;
static int8_t g_33 = 0xA8L;

static int8_t func_1(void);
static uint8_t func_6(int8_t p_7, int16_t p_8, int32_t *p_9, int32_t *p_10, int32_t p_11);

static int8_t func_1(void) {
  uint32_t l_2 = 0xA75C19C5L;
  int32_t *l_4[1];
  uint32_t l_17 = 0x2F92E6C0L;
  int64_t l_34 = (-1L);
  int i;
  for (i = 0; i < 1; i++)
    l_4[i] = &g_5;
  if ((((l_2 < (+((g_5 = l_2) & (func_6((((void *)0 == g_12), g_13), g_13, l_4[0], l_4[0], (g_13 || g_13)) && g_13)))) ^ g_13) || (-1L))) {
    return g_13;
  } else {
    uint32_t l_20 = 0x1C0A9C5AL;
    int32_t *l_35 = &g_5;
    int64_t *l_36 = &l_34;
    int32_t l_37 = (-1L);
    l_37 |= (safe_mod_func_int16_t_s_s((-1L), (((*l_36) = (((l_17 <= ((((g_13, (((safe_div_func_int32_t_s_s(1L, 0x6D5D64F6L)) >= 1L) < l_20)) && (safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(g_13, ((safe_mul_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(((g_33 = (safe_rshift_func_uint32_t_u_u((safe_rshift_func_uint32_t_u_s(((((((g_13 || g_13), g_13) | g_5) && l_20) == g_5) | g_5), 17)), 17))) | g_5), l_34)) & g_5) > g_13), (-10L))) <= g_5))), g_5))), l_35) != (void *)0)) > g_13) < 0xF6L)) & 1UL)));
  }
  return g_13;
}

static uint8_t func_6(int8_t p_7, int16_t p_8, int32_t *p_9, int32_t *p_10, int32_t p_11) {
  uint8_t l_14 = 252UL;
  return l_14;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
