// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint8_t g_2[3][4][1] = {{{0x5DL}, {250UL}, {0x5DL}, {250UL}}, {{0x5DL}, {250UL}, {0x5DL}, {250UL}}, {{0x5DL}, {250UL}, {0x5DL}, {250UL}}};

static uint64_t func_1(void);

static uint64_t func_1(void) { return g_2[1][1][0]; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
