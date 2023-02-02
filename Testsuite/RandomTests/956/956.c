// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  volatile uint64_t f0;
  unsigned f1 : 16;
};

static struct S1 g_2 = {18446744073709551610UL, 5};
static struct S1 *volatile g_3 = &g_2;

static int16_t func_1(void);

static int16_t func_1(void) {
  (*g_3) = g_2;
  return g_2.f0;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
  transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
