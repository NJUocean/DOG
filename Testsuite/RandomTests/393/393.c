// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  volatile unsigned f0 : 15;
  signed f1 : 17;
  const signed f2 : 2;
  const signed f3 : 30;
};

static struct S1 g_3 = {95, 290, 0, -26937};
static struct S1 *volatile g_2[5] = {&g_3, &g_3, &g_3, &g_3, &g_3};

static int32_t func_1(void);

static int32_t func_1(void) {
  struct S1 *volatile *l_4[2][5] = {{&g_2[1], &g_2[2], &g_2[1], &g_2[1], &g_2[2]}, {&g_2[1], &g_2[2], &g_2[1], &g_2[1], &g_2[2]}};
  int i, j;
  g_2[1] = g_2[1];
  return g_3.f0;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
  transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
  transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
  transparent_crc(g_3.f3, "g_3.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
