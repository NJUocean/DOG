// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  signed f0 : 19;
  uint16_t f1;
  unsigned f2 : 4;
  const volatile signed f3 : 22;
};

static volatile int32_t *volatile g_2 = (void *)0;
static volatile int32_t g_4 = 0xEC79E672L;
static struct S0 g_5[1] = {{-95, 0xA233L, 3, 561}};

static struct S0 func_1(void);

static struct S0 func_1(void) {
  volatile int32_t *volatile l_3[3];
  int i;
  for (i = 0; i < 3; i++)
    l_3[i] = &g_4;
  l_3[0] = g_2;
  return g_5[0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);
    transparent_crc(g_5[i].f1, "g_5[i].f1", print_hash_value);
    transparent_crc(g_5[i].f2, "g_5[i].f2", print_hash_value);
    transparent_crc(g_5[i].f3, "g_5[i].f3", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
