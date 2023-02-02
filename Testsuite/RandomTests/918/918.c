// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4[1] = {1L};
static int32_t *g_5 = &g_4[0];

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t *l_3 = &g_4[0];
  int32_t **l_2[3][1][2];
  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 2; k++)
        l_2[i][j][k] = &l_3;
    }
  }
  g_5 = (void *)0;
  return g_4[0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
