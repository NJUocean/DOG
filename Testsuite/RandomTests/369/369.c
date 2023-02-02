// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile uint32_t f0;
  volatile int32_t f1;
};

static int32_t g_4[3][5] = {{7L, 7L, 7L, 7L, 7L}, {(-4L), 0xB6748F69L, (-4L), 0xB6748F69L, (-4L)}, {7L, 7L, 7L, 7L, 7L}};
static const union U0 g_5 = {9UL};

static const union U0 func_1(void);

static const union U0 func_1(void) {
  uint32_t l_2 = 4294967294UL;
  int32_t *l_3[2];
  int i;
  for (i = 0; i < 2; i++)
    l_3[i] = &g_4[0][4];
  g_4[1][3] ^= l_2;
  return g_5;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
