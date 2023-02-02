// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4[5][5] = {{(-1L), 0x49D585EDL, (-9L), 0L, (-9L)}, {0x2579253AL, 0x2579253AL, 0x49D585EDL, (-3L), 0x42B48371L}, {(-1L), 0x42B48371L, 0L, (-3L), (-3L)}, {(-3L), 1L, (-3L), 0L, 1L}, {0L, 0x42B48371L, (-1L), 5L, 1L}};

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t *l_3 = (void *)0;
  int32_t **l_2 = &l_3;
  (*l_2) = (void *)0;
  return g_4[1][2];
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
    for (j = 0; j < 5; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
