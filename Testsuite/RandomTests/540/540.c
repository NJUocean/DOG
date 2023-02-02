// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  uint16_t f0;
  uint32_t f1;
  uint32_t f2;
};

static int32_t g_3[4][2] = {{0x3126FF23L, (-1L)}, {(-1L), 0x3126FF23L}, {(-1L), (-1L)}, {0x3126FF23L, (-1L)}};
static union U2 g_10 = {0xBABEL};

static union U2 func_1(void);

static union U2 func_1(void) {
  int32_t *l_2 = &g_3[3][1];
  int32_t *l_4 = (void *)0;
  int32_t *l_5[1][3][5] = {{{&g_3[3][1], &g_3[1][1], &g_3[3][1], &g_3[3][1], &g_3[3][1]}, {&g_3[3][1], &g_3[1][1], &g_3[3][1], &g_3[3][1], &g_3[3][1]}, {&g_3[3][1], &g_3[1][1], &g_3[3][1], &g_3[3][1], &g_3[3][1]}}};
  int8_t l_6 = 0x3AL;
  uint64_t l_7 = 9UL;
  int i, j, k;
  l_7--;
  return g_10;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
