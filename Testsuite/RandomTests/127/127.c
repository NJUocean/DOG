// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0xAD3B3152L;
static uint16_t g_6 = 0x770AL;
static uint64_t g_15 = 0xB8B78ACC4B7C7008LL;
static uint32_t g_17 = 7UL;
static uint32_t g_21 = 4294967295UL;
static uint32_t *g_20[2][3] = {{&g_21, &g_21, &g_21}, {&g_21, &g_21, &g_21}};
static uint32_t g_22 = 0x95A2E712L;
static int32_t *volatile g_25 = &g_4;

static const int16_t func_1(void);

static const int16_t func_1(void) {
  uint16_t *l_5[3][4] = {{&g_6, &g_6, &g_6, &g_6}, {&g_6, &g_6, (void *)0, &g_6}, {&g_6, &g_6, &g_6, &g_6}};
  uint32_t l_7 = 1UL;
  int32_t l_12[2];
  uint64_t *l_13 = (void *)0;
  uint64_t *l_14 = &g_15;
  uint32_t *l_16 = &g_17;
  uint16_t l_23 = 0x743CL;
  int32_t l_24 = 0x7D17017AL;
  const int8_t l_26 = 4L;
  int i, j;
  for (i = 0; i < 2; i++)
    l_12[i] = 0xD19C9214L;
  l_24 ^= (l_12[0] = ((((safe_mul_func_int16_t_s_s(((l_7 = g_4) | (((safe_rshift_func_uint32_t_u_s((safe_sub_func_int64_t_s_s(l_12[0], ((*l_14) = (((void *)0 != &g_6) >= g_6)))), 1)) == (--(*l_16))) <= (g_20[1][2] != (void *)0))), (65535UL ^ (g_22 = (l_12[0], g_6))))), l_23), 7UL) && l_23));
  (*g_25) ^= l_7;
  return l_26;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
