// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4[4][3][2] = {{{1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}}};

static uint64_t func_1(void);

static uint64_t func_1(void) {
  int32_t *l_2 = (void *)0;
  int32_t *l_3 = &g_4[0][2][0];
  (*l_3) = 1L;
  return (*l_3);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
