// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0xA772304BL;

static int16_t func_1(void);

static int16_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5 = &g_3;
  int32_t *l_6 = &g_3;
  int32_t *l_7 = &g_3;
  int32_t *l_8 = &g_3;
  int32_t *l_9[1];
  uint32_t l_10 = 18446744073709551610UL;
  int i;
  for (i = 0; i < 1; i++)
    l_9[i] = &g_3;
  l_10--;
  return g_3;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
