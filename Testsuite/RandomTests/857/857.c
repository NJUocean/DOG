// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[3] = {0x25E7A66FL, 0x25E7A66FL, 0x25E7A66FL};

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3[1];
  int32_t *l_4 = &g_3[1];
  int32_t *l_5 = &g_3[1];
  int32_t *l_6[1][2];
  int32_t l_7 = 1L;
  uint32_t l_8 = 6UL;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_6[i][j] = (void *)0;
  }
  l_8--;
  return g_3[1];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
