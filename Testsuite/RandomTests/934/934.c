// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  volatile uint8_t f0;
  const uint64_t f1;
  const uint16_t f2;
  int32_t f3;
};

static volatile int32_t g_2 = 4L;
static int32_t g_3[1] = {0xE77AB392L};
static volatile union U1 g_7[5][3] = {{{4UL}, {4UL}, {0xA1L}}, {{4UL}, {4UL}, {0xA1L}}, {{4UL}, {4UL}, {0xA1L}}, {{4UL}, {4UL}, {0xA1L}}, {{4UL}, {4UL}, {0xA1L}}};
static volatile union U1 *volatile g_6 = &g_7[1][1];
static volatile union U1 *volatile *volatile g_8[4] = {&g_6, &g_6, &g_6, &g_6};
static volatile union U1 g_10 = {0x58L};

static int16_t func_1(void);

static int16_t func_1(void) {
  volatile union U1 *volatile l_9 = &g_10;
  int32_t l_11[1];
  int i;
  for (i = 0; i < 1; i++)
    l_11[i] = 0x10977A12L;
  for (g_3[0] = 0; (g_3[0] < (-28)); --g_3[0]) {
    if (g_2)
      break;
  }
  l_9 = g_6;
  return l_11[0];
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
  for (i = 0; i < 1; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_7[i][j].f0, "g_7[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
