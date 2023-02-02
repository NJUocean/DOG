// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint8_t g_9 = 252UL;
static const int32_t *g_19 = (void *)0;
static int32_t g_21 = 0x6270E7ADL;
static uint64_t g_26 = 0xF7626A9D9E177C42LL;
static int8_t g_28 = 0xA2L;
static int32_t g_29 = 1L;
static uint8_t g_31 = 0x95L;
static int32_t *g_35 = &g_21;
static int32_t **g_34 = &g_35;
static int32_t ***volatile g_33[3][5][1] = {{{&g_34}, {(void *)0}, {(void *)0}, {(void *)0}, {(void *)0}}, {{&g_34}, {&g_34}, {&g_34}, {(void *)0}, {(void *)0}}, {{(void *)0}, {(void *)0}, {&g_34}, {&g_34}, {&g_34}}};
static int32_t ***const volatile g_36 = &g_34;

static uint32_t func_1(void);
static int32_t *func_2(int32_t p_3, int32_t *p_4, int8_t p_5, int32_t *p_6, int32_t *p_7);

static uint32_t func_1(void) {
  int8_t l_10 = 0x7DL;
  int32_t *l_20[4];
  int8_t *l_27[4][4] = {{&g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &l_10, &g_28}, {&g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28}};
  uint8_t *l_30 = &g_31;
  uint32_t l_32[4] = {0xDBFE6B87L, 0xDBFE6B87L, 0xDBFE6B87L, 0xDBFE6B87L};
  int i, j;
  for (i = 0; i < 4; i++)
    l_20[i] = &g_21;
  l_20[2] = func_2((!(((g_9 > 251UL), ((l_10 != (safe_mul_func_int32_t_s_s(((((l_10, g_9) ^ (safe_mod_func_uint8_t_u_u((((((((safe_div_func_uint32_t_u_u((((*l_30) = (safe_mul_func_int16_t_s_s((g_19 == l_20[3]), (safe_mul_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((g_28 = g_26), g_29)), g_29) | g_29), g_29))))), 0x0F30385DL), g_21)) & (-1L)), 1L) && g_28), g_28) ^ g_26) <= 0x0D4A7C769867F5D1LL), g_26))) || g_31) & g_29), l_32[0]))) != g_26)) == g_26)), l_20[3], g_29, l_20[0], &g_21);
  return g_31;
}

static int32_t *func_2(int32_t p_3, int32_t *p_4, int8_t p_5, int32_t *p_6, int32_t *p_7) {
  int32_t *l_37 = &g_21;
  (*g_36) = &p_4;
  return l_37;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
