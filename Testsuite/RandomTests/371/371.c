// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const uint8_t f0;
  const uint16_t f1;
  int8_t f2;
};

static int32_t g_2 = 0x9DA4D073L;
static volatile int32_t g_6[5] = {(-1L), (-1L), (-1L), (-1L), (-1L)};
static volatile int32_t g_7[1] = {0x1F6F0842L};
static volatile int32_t g_8 = (-1L);
static volatile int32_t g_9[2][5] = {{1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L}};
static volatile int32_t g_10[1] = {(-1L)};
static volatile int32_t g_11[5] = {0x1D594D03L, 0x1D594D03L, 0x1D594D03L, 0x1D594D03L, 0x1D594D03L};
static int32_t g_12 = (-1L);
static const int32_t g_15 = (-2L);
static const int32_t g_17[3][3][2] = {{{1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}}};
static const int32_t *g_16 = &g_17[0][2][1];
static int32_t g_18 = 0xC86992F1L;

static int64_t func_1(void);

static int64_t func_1(void) {
  for (g_2 = (-11); (g_2 < (-26)); g_2--) {
    int32_t l_5[4][2][2] = {{{0xA66E58D0L, 0xA66E58D0L}, {0xE704F3D4L, 0xA66E58D0L}}, {{0xA66E58D0L, 0xE704F3D4L}, {0xE704F3D4L, 0xE704F3D4L}}, {{(-8L), 0xE704F3D4L}, {0xE704F3D4L, (-8L)}}, {{0xE704F3D4L, 0xE704F3D4L}, {(-8L), 0xE704F3D4L}}};
    int i, j, k;
    for (g_12 = 1; (g_12 >= 0); g_12 -= 1) {
      const int32_t *l_14[5];
      const int32_t **l_13 = &l_14[0];
      int i;
      for (i = 0; i < 5; i++)
        l_14[i] = &g_15;
      g_16 = ((*l_13) = (void *)0);
      for (g_18 = 1; (g_18 >= 0); g_18 -= 1) {
        int i, j, k;
        if (l_5[(g_18 + 2)][g_12][g_12])
          break;
      }
      for (g_18 = 1; (g_18 >= 0); g_18 -= 1) {
        int i, j, k;
        l_5[g_12][g_18][g_18] = l_5[(g_12 + 1)][g_12][g_18];
      }
    }
  }
  return g_10[0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 1; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 5; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_17[i][j][k], "g_17[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_18, "g_18", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
