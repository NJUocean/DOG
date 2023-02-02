// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0L;
static int64_t g_19 = 0L;
static uint8_t g_21 = 1UL;

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t l_4[2];
  int32_t *l_5 = &g_3;
  int32_t *l_6 = &l_4[1];
  int32_t *l_7 = (void *)0;
  int32_t *l_8 = &l_4[1];
  int32_t *l_9 = (void *)0;
  int32_t *l_10 = (void *)0;
  int32_t *l_11 = &l_4[1];
  int32_t *l_12 = &l_4[1];
  int32_t *l_13 = (void *)0;
  int32_t *l_14 = &g_3;
  int32_t *l_15 = &l_4[0];
  int32_t *l_16 = &l_4[1];
  int32_t *l_17 = (void *)0;
  int32_t *l_18[3][1];
  int32_t l_20 = 0x4886255DL;
  int i, j;
  for (i = 0; i < 2; i++)
    l_4[i] = 0xC0BF90A2L;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++)
      l_18[i][j] = &g_3;
  }
  g_21++;
  return g_19;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
