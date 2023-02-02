// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_4[1][3][3] = {{{0xE97EEDE0B4074DD0LL, 0xE97EEDE0B4074DD0LL, 0xE97EEDE0B4074DD0LL}, {0xE97EEDE0B4074DD0LL, 0xE97EEDE0B4074DD0LL, 0xE97EEDE0B4074DD0LL}, {0xE97EEDE0B4074DD0LL, 0xE97EEDE0B4074DD0LL, 0xE97EEDE0B4074DD0LL}}};
static int32_t g_6[4][5][4] = {{{8L, (-3L), (-3L), 8L}, {0x54320E32L, 0x5534BF8FL, 4L, 6L}, {(-9L), (-10L), 1L, (-3L)}, {4L, 0L, 0xD6B65720L, (-3L)}, {0xE23A266DL, (-10L), (-2L), 6L}}, {{0xEF307D7CL, 0x5534BF8FL, 0x963AB194L, 8L}, {0x1D14CD49L, (-3L), 0x1D14CD49L, 0x54320E32L}, {0L, 4L, 0x5D7249AAL, (-9L)}, {0x5534BF8FL, 1L, (-9L), 4L}, {(-2L), 0x963AB194L, 6L, 0x10EC3203L}}, {{(-3L), 0x5D7249AAL, 0xD6B65720L, (-10L)}, {0x1D14CD49L, 0L, (-10L), (-10L)}, {(-10L), (-10L), 0L, 0x1D14CD49L}, {(-10L), 0xD6B65720L, 0x5D7249AAL, (-3L)}, {0x10EC3203L, 6L, 0x963AB194L, 0x5D7249AAL}}, {{0x54320E32L, 6L, 0L, (-3L)}, {6L, 0xD6B65720L, 0x54320E32L, 0x1D14CD49L}, {(-2L), (-10L), 0xBF2121F9L, (-10L)}, {(-9L), 0L, (-3L), (-10L)}, {4L, 0x5D7249AAL, (-9L), 0x10EC3203L}}};

static uint64_t func_1(void);

static uint64_t func_1(void) {
  uint16_t l_2 = 0xF43BL;
  int32_t *l_3 = (void *)0;
  int32_t *l_5 = &g_6[0][3][1];
  int32_t *l_7 = &g_6[0][3][1];
  int32_t *l_8 = (void *)0;
  int32_t *l_9[4][4][4] = {{{&g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1], &g_6[1][3][0]}, {&g_6[0][3][1], &g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1]}, {&g_6[1][3][0], &g_6[1][3][0], &g_6[3][4][3], &g_6[1][3][0]}, {&g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1], &g_6[1][3][0]}},
                           {{&g_6[0][3][1], &g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1]}, {&g_6[1][3][0], &g_6[1][3][0], &g_6[3][4][3], &g_6[1][3][0]}, {&g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1], &g_6[1][3][0]}, {&g_6[0][3][1], &g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1]}},
                           {{&g_6[1][3][0], &g_6[1][3][0], &g_6[3][4][3], &g_6[1][3][0]}, {&g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1], &g_6[1][3][0]}, {&g_6[0][3][1], &g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1]}, {&g_6[1][3][0], &g_6[1][3][0], &g_6[3][4][3], &g_6[1][3][0]}},
                           {{&g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1], &g_6[1][3][0]}, {&g_6[0][3][1], &g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1]}, {&g_6[1][3][0], &g_6[1][3][0], &g_6[3][4][3], &g_6[1][3][0]}, {&g_6[1][3][0], &g_6[0][3][1], &g_6[0][3][1], &g_6[1][3][0]}}};
  int32_t l_10 = 0xAFFF74B7L;
  uint32_t l_11 = 0x5DFDCAF0L;
  int i, j, k;
  g_4[0][2][0] = l_2;
  --l_11;
  return (*l_5);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
