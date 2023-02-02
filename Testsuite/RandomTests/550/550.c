// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 31;
  const volatile uint8_t f1;
  const int64_t f2;
  int32_t f3;
  volatile uint16_t f4;
};

static volatile int32_t g_2 = (-1L);
static int32_t g_3 = 0xB8C3AD3BL;
static struct S0 *g_6 = (void *)0;

static int32_t func_1(void);

static int32_t func_1(void) {
  for (g_3 = 27; (g_3 > (-17)); --g_3) {
    uint8_t l_7[1];
    int i;
    for (i = 0; i < 1; i++)
      l_7[i] = 0x2EL;
    g_6 = (void *)0;
    for (g_2 = 0; g_2 < 1; g_2 += 1) {
      l_7[g_2] = 6UL;
    }
  }
  return g_2;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
