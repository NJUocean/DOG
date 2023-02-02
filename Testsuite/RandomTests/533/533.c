// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0x9AC70C30L;
static volatile uint8_t g_16 = 0xD9L;
static int8_t g_19 = (-4L);
static int8_t g_20 = 0xF9L;
static int8_t g_21 = 1L;
static volatile uint32_t g_22 = 4294967287UL;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5 = (void *)0;
  int32_t *l_6 = (void *)0;
  int32_t *l_7 = &g_3;
  int32_t *l_8 = &g_3;
  int32_t *l_9 = &g_3;
  int32_t l_10[5];
  int32_t *l_11 = &l_10[1];
  int32_t *l_12 = &l_10[1];
  int32_t *l_13 = &l_10[1];
  int32_t *l_14 = &g_3;
  int32_t *l_15[1][5];
  int i, j;
  for (i = 0; i < 5; i++)
    l_10[i] = (-1L);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++)
      l_15[i][j] = &g_3;
  }
  ++g_16;
  --g_22;
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
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
