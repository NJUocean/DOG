// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint8_t g_4 = 0xD9L;
static uint32_t g_16[5][1] = {{0xE24307A3L}, {6UL}, {0xE24307A3L}, {6UL}, {0xE24307A3L}};
static uint32_t *g_19 = &g_16[2][0];
static int32_t g_23 = 0L;
static int32_t *g_22 = &g_23;
static int32_t **volatile g_21 = &g_22;
static int64_t g_25 = 0x5F992DB756FD8C65LL;
static uint8_t g_29 = 0x45L;

static uint64_t func_1(void);
static int32_t func_8(const int32_t p_9, uint32_t p_10, int64_t p_11, int32_t p_12);

static uint64_t func_1(void) {
  uint32_t l_7 = 1UL;
  uint32_t l_13 = 18446744073709551609UL;
  uint32_t *l_14 = (void *)0;
  uint32_t *l_15[5] = {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0};
  int32_t l_17 = 1L;
  uint32_t **l_18[1];
  uint32_t l_20 = 4294967290UL;
  int64_t *l_24 = &g_25;
  int32_t *l_32[4] = {&g_23, &g_23, &g_23, &g_23};
  uint8_t l_33 = 251UL;
  int i;
  for (i = 0; i < 1; i++)
    l_18[i] = &l_14;
  if ((((*l_24) &= (0x60D00585L ^ (safe_lshift_func_int8_t_s_u((((--g_4) > l_7) && func_8(g_4, l_13, l_13, ((((g_4 <= (l_17 |= g_4)) || ((((l_15[0] = l_15[0]) == (g_19 = &g_16[1][0])) <= g_4) <= g_4)) >= 0x5FB2L), l_20))), g_23)))) >= g_23)) {
    uint32_t l_26 = 0UL;
    int32_t *l_27 = &l_17;
    uint32_t l_28 = 4294967292UL;
    l_28 &= ((*l_27) &= l_26);
  } else {
    return g_29;
  }
  g_23 = (safe_lshift_func_uint32_t_u_s(((void *)0 != l_32[0]), l_33));
  return g_16[2][0];
}

static int32_t func_8(const int32_t p_9, uint32_t p_10, int64_t p_11, int32_t p_12) {
  (*g_21) = &p_12;
  return p_11;
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
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_16[i][j], "g_16[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
