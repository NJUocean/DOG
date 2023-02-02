// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_2 = 1L;
static int32_t g_7 = 0x2B165808L;
static uint32_t g_12[3][1][1] = {{{0x22D5FBA2L}}, {{0x22D5FBA2L}}, {{0x22D5FBA2L}}};
static int32_t *g_17 = &g_7;

static int32_t func_1(void);
static int32_t *func_3(int32_t p_4);

static int32_t func_1(void) {
  int32_t *l_16 = (void *)0;
  int32_t **l_15[2];
  int32_t *l_18 = (void *)0;
  int8_t l_19 = 0xB9L;
  int i;
  for (i = 0; i < 2; i++)
    l_15[i] = &l_16;
  l_18 = (g_2, (g_17 = func_3(g_2)));
  return l_19;
}

static int32_t *func_3(int32_t p_4) {
  int32_t *l_5 = (void *)0;
  int32_t *l_6 = &g_7;
  int32_t *l_8 = &g_7;
  int32_t *l_9 = &g_7;
  int32_t *l_10 = &g_7;
  int32_t *l_11[4][3][3] = {{{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}};
  int i, j, k;
  g_12[0][0][0]++;
  return &g_7;
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
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_12[i][j][k], "g_12[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}