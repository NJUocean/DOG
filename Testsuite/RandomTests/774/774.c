// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_4 = 0x38ECF54C3C69AED2LL;
static int8_t g_7[4][4][2] = {{{0x26L, 0x45L}, {0x45L, 0x26L}, {0x45L, 0x45L}, {0x26L, 0x45L}}, {{0x45L, 0x26L}, {0x45L, 0x45L}, {0x26L, 0x45L}, {0x45L, 0x26L}}, {{0x45L, 0x45L}, {0x26L, 0x45L}, {0x45L, 0x26L}, {0x45L, 0x45L}}, {{0x26L, 0x45L}, {0x45L, 0x26L}, {0x45L, 0x45L}, {0x26L, 0x45L}}};
static int8_t *g_10[5] = {&g_7[2][1][0], &g_7[2][1][0], &g_7[2][1][0], &g_7[2][1][0], &g_7[2][1][0]};
static int8_t **volatile g_9 = &g_10[1];
static int32_t g_13 = (-9L);
static int32_t **volatile g_15 = (void *)0;

static uint64_t func_1(void);
static int32_t *const func_2(int8_t p_3);

static uint64_t func_1(void) {
  int8_t *l_5 = (void *)0;
  int8_t *l_6[2];
  int32_t l_8[5][2] = {{1L, (-1L)}, {0L, 0L}, {0L, (-1L)}, {1L, (-1L)}, {(-1L), 0L}};
  int32_t **l_14 = (void *)0;
  int32_t *l_17 = (void *)0;
  int32_t **l_16 = &l_17;
  uint32_t l_18 = 1UL;
  int i, j;
  for (i = 0; i < 2; i++)
    l_6[i] = &g_7[3][3][0];
  (*l_16) = func_2((l_8[4][0] |= g_4));
  return l_18;
}

static int32_t *const func_2(int8_t p_3) {
  int8_t **volatile *l_11[5];
  int32_t *const l_12 = &g_13;
  int i;
  for (i = 0; i < 5; i++)
    l_11[i] = (void *)0;
  g_9 = g_9;
  return l_12;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_13, "g_13", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
