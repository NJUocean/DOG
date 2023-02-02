// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile uint32_t f0;
  const volatile int64_t f1;
  uint8_t f2;
  signed f3 : 23;
  uint32_t f4;
};

static int32_t g_4 = 1L;
static int32_t *const volatile g_3 = &g_4;
static union U0 g_5[3] = {{18446744073709551606UL}, {18446744073709551606UL}, {18446744073709551606UL}};

static union U0 func_1(void);

static union U0 func_1(void) {
  int8_t l_2 = (-10L);
  (*g_3) = l_2;
  (*g_3) = (*g_3);
  return g_5[2];
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
  for (i = 0; i < 3; i++) {
    transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
