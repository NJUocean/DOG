// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_13 = 4UL;
static uint32_t g_23 = 0x96497440L;
static int64_t g_28 = 0x7649690B2811FFBELL;
static int32_t g_34 = 0xCF58A412L;
static int32_t *volatile g_35 = (void *)0;

static uint32_t func_1(void);
static int16_t func_6(uint16_t p_7, int16_t p_8, int32_t p_9, uint64_t p_10);

static uint32_t func_1(void) {
  int32_t l_14[3][3][1] = {{{0xDBDA7FE6L}, {0x45559507L}, {0x45559507L}}, {{0xDBDA7FE6L}, {0x45559507L}, {0x45559507L}}, {{0xDBDA7FE6L}, {0x45559507L}, {0x45559507L}}};
  uint32_t *l_22 = &g_23;
  int32_t l_24 = 0xEA0627E8L;
  uint64_t l_25[1];
  uint8_t l_26 = 0x33L;
  int64_t *l_27[4][2][2] = {{{&g_28, &g_28}, {&g_28, &g_28}}, {{&g_28, &g_28}, {&g_28, &g_28}}, {{&g_28, &g_28}, {&g_28, &g_28}}, {{&g_28, &g_28}, {&g_28, &g_28}}};
  int64_t l_29 = (-1L);
  uint8_t l_30 = 0x0AL;
  uint8_t l_36 = 0xB1L;
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_25[i] = 9UL;
  l_36 = (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(func_6((safe_add_func_uint32_t_u_u(g_13, ((3L | l_14[0][1][0]), (((((+((safe_add_func_uint64_t_u_u(18446744073709551614UL, (safe_sub_func_uint8_t_u_u(((0L > (g_13 || (l_14[0][1][0] || (l_29 = ((((((safe_sub_func_uint8_t_u_u(((l_24 |= ((((*l_22) = ((g_13 > (((g_13 > 0x07EA4C5706B37990LL) & g_13) && (-4L))) && 0xC7L)), l_14[0][1][0]) || 0xB8CFF26AL)), g_23), l_14[0][1][0])) == l_25[0]) ^ l_25[0]) & g_13), l_26) && 0xB839BF5BF81606DCLL))))) == 0x5ED761E7L), g_28)))) && 0x5A1EL)) && g_23) < 0x1450187EL) ^ 0x69L), g_13)))), l_30, l_14[0][1][0], l_26), g_13)), g_28));
  return l_25[0];
}

static int16_t func_6(uint16_t p_7, int16_t p_8, int32_t p_9, uint64_t p_10) {
  for (p_9 = 0; (p_9 > (-27)); p_9--) {
    int32_t *l_33 = &g_34;
    (*l_33) = 0x63260039L;
  }
  return p_9;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
