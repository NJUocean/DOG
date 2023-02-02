// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 25;
  const signed f1 : 10;
  signed f2 : 4;
  signed : 0;
  signed f3 : 15;
};

union U5 {
  volatile int32_t f0;
  uint64_t f1;
  volatile int16_t f2;
  int64_t f3;
  const int32_t f4;
};

static uint64_t g_5[1][3] = {{0xE703026D8D383303LL, 0xE703026D8D383303LL, 0xE703026D8D383303LL}};
static volatile union U5 g_6 = {0x4E665969L};
static volatile int32_t *volatile g_13 = &g_6.f0;
static int32_t g_19 = 0xB4B26D8FL;
static int32_t *const volatile g_18 = &g_19;

static uint16_t func_1(void);
static int64_t func_2(uint64_t p_3, uint64_t p_4);

static uint16_t func_1(void) {
  const uint8_t l_10[5] = {0x38L, 0x38L, 0x38L, 0x38L, 0x38L};
  struct S0 l_17 = {3379, -3, -2, -156};
  int i;
  (*g_18) = (func_2(g_5[0][1], (((g_6, (-5L)), (+(l_10[2] >= (!l_10[2])))) < l_10[2])) | (l_17, l_10[3]));
  return g_6.f0;
}

static int64_t func_2(uint64_t p_3, uint64_t p_4) {
  uint32_t l_16 = 0xF6A08376L;
  for (p_3 = 0; (p_3 <= 0); p_3 += 1) {
    uint16_t l_12 = 65535UL;
    if (l_12)
      break;
    for (p_4 = 0; (p_4 <= 0); p_4 += 1) {
      for (l_12 = 0; (l_12 <= 0); l_12 += 1) {
        volatile int32_t *volatile *l_14 = (void *)0;
        volatile int32_t *volatile *l_15 = &g_13;
        (*l_15) = g_13;
      }
    }
  }
  return l_16;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
