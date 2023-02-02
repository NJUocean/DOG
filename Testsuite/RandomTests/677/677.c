// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int8_t g_3 = 0L;
static int8_t g_5 = 5L;
static volatile int8_t g_8 = (-9L);
static int8_t g_16[4][1] = {{(-7L)}, {0x14L}, {(-7L)}, {0x14L}};
static int8_t *g_15 = &g_16[3][0];
static int32_t g_19[2][1][3] = {{{(-8L), (-8L), (-8L)}}, {{4L, 4L, 4L}}};

static int64_t func_1(void);
static const uint64_t func_9(int8_t *p_10, int8_t *p_11, int16_t p_12, const int8_t *p_13, int64_t p_14);

static int64_t func_1(void) {
  int8_t *l_2 = (void *)0;
  int8_t *l_4 = &g_5;
  int32_t l_17 = 3L;
  int32_t *l_24 = (void *)0;
  g_19[0][0][1] = (((*l_4) = (g_3 = (0x15912491L >= 0x9EA41449L))) < (safe_rshift_func_int32_t_s_u(g_8, (func_9(g_15, &g_16[3][0], l_17, l_2, l_17) == l_17))));
  return g_3;
}

static const uint64_t func_9(int8_t *p_10, int8_t *p_11, int16_t p_12, const int8_t *p_13, int64_t p_14) {
  uint64_t l_21 = 0xFC2F92E6C0B333EELL;
  for (p_14 = 0; (p_14 <= 0); p_14 += 1) {
    int32_t *l_18 = &g_19[0][0][1];
    int32_t *l_20[2][2];
    int i, j;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++)
        l_20[i][j] = &g_19[1][0][1];
    }
    l_21--;
    for (p_12 = 0; (p_12 <= 0); p_12 += 1) {
      int i, j;
      return g_16[(p_14 + 3)][p_14];
    }
  }
  return g_16[1][0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_16[i][j], "g_16[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_19[i][j][k], "g_19[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
