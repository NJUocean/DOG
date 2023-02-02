// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  const uint32_t f0;
  uint32_t f1;
  int64_t f2;
  int16_t f3;
  int16_t f4;
};

static volatile uint32_t g_2 = 0UL;
static volatile int32_t g_4[2][3] = {{3L, 0xB1B055CCL, 3L}, {3L, 0xB1B055CCL, 3L}};
static volatile int32_t *volatile g_3 = &g_4[0][2];
static union U0 g_5[4] = {{2UL}, {2UL}, {2UL}, {2UL}};

static union U0 func_1(void);

static union U0 func_1(void) {
  (*g_3) = g_2;
  return g_5[1];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 4; i++) {
    transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
