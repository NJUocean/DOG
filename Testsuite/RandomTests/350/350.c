// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint16_t g_13 = 0UL;
static int32_t g_17 = 0x76427603L;
static int16_t g_34[1][2] = {{0xB1A0L, 0xB1A0L}};
static volatile int16_t g_35 = 0xA1B1L;
static uint16_t g_36 = 0x8F49L;
static int32_t *g_40[5] = {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0};
static int32_t **volatile g_39[5] = {&g_40[4], &g_40[4], &g_40[4], &g_40[4], &g_40[4]};

static uint64_t func_1(void);
static uint16_t func_2(uint32_t p_3, uint32_t p_4, int16_t p_5);

static uint64_t func_1(void) {
  uint16_t l_11 = 0UL;
  uint16_t *l_12 = &g_13;
  int32_t *l_16 = &g_17;
  uint16_t *l_32[1][3][3] = {{{&l_11, &l_11, &l_11}, {&g_13, &g_13, &g_13}, {&l_11, &l_11, &l_11}}};
  int16_t *l_33 = &g_34[0][1];
  uint32_t l_37[4][1][2] = {{{0UL, 0UL}}, {{0UL, 0UL}}, {{0UL, 0UL}}, {{0UL, 0UL}}};
  int i, j, k;
  (*l_16) = (func_2((!(safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_11 < l_11), (((l_11 >= (--(*l_12))) || ((*l_16) = l_11)) || (0xE2L > (((((safe_add_func_int32_t_s_s((safe_mul_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((!((*l_33) = (((((g_17 > ((safe_lshift_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_13, 13)), (~(safe_rshift_func_uint32_t_u_u((((g_17 == (0xEFL > g_17)) <= (*l_16)) == (*l_16)), (*l_16)))))) ^ 18446744073709551615UL)), l_32[0][0][0]) != &g_13), (*l_16)), g_13))), 2)), 0xC857617C0EC0DCEELL)), 4294967295UL)), (*l_16)) >= 0xB6L), &l_11) == &l_11))))), g_35))), g_36, l_37[1][0][1]), 0L);
  return (*l_16);
}

static uint16_t func_2(uint32_t p_3, uint32_t p_4, int16_t p_5) {
  uint32_t l_57[2];
  int i;
  for (i = 0; i < 2; i++)
    l_57[i] = 8UL;
  for (g_17 = 0; (g_17 <= 0); g_17 += 1) {
    for (p_4 = 0; (p_4 <= 0); p_4 += 1) {
      int i, j;
      if (g_34[p_4][(p_4 + 1)])
        break;
    }
    for (p_5 = 0; (p_5 <= 0); p_5 += 1) {
      int32_t **l_38 = (void *)0;
      int32_t **l_41 = &g_40[4];
      (*l_41) = &g_17;
    }
  }
  for (p_5 = 0; (p_5 != (-1)); --p_5) {
    int16_t l_48 = 0x61FAL;
    int32_t l_51 = (-9L);
    int32_t l_52 = (-7L);
    int32_t l_53 = (-10L);
    int32_t l_54 = (-5L);
    int32_t l_55 = 0x42871EB1L;
    int32_t l_56 = 0xA4AECA2AL;
    for (g_36 = 0; (g_36 <= 4); g_36 += 1) {
      int32_t *l_44 = &g_17;
      int32_t *l_45 = (void *)0;
      int32_t *l_46 = &g_17;
      int32_t *l_47 = &g_17;
      int32_t *l_49 = &g_17;
      int32_t *l_50[4][3][3] = {{{&g_17, (void *)0, &g_17}, {&g_17, &g_17, &g_17}, {&g_17, (void *)0, &g_17}}, {{&g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17}}, {{&g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17}, {&g_17, (void *)0, &g_17}}, {{&g_17, &g_17, &g_17}, {&g_17, (void *)0, &g_17}, {&g_17, &g_17, &g_17}}};
      int i, j, k;
      g_39[g_36] = g_39[g_36];
      l_57[0]--;
    }
  }
  return g_36;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
