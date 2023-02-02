// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_5 = 0x108F8256L;
static uint32_t g_10 = 1UL;
static int16_t g_16 = 0x9CEEL;
static uint8_t g_18 = 0x48L;
static uint16_t g_20 = 1UL;
static uint32_t g_23 = 3UL;
static int32_t *g_28 = &g_5;
static int32_t **volatile g_27 = &g_28;

static int32_t func_1(void);
static int32_t *const func_2(int8_t p_3, int32_t *p_4);

static int32_t func_1(void) {
  uint64_t l_6 = 0xE2FDE2BBEF7D6512LL;
  uint32_t *l_9[2][2][4] = {{{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}, {{&g_10, &g_10, &g_10, &g_10}, {&g_10, &g_10, &g_10, &g_10}}};
  int16_t *l_15 = &g_16;
  uint8_t *l_17 = &g_18;
  uint16_t *l_19[2][4];
  int32_t l_21 = 0x717B38E5L;
  uint32_t *l_22 = &g_23;
  int i, j, k;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++)
      l_19[i][j] = &g_20;
  }
  (*g_27) = func_2(g_5, ((l_6 & ((*l_22) = ((l_21 = (safe_div_func_int8_t_s_s((((((l_6 ^ g_5), (0xF9L & l_6)) || (((((--g_10), (((safe_lshift_func_uint16_t_u_s((((((*l_17) = (g_5 >= ((((*l_15) = (6L && (((65535UL > l_6) >= l_6), g_10))) > l_6), l_6))), 4294967293UL), l_9[0][0][3]) != l_9[1][1][3]), 8)), l_6), g_10)) != g_5), l_6) & g_5)) < g_5) && l_6), g_5))) || 0x1E33L))), &g_5));
  return l_21;
}

static int32_t *const func_2(int8_t p_3, int32_t *p_4) {
  uint16_t l_24 = 1UL;
  l_24--;
  return p_4;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
