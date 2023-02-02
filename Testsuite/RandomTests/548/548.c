// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 1L;
static uint8_t g_12 = 253UL;

static int16_t func_1(void);

static int16_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5[5] = {&g_3, &g_3, &g_3, &g_3, &g_3};
  uint64_t l_6 = 0x822B16580849F845LL;
  int i;
  l_6++;
  for (l_6 = 0; (l_6 >= 13); ++l_6) {
    uint8_t l_11 = 0xADL;
    g_12 ^= (g_3 < l_11);
    if (g_12)
      continue;
  }
  return (*l_2);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
