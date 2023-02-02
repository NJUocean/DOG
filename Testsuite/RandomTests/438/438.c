// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_8 = 1UL;
static volatile uint32_t g_11 = 0UL;

static int64_t func_1(void);

static int64_t func_1(void) {
  int32_t l_2 = 0xA9AC70C3L;
  int32_t *l_3 = &l_2;
  int32_t *l_4 = &l_2;
  int32_t *l_5 = &l_2;
  int32_t *l_6 = &l_2;
  int32_t *l_7[3][5][3] = {{{&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}}, {{&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}}, {{&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}, {&l_2, &l_2, &l_2}}};
  int i, j, k;
  g_8++;
  g_11++;
  return g_11;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
