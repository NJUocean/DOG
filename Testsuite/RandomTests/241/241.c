// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int8_t func_1(void);

static int8_t func_1(void) {
  int8_t l_2[5][5] = {{0xBCL, 6L, 0xBCL, 0xBCL, 6L}, {0xF8L, 0L, 0x3FL, 2L, 0x3FL}, {6L, 6L, 0xE1L, 6L, 6L}, {0x3FL, 2L, 0x3FL, 0L, 0xF8L}, {6L, 0xBCL, 0xBCL, 6L, 0xBCL}};
  int i, j;
  return l_2[0][1];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
