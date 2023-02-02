// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static volatile int8_t g_6[2][5][1] = {{{(-1L)}, {9L}, {(-1L)}, {9L}, {(-1L)}}, {{9L}, {(-1L)}, {9L}, {(-1L)}, {9L}}};
static volatile uint16_t g_7 = 0xA727L;

static int64_t func_1(void);

static int64_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = (void *)0;
  int32_t *l_5[3][1];
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++)
      l_5[i][j] = &g_3;
  }
  --g_7;
  return g_6[0][3][0];
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
        transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
