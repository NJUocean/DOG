// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 1L;
static int32_t g_6[3] = {(-5L), (-5L), (-5L)};
static int32_t g_7 = 0L;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int8_t l_2[2][1];
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++)
      l_2[i][j] = 0x0CL;
  }
  for (g_3 = 0; (g_3 <= 0); g_3 += 1) {
    int32_t *l_4 = (void *)0;
    int32_t *l_5 = &g_6[1];
    (*l_5) |= (-1L);
    if (g_6[1])
      continue;
    for (g_7 = 0; (g_7 >= 0); g_7 -= 1) {
      int i, j;
      (*l_5) |= l_2[(g_3 + 1)][g_7];
    }
  }
  return g_6[1];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
