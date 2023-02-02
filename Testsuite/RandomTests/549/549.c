// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint16_t f0;
};

static const uint8_t g_11 = 0x94L;
static uint32_t g_17 = 0xD8143836L;
static int32_t g_23 = 0x1636717BL;
static int32_t *g_26 = &g_23;
static int32_t **volatile g_25[3] = {&g_26, &g_26, &g_26};
static int32_t g_30 = 7L;

static union U0 func_1(void);
static int32_t func_7(uint16_t p_8, int8_t p_9, int32_t p_10);

static union U0 func_1(void) {
  int8_t l_2 = 0L;
  int16_t l_18 = (-7L);
  int32_t l_19 = 0x8407374FL;
  int8_t l_20 = 0xDBL;
  int32_t *l_29 = &g_30;
  union U0 l_31[3][4] = {{{65535UL}, {0xE520L}, {65535UL}, {65535UL}}, {{0xE520L}, {0xE520L}, {65530UL}, {0xE520L}}, {{0xE520L}, {65535UL}, {65535UL}, {0xE520L}}};
  int i, j;
  (*l_29) &= (l_2 ^ (safe_mul_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((*g_26) ^= func_7(((g_11 | (((l_19 &= (((g_11 == g_11) || (safe_sub_func_int32_t_s_s(0x407858F9L, (safe_unary_minus_func_int8_t_s(((((((safe_mul_func_int32_t_s_s(g_11, (((g_17 ^ ((l_2 >= g_17) | 18446744073709551609UL)) > g_11) >= l_2))) && l_2) | g_17) | l_18) <= g_17), 0x24L)))))), 0xE809B4AFL)) && 1UL) && l_20)) && 0x46B51F0EL), g_17, g_11)), 0x04518073L)), 0x3649D959L)));
  return l_31[0][3];
}

static int32_t func_7(uint16_t p_8, int8_t p_9, int32_t p_10) {
  uint8_t l_21[5];
  int32_t *l_22 = &g_23;
  int32_t *l_28 = (void *)0;
  int i;
  for (i = 0; i < 5; i++)
    l_21[i] = 249UL;
  for (p_9 = 4; (p_9 >= 0); p_9 -= 1) {
    int32_t **l_24 = &l_22;
    int32_t **l_27[2][5][1];
    int i, j, k;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 5; j++) {
        for (k = 0; k < 1; k++)
          l_27[i][j][k] = (void *)0;
      }
    }
    l_28 = ((*l_24) = l_22);
  }
  return p_9;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
