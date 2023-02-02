// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int16_t g_2[5] = {0x85F7L, 0x85F7L, 0x85F7L, 0x85F7L, 0x85F7L};
static int32_t g_3 = 0x020F89B5L;
static int32_t g_7[5][4] = {{1L, (-10L), (-10L), 1L}, {(-10L), 1L, (-10L), (-10L)}, {1L, 1L, (-1L), 1L}, {1L, (-10L), (-10L), 1L}, {(-10L), 1L, (-10L), (-10L)}};

static int32_t func_1(void);

static int32_t func_1(void) {
  int16_t l_8 = 0L;
  for (g_3 = 4; (g_3 >= 0); g_3 -= 1) {
    int32_t *l_5 = &g_3;
    int32_t **l_4 = &l_5;
    int32_t *l_6 = &g_7[4][3];
    (*l_4) = &g_3;
    (*l_6) &= 0L;
  }
  return l_8;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
