// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4[1][1] = {{0x252CB136L}};
static int32_t g_6 = 0x3B6182EAL;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t *l_2 = (void *)0;
  int32_t *l_3 = &g_4[0][0];
  int32_t *l_5 = &g_6;
  (*l_5) &= ((*l_3) = 4L);
  return g_4[0][0];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
