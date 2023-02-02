// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_2[5][4] = {{0x9C5A654FL, 0x8901F2C2L, 0x9C5A654FL, 0x9C5A654FL}, {0x8901F2C2L, 0x8901F2C2L, 0UL, 0x8901F2C2L}, {0x8901F2C2L, 0x9C5A654FL, 0x9C5A654FL, 0x8901F2C2L}, {0x9C5A654FL, 0x8901F2C2L, 0x9C5A654FL, 0x9C5A654FL}, {0x8901F2C2L, 0x8901F2C2L, 0UL, 0x8901F2C2L}};

static uint32_t func_1(void);

static uint32_t func_1(void) { return g_2[1][1]; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
