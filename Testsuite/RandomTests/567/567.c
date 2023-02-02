// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[1][1][1] = {{{0x210B999FL}}};

static int16_t func_1(void);

static int16_t func_1(void) {
  int32_t *l_2 = &g_3[0][0][0];
  int32_t *l_4 = &g_3[0][0][0];
  int32_t *l_5 = &g_3[0][0][0];
  int32_t *l_6 = &g_3[0][0][0];
  int32_t *l_7 = &g_3[0][0][0];
  int32_t *l_8[1][5];
  uint32_t l_9 = 18446744073709551615UL;
  uint32_t l_12 = 4UL;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++)
      l_8[i][j] = &g_3[0][0][0];
  }
  l_9++;
  l_12--;
  return g_3[0][0][0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
