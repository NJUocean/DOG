// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_5[4][4][2] = {{{0x3FF82FF4L, 0x05BA7723L}, {0x05BA7723L, 0x3FF82FF4L}, {0x05BA7723L, 0x05BA7723L}, {0x3FF82FF4L, 0x05BA7723L}}, {{0x05BA7723L, 0x3FF82FF4L}, {0x05BA7723L, 0x05BA7723L}, {0x3FF82FF4L, 0x05BA7723L}, {0x05BA7723L, 0x3FF82FF4L}}, {{0x05BA7723L, 0x05BA7723L}, {0x3FF82FF4L, 0x05BA7723L}, {0x05BA7723L, 0x3FF82FF4L}, {0x05BA7723L, 0x05BA7723L}}, {{0x3FF82FF4L, 0x05BA7723L}, {0x05BA7723L, 0x3FF82FF4L}, {0x05BA7723L, 0x05BA7723L}, {0x3FF82FF4L, 0x05BA7723L}}};
static int32_t *const g_4 = &g_5[1][0][1];
static int8_t g_13 = 1L;
static int32_t g_14 = 0x686D0EF2L;
static int32_t *g_20 = &g_5[1][0][1];
static int32_t **volatile g_19 = &g_20;
static int32_t **volatile g_22 = &g_20;

static uint32_t func_1(void);
static uint64_t func_2(int32_t *const p_3);

static uint32_t func_1(void) {
  int32_t *l_21 = &g_5[3][3][1];
  (*g_19) = ((func_2(g_4) <= 2UL), &g_5[3][1][0]);
  (*g_22) = l_21;
  return g_5[1][0][1];
}

static uint64_t func_2(int32_t *const p_3) {
  int32_t *l_6[4];
  int32_t l_7 = (-2L);
  int32_t l_8 = (-6L);
  int16_t l_9[5][5][4] = {{{0L, 1L, 1L, 0L}, {0xF54DL, 1L, 7L, 1L}, {1L, (-1L), 7L, 7L}, {0xF54DL, 0xF54DL, 0L, (-1L)}, {7L, 0xF54DL, 7L, 0L}}, {{7L, 0L, 0L, 7L}, {1L, 0L, (-1L), 0L}, {0L, 0xF54DL, (-1L), (-1L)}, {1L, 1L, 0L, (-1L)}, {7L, 0xF54DL, 7L, 0L}}, {{7L, 0L, 0L, 7L}, {1L, 0L, (-1L), 0L}, {0L, 0xF54DL, (-1L), (-1L)}, {1L, 1L, 0L, (-1L)}, {7L, 0xF54DL, 7L, 0L}}, {{7L, 0L, 0L, 7L}, {1L, 0L, (-1L), 0L}, {0L, 0xF54DL, (-1L), (-1L)}, {1L, 1L, 0L, (-1L)}, {7L, 0xF54DL, 7L, 0L}}, {{7L, 0L, 0L, 7L}, {1L, 0L, (-1L), 0L}, {0L, 0xF54DL, (-1L), (-1L)}, {1L, 1L, 0L, (-1L)}, {7L, 0xF54DL, 7L, 0L}}};
  int32_t l_10 = 0x4236FC2CL;
  int16_t l_11[1][1][1];
  int8_t l_12 = 0x8FL;
  int8_t l_15 = 0xD3L;
  uint32_t l_16 = 0xAEF8DA9AL;
  int i, j, k;
  for (i = 0; i < 4; i++)
    l_6[i] = &g_5[3][3][1];
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 1; k++)
        l_11[i][j][k] = (-2L);
    }
  }
  l_16--;
  return g_5[1][0][1];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
