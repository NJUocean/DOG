// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U5 {
  volatile int32_t f0;
  int32_t f1;
  const uint64_t f2;
  volatile int32_t f3;
  volatile uint32_t f4;
};

static volatile int32_t g_2 = 7L;
static int32_t g_4 = 0x32456160L;
static union U5 g_9[2] = {{0x0F5EBEC5L}, {0x0F5EBEC5L}};

static union U5 func_1(void);

static union U5 func_1(void) {
  int32_t *l_3 = &g_4;
  int32_t *l_5[3][5][5] = {{{&g_4, &g_4, &g_4, &g_4, &g_4}, {(void *)0, &g_4, (void *)0, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {(void *)0, &g_4, (void *)0, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4, &g_4}}, {{(void *)0, &g_4, (void *)0, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {(void *)0, &g_4, (void *)0, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {(void *)0, &g_4, (void *)0, &g_4, (void *)0}}, {{&g_4, &g_4, &g_4, &g_4, &g_4}, {(void *)0, &g_4, (void *)0, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4, &g_4}, {(void *)0, &g_4, (void *)0, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4, &g_4}}};
  uint8_t l_6 = 0x2AL;
  int i, j, k;
  l_6++;
  return g_9[0];
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
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_9[i].f0, "g_9[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
