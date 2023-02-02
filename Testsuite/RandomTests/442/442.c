// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile uint64_t f0;
  const volatile int8_t f1;
  volatile int16_t f2;
};

static volatile int32_t g_2 = (-10L);
static volatile int32_t g_4[4] = {0x69AED23BL, 0x69AED23BL, 0x69AED23BL, 0x69AED23BL};
static volatile int32_t *volatile g_3 = &g_4[2];
static const union U0 g_5 = {3UL};

static const union U0 func_1(void);

static const union U0 func_1(void) {
  (*g_3) = g_2;
  return g_5;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
