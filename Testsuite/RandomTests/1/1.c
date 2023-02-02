// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0xFA72C25FL;
static int32_t g_13[5][2] = {{(-10L), (-10L)}, {(-10L), (-10L)}, {(-10L), (-10L)}, {(-10L), (-10L)}, {(-10L), (-10L)}};

static int64_t func_1(void);

static int64_t func_1(void) {
  int32_t *l_2 = (void *)0;
  int32_t *l_3 = &g_4;
  int32_t *l_5 = (void *)0;
  int32_t *l_6 = &g_4;
  int32_t *l_7 = &g_4;
  int32_t *l_8 = &g_4;
  int32_t *l_9 = &g_4;
  int32_t *l_10 = &g_4;
  int32_t *l_11 = &g_4;
  int32_t *l_12[1];
  uint16_t l_14 = 65535UL;
  int i;
  for (i = 0; i < 1; i++)
    l_12[i] = &g_4;
  --l_14;
  return g_13[0][0];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
