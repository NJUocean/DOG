// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0xFD41E559L;
static volatile uint16_t g_10[2][5][1] = {{{65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}}, {{65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}}};

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t l_4 = 0x7A7C2039L;
  int32_t *l_5 = &g_3;
  int32_t *l_6 = &l_4;
  int32_t *l_7 = &l_4;
  int32_t *l_8 = &g_3;
  int32_t *l_9[3][3] = {{(void *)0, (void *)0, (void *)0}, {&l_4, &l_4, &l_4}, {(void *)0, (void *)0, (void *)0}};
  int i, j;
  g_10[0][2][0]++;
  return g_10[0][2][0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_10[i][j][k], "g_10[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
