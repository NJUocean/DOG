// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint32_t g_16 = 0x184DCC80L;
static int16_t g_19 = 0xFCDFL;
static int32_t g_21 = (-9L);
static volatile uint16_t g_28 = 0xA4C6L;
static int32_t g_32 = (-1L);
static int32_t g_34 = (-1L);
static uint8_t g_35 = 0x9CL;

static int32_t func_1(void);
static int32_t func_2(uint32_t p_3, uint32_t p_4, int64_t p_5, int8_t p_6, uint32_t p_7);

static int32_t func_1(void) {
  uint32_t l_13 = 18446744073709551615UL;
  int32_t *l_31 = &g_32;
  int32_t *l_33[4];
  int i;
  for (i = 0; i < 4; i++)
    l_33[i] = &g_32;
  (*l_31) &= ((func_2(((safe_lshift_func_uint8_t_u_u((~0x95A97963BA20B95ALL), (((safe_rshift_func_int8_t_s_u(l_13, 4)), (safe_div_func_uint16_t_u_u(0xD38DL, g_16))), (g_16 || (((safe_mul_func_uint64_t_u_u(18446744073709551611UL, g_16)) && l_13) == (246UL == g_19)))))) != g_19), g_19, l_13, l_13, l_13) & g_21) <= g_21);
  g_35++;
  return g_21;
}

static int32_t func_2(uint32_t p_3, uint32_t p_4, int64_t p_5, int8_t p_6, uint32_t p_7) {
  int32_t *l_20 = &g_21;
  int32_t *l_22 = &g_21;
  int32_t *l_23 = &g_21;
  int32_t *l_24 = &g_21;
  int32_t *l_25 = &g_21;
  int32_t *l_26 = &g_21;
  int32_t *l_27[5][4][2] = {{{(void *)0, &g_21}, {(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}};
  int i, j, k;
  --g_28;
  return (*l_22);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
