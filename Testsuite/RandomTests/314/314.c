// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  int64_t f0;
  signed f1 : 20;
};

static union U0 func_1(void);

static union U0 func_1(void) {
  union U0 l_2[5][1][1] = {{{{0xD8A87013DCE9D05BLL}}}, {{{1L}}}, {{{0xD8A87013DCE9D05BLL}}}, {{{1L}}}, {{{0xD8A87013DCE9D05BLL}}}};
  int i, j, k;
  return l_2[2][0][0];
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
