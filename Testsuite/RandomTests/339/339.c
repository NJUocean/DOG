// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[4] = {0x4E1A3622L, 0x4E1A3622L, 0x4E1A3622L, 0x4E1A3622L};

static uint8_t func_1(void);

static uint8_t func_1(void) {
  int32_t *l_2[3][3][4] = {{{&g_3[0], &g_3[0], &g_3[0], (void *)0}, {&g_3[0], &g_3[0], &g_3[0], &g_3[3]}, {&g_3[0], (void *)0, &g_3[3], &g_3[3]}}, {{&g_3[0], &g_3[0], (void *)0, (void *)0}, {(void *)0, &g_3[0], (void *)0, &g_3[0]}, {&g_3[0], &g_3[0], &g_3[3], (void *)0}}, {{&g_3[0], &g_3[0], &g_3[0], &g_3[0]}, {&g_3[0], &g_3[0], &g_3[0], (void *)0}, {&g_3[0], &g_3[0], &g_3[0], &g_3[3]}}};
  uint8_t l_4 = 0UL;
  int i, j, k;
  l_4--;
  g_3[0] = g_3[0];
  return g_3[0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
