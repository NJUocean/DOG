// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_3 = 1L;
static int32_t g_4 = (-6L);
static int32_t g_6 = 1L;
static volatile int32_t g_20 = (-9L);

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int8_t l_2[1];
  int32_t l_18 = 0x18D303F0L;
  int32_t l_19 = 1L;
  uint8_t l_21 = 0x0FL;
  int i;
  for (i = 0; i < 1; i++)
    l_2[i] = (-5L);
  for (g_4 = 0; (g_4 >= 0); g_4 -= 1) {
    int32_t *l_5 = &g_6;
    int32_t *l_7 = &g_6;
    int32_t *l_8 = &g_6;
    int32_t l_9 = (-5L);
    int32_t *l_10 = &l_9;
    int32_t l_11 = 0x77B568BEL;
    int32_t *l_12 = &g_6;
    int32_t *l_13 = &l_9;
    int32_t *l_14 = &g_6;
    int32_t *l_15 = &l_11;
    int32_t *l_16 = (void *)0;
    int32_t *l_17[4];
    int i;
    for (i = 0; i < 4; i++)
      l_17[i] = &g_6;
    ++l_21;
  }
  return l_2[0];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
