// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  volatile unsigned f0 : 24;
  const uint64_t f1;
};

static int32_t g_3 = 0xB905D09EL;
static uint16_t g_25 = 0x3062L;
static int16_t g_27 = 0x46BDL;
static volatile union U1 g_32 = {0x6C56D20AL};
static const uint64_t g_33 = 0x6CEDDA5659CDE30ELL;
static uint16_t g_35[4] = {65535UL, 65535UL, 65535UL, 65535UL};

static int64_t func_1(void);
static int16_t func_10(int32_t *p_11, int32_t *p_12);

static int64_t func_1(void) {
  int32_t *l_2 = &g_3;
  uint16_t *l_34 = &g_35[2];
  (*l_2) &= 0L;
  (*l_2) = (safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((0x48C443EB60693009LL == 0x4562513244D513C6LL), func_10(&g_3, l_2))), (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((*l_34) &= ((g_32, (g_32.f0 > g_33)) & 18446744073709551615UL)), (-4L))) > g_33), g_35[0]), g_33)))), g_33));
  return (*l_2);
}

static int16_t func_10(int32_t *p_11, int32_t *p_12) {
  int16_t l_21 = 0x6ACBL;
  uint16_t *l_24 = &g_25;
  int16_t *l_26[5][3][5] = {{{&l_21, &l_21, &l_21, &l_21, (void *)0}, {&l_21, &l_21, &l_21, &l_21, &l_21}, {(void *)0, &l_21, &l_21, (void *)0, &l_21}}, {{&l_21, &l_21, &l_21, &l_21, &l_21}, {(void *)0, &l_21, &l_21, &l_21, (void *)0}, {&l_21, &l_21, &l_21, &l_21, &l_21}}, {{(void *)0, &l_21, (void *)0, (void *)0, &l_21}, {&l_21, &l_21, &l_21, &l_21, &l_21}, {&l_21, (void *)0, (void *)0, &l_21, (void *)0}}, {{&l_21, &l_21, &l_21, &l_21, &l_21}, {&l_21, (void *)0, &l_21, &l_21, &l_21}, {&l_21, &l_21, &l_21, &l_21, &l_21}}, {{&l_21, (void *)0, &l_21, (void *)0, (void *)0}, {&l_21, &l_21, &l_21, &l_21, &l_21}, {(void *)0, &l_21, &l_21, (void *)0, (void *)0}}};
  int i, j, k;
  (*p_11) = (safe_add_func_int16_t_s_s((g_27 ^= (safe_mod_func_int64_t_s_s(g_3, (((safe_rshift_func_int32_t_s_u(g_3, ((safe_div_func_int64_t_s_s(l_21, (g_3 && (((void *)0 != p_11) <= 0x6D6DBC1C234AC019LL)))) != 4294967295UL))) < (safe_mul_func_int8_t_s_s(((((*l_24) |= l_21), l_21) == 0xE9L), g_3))) | l_21)))), l_21));
  return l_21;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_35[i], "g_35[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
