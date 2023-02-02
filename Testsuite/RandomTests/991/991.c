// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_6[1][4][4] = {{{0x3009CE45L, 0x3009CE45L, 0x3009CE45L, 0x3009CE45L}, {0x3009CE45L, 0x3009CE45L, 0x3009CE45L, 0x3009CE45L}, {0x3009CE45L, 0x3009CE45L, 0x3009CE45L, 0x3009CE45L}, {0x3009CE45L, 0x3009CE45L, 0x3009CE45L, 0x3009CE45L}}};
static int32_t *g_7 = &g_6[0][0][3];
static int32_t *g_9 = &g_6[0][0][1];
static int32_t **volatile g_8 = &g_9;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  uint16_t l_2 = 65534UL;
  int32_t *l_5[5][4] = {{(void *)0, (void *)0, &g_6[0][0][3], (void *)0}, {(void *)0, &g_6[0][3][3], &g_6[0][3][3], (void *)0}, {&g_6[0][3][3], (void *)0, &g_6[0][3][3], &g_6[0][3][3]}, {(void *)0, (void *)0, &g_6[0][0][3], (void *)0}, {(void *)0, &g_6[0][3][3], &g_6[0][3][3], (void *)0}};
  int i, j;
  l_2--;
  (*g_8) = (g_7 = l_5[4][3]);
  return g_6[0][0][3];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
