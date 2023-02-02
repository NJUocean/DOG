// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int64_t g_2 = 5L;
static int32_t g_4 = 1L;
static volatile uint16_t g_8[5] = {0x1D8FL, 0x1D8FL, 0x1D8FL, 0x1D8FL, 0x1D8FL};

static uint64_t func_1(void);

static uint64_t func_1(void) {
  int32_t *l_3 = &g_4;
  int32_t *l_5 = &g_4;
  int32_t *l_6 = &g_4;
  int32_t *l_7[5] = {&g_4, &g_4, &g_4, &g_4, &g_4};
  int i;
  g_8[4]--;
  return g_8[4];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_8[i], "g_8[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
