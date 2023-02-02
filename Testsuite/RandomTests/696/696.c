// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int16_t g_7 = 0x7215L;
static uint32_t g_14[2] = {0x012E1DFEL, 0x012E1DFEL};
static uint8_t g_16 = 0x26L;

static const int64_t func_1(void);
static uint32_t func_9(uint16_t p_10, uint64_t p_11, int64_t p_12, int8_t p_13);

static const int64_t func_1(void) {
  int16_t *l_6 = &g_7;
  const int32_t l_8 = 4L;
  int32_t l_15 = 0x89226C31L;
  int32_t l_17[2][4][1] = {{{0x32FD2D1AL}, {0x69A22DB7L}, {0x32FD2D1AL}, {0x69A22DB7L}}, {{0x32FD2D1AL}, {0x69A22DB7L}, {0x32FD2D1AL}, {0x69A22DB7L}}};
  int32_t *l_18 = &l_15;
  const int8_t l_19 = 0xC2L;
  int i, j, k;
  (*l_18) = (safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((*l_6) |= 0x4FDDL), l_8)), (func_9(g_14[1], l_8, l_15, l_15), ((l_17[0][1][0] & l_8) | 0x26874BE76D238E48LL))));
  return l_19;
}

static uint32_t func_9(uint16_t p_10, uint64_t p_11, int64_t p_12, int8_t p_13) {
  g_16 = p_10;
  return g_14[1];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_14[i], "g_14[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_16, "g_16", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
