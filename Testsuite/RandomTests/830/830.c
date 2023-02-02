// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4[1][2][1] = {{{0xE2167FA5L}, {0xE2167FA5L}}};
static int32_t *volatile g_3 = &g_4[0][1][0];

static int32_t func_1(void);

static int32_t func_1(void) {
  uint64_t l_2[3];
  int i;
  for (i = 0; i < 3; i++)
    l_2[i] = 0xFD41E5596960F57ALL;
  (*g_3) ^= l_2[2];
  return (*g_3);
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
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
