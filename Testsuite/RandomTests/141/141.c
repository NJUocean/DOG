// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  uint16_t f0;
};

static int32_t g_5[5][3][3] = {{{0x26D2E858L, 0x009CE456L, 0x26D2E858L}, {0xFFAF0720L, 0xD0D3F7BFL, (-5L)}, {0x26D2E858L, 5L, 0x3C61C71BL}}, {{0xFFAF0720L, (-7L), 0xFFAF0720L}, {0x26D2E858L, 0x182B4746L, 0xBB7AB61BL}, {0xFFAF0720L, 0x7DCD66A0L, 0x3E763161L}}, {{0x26D2E858L, 0x009CE456L, 0x26D2E858L}, {0xFFAF0720L, 0xD0D3F7BFL, (-5L)}, {0x26D2E858L, 5L, 0x3C61C71BL}}, {{0xFFAF0720L, (-7L), 0xFFAF0720L}, {0x26D2E858L, 0x182B4746L, 0xBB7AB61BL}, {0xFFAF0720L, 0x7DCD66A0L, 0x3E763161L}}, {{0x26D2E858L, 0x009CE456L, 0x26D2E858L}, {0xFFAF0720L, 0xD0D3F7BFL, (-5L)}, {0x26D2E858L, 5L, 0x3C61C71BL}}};
static int32_t *g_6 = &g_5[1][0][0];
static volatile union U2 *volatile g_7[1] = {(void *)0};

static uint16_t func_1(void);

static uint16_t func_1(void) {
  uint64_t l_2 = 18446744073709551615UL;
  int32_t *l_3 = (void *)0;
  int32_t *l_4 = &g_5[4][1][1];
  int8_t l_9 = 8L;
  if (((*l_4) &= l_2)) {
    g_6 = (l_3 = &g_5[4][1][1]);
  } else {
    volatile union U2 *volatile *l_8 = &g_7[0];
    (*l_8) = g_7[0];
  }
  return l_9;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
