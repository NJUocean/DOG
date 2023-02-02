// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint16_t g_9 = 0xDEADL;
static int32_t g_14 = 0x5256EE97L;
static uint16_t g_16 = 0UL;
static int16_t g_24 = 1L;
static int32_t g_27 = 0x61A7160CL;
static volatile uint8_t g_28[2][4][5] = {{{253UL, 0xD1L, 253UL, 0x88L, 0xD1L}, {6UL, 0x9BL, 0x88L, 6UL, 0x88L}, {6UL, 6UL, 8UL, 0xD1L, 0xFDL}, {253UL, 0xFDL, 0x88L, 0x88L, 0xFDL}}, {{0xFDL, 0x9BL, 253UL, 0xFDL, 0x88L}, {0xD1L, 0xFDL, 8UL, 0xFDL, 0xD1L}, {253UL, 6UL, 0x9BL, 0x88L, 6UL}, {0xD1L, 0x9BL, 0x9BL, 0xD1L, 0x88L}}};

static int8_t func_1(void);
static const int32_t func_5(uint16_t p_6, uint32_t p_7, uint8_t p_8);

static int8_t func_1(void) {
  uint8_t l_2 = 0x99L;
  uint16_t *l_15 = &g_16;
  uint64_t l_17 = 0xFB8EB5EA28C7FFFALL;
  int64_t l_31 = (-1L);
  uint32_t l_32 = 1UL;
  l_31 = (0x8C45CDBE8E56F9B2LL > (l_2 > (safe_mul_func_int16_t_s_s((func_5(((g_9 || (((safe_div_func_int16_t_s_s(g_9, (l_2 ^ ((((*l_15) = (safe_sub_func_int64_t_s_s(l_2, ((0UL >= g_14) > (((((0xA7L < g_14) | 0xE10E5E53L), l_2) <= 0x91023F126C7F05F4LL) ^ 2L))))) <= l_2) && l_17)))) & 8UL) < g_14)), 4UL), l_17, l_17) & l_17), 0x7DCAL))));
  return l_32;
}

static const int32_t func_5(uint16_t p_6, uint32_t p_7, uint8_t p_8) {
  uint32_t l_18[4];
  int32_t l_23 = 0x44DCD6A9L;
  int32_t l_25 = 0x55D48264L;
  int32_t l_26 = (-1L);
  int i;
  for (i = 0; i < 4; i++)
    l_18[i] = 1UL;
  for (p_6 = 0; (p_6 <= 3); p_6 += 1) {
    int32_t *l_19 = &g_14;
    int32_t *l_20 = &g_14;
    int32_t *l_21 = &g_14;
    int32_t *l_22[2][2][3] = {{{&g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14}}, {{&g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14}}};
    int i, j, k;
    --g_28[1][3][4];
  }
  return p_8;
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
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_28[i][j][k], "g_28[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
