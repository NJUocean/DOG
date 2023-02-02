// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  const volatile unsigned f0 : 3;
  volatile unsigned f1 : 3;
  signed f2 : 6;
};

static struct S1 g_3 = {0, 0, 4};

static const int32_t func_1(void);

static const int32_t func_1(void) {
  struct S1 *l_2[4] = {&g_3, &g_3, &g_3, &g_3};
  int i;
  l_2[0] = (void *)0;
  return g_3.f0;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
  transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
  transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
