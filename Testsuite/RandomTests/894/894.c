// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int16_t g_2 = 1L;
static int32_t g_4 = 0x0AA6E6F7L;
static uint64_t g_5[2] = {8UL, 8UL};

static const int32_t func_1(void);

static const int32_t func_1(void) {
  int32_t *l_3[5][4][4] = {{{(void *)0, &g_4, &g_4, (void *)0}, {&g_4, (void *)0, &g_4, &g_4}, {&g_4, &g_4, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4}}, {{&g_4, (void *)0, &g_4, &g_4}, {(void *)0, (void *)0, &g_4, &g_4}, {(void *)0, &g_4, &g_4, (void *)0}, {&g_4, &g_4, &g_4, &g_4}}, {{(void *)0, (void *)0, &g_4, (void *)0}, {(void *)0, &g_4, &g_4, (void *)0}, {&g_4, (void *)0, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}}};
  int i, j, k;
  g_5[1]++;
  return g_5[1];
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
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
