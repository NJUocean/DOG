// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_5 = (-10L);

static int32_t func_1(void);

static int32_t func_1(void) {
  uint32_t l_2 = 0x683C8FC5L;
  int32_t *l_3 = (void *)0;
  int32_t *l_4[5][4][5] = {{{&g_5, &g_5, (void *)0, &g_5, (void *)0}, {&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, (void *)0, &g_5, &g_5}}, {{&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, &g_5}}, {{&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, (void *)0}, {&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, &g_5}}, {{&g_5, &g_5, (void *)0, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, (void *)0}, {&g_5, (void *)0, &g_5, &g_5, &g_5}}, {{&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, (void *)0, (void *)0, &g_5, &g_5}, {&g_5, &g_5, &g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5, (void *)0, &g_5}}};
  int8_t l_6[3][1];
  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++)
      l_6[i][j] = (-6L);
  }
  g_5 = l_2;
  return l_6[0][0];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
