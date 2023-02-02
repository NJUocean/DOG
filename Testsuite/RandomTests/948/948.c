// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_3 = 5L;
static volatile int32_t g_5 = (-10L);
static int64_t g_7 = 7L;
static volatile int64_t g_8 = (-4L);
static int16_t g_9 = 0xC41AL;
static int32_t g_10[5] = {0xEFCDF11BL, 0xEFCDF11BL, 0xEFCDF11BL, 0xEFCDF11BL, 0xEFCDF11BL};
static uint16_t g_11 = 0xC1DFL;
static int32_t *g_14 = (void *)0;

static const int8_t func_1(void);

static const int8_t func_1(void) {
  int32_t *l_2[2];
  int32_t l_4 = 3L;
  int16_t l_6 = 0x5A97L;
  int i;
  for (i = 0; i < 2; i++)
    l_2[i] = (void *)0;
  ++g_11;
  g_14 = l_2[0];
  return g_9;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_11, "g_11", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
