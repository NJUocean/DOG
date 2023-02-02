// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile uint16_t f0;
  volatile uint32_t f1;
  uint32_t f2;
  uint32_t f3;
  const uint32_t f4;
};

static int32_t g_4 = 0x10B999FBL;
static union U0 g_5[4][1] = {{{65535UL}}, {{1UL}}, {{65535UL}}, {{1UL}}};

static union U0 func_1(void);

static union U0 func_1(void) {
  uint16_t l_2 = 0UL;
  int32_t *l_3[5] = {&g_4, &g_4, &g_4, &g_4, &g_4};
  int i;
  g_4 |= l_2;
  return g_5[0][0];
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
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_5[i][j].f0, "g_5[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
