// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t func_1(void);

static int32_t func_1(void) {
  uint8_t l_2 = 1UL;
  int32_t l_3[5] = {0xD7C1188EL, 0xD7C1188EL, 0xD7C1188EL, 0xD7C1188EL, 0xD7C1188EL};
  int i;
  l_3[3] = l_2;
  return l_3[3];
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
