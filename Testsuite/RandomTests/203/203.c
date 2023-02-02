// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint64_t g_9 = 18446744073709551615UL;
static uint64_t *const g_15 = (void *)0;
static uint8_t g_16 = 255UL;
static volatile int32_t g_18 = 0xD1C58BDFL;
static volatile int32_t *const volatile g_17 = &g_18;
static volatile int32_t *g_20[5] = {&g_18, &g_18, &g_18, &g_18, &g_18};
static volatile int32_t *volatile *volatile g_19[1] = {&g_20[4]};
static volatile int32_t *volatile *volatile g_21 = (void *)0;
static int8_t g_23 = 0xA5L;
static uint64_t g_27[2][2] = {{0x40E11A796D402DA3LL, 0x40E11A796D402DA3LL}, {0x40E11A796D402DA3LL, 0x40E11A796D402DA3LL}};
static uint8_t g_29[3][4] = {{246UL, 246UL, 0x99L, 246UL}, {246UL, 249UL, 249UL, 246UL}, {249UL, 246UL, 249UL, 249UL}};
static int32_t g_31 = 1L;

static int64_t func_1(void);
static int64_t func_12(const int16_t p_13, int32_t p_14);

static int64_t func_1(void) {
  uint32_t l_2 = 0xE76F5020L;
  int32_t l_3 = 0x46158D32L;
  int32_t l_24[3][1];
  uint64_t *l_26[2][5][2] = {{{&g_27[1][0], &g_27[1][0]}, {&g_27[1][0], &g_27[1][0]}, {&g_27[1][0], &g_27[1][0]}, {&g_27[1][0], (void *)0}, {&g_27[1][0], (void *)0}}, {{&g_27[1][0], &g_27[1][0]}, {&g_27[1][0], &g_27[1][0]}, {&g_27[1][0], &g_27[1][0]}, {&g_27[1][0], (void *)0}, {&g_27[1][0], (void *)0}}};
  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++)
      l_24[i][j] = (-10L);
  }
  l_3 = l_2;
  for (l_3 = 0; (l_3 > 25); l_3 = safe_add_func_uint16_t_u_u(l_3, 1)) {
    uint64_t *l_8 = &g_9;
    int32_t *const l_28 = &l_3;
    int32_t *l_30[1][5][4] = {{{&g_31, &g_31, &g_31, &g_31}, {&g_31, &g_31, &g_31, &g_31}, {&g_31, &g_31, &g_31, &g_31}, {&g_31, &g_31, &g_31, &g_31}, {&g_31, &g_31, &g_31, &g_31}}};
    int i, j, k;
    g_31 |= (g_29[1][3] = ((safe_div_func_uint64_t_u_u((++(*l_8)), (l_24[1][0] ^= (func_12((g_15 == g_15), g_16) >= g_16)))) == ((+(l_8 != l_26[1][0][0])) <= ((g_20[4] != l_28) || g_23))));
  }
  return l_24[1][0];
}

static int64_t func_12(const int16_t p_13, int32_t p_14) {
  volatile int32_t *volatile l_22 = &g_18;
  l_22 = g_17;
  return g_23;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_27[i][j], "g_27[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_29[i][j], "g_29[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_31, "g_31", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
