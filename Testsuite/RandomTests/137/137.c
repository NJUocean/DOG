// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  int8_t f0;
  const uint64_t f1;
  uint16_t f2;
};

static int32_t g_3 = (-10L);
static uint64_t g_6[1][3][5] = {{{5UL, 0x40A98CEEF9A8551BLL, 5UL, 5UL, 0x40A98CEEF9A8551BLL}, {18446744073709551610UL, 0UL, 0UL, 18446744073709551610UL, 0UL}, {0x40A98CEEF9A8551BLL, 0x40A98CEEF9A8551BLL, 18446744073709551615UL, 0x40A98CEEF9A8551BLL, 0x40A98CEEF9A8551BLL}}};
static union U1 g_9 = {0xB1L};

static union U1 func_1(void);

static union U1 func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4[3][2][1] = {{{&g_3}, {(void *)0}}, {{(void *)0}, {&g_3}}, {{(void *)0}, {(void *)0}}};
  int16_t l_5 = 0xB5F7L;
  int i, j, k;
  ++g_6[0][1][2];
  return g_9;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
