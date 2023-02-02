// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static volatile int32_t g_6[2] = {(-1L), (-1L)};

static int64_t func_1(void);

static int64_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4[1];
  int32_t l_5 = 0x5E53494AL;
  int8_t l_7 = 0L;
  uint8_t l_8[2][5][5] = {{{0UL, 0UL, 250UL, 250UL, 0UL}, {0x09L, 0xEBL, 0x09L, 0xEBL, 0x09L}, {0UL, 250UL, 250UL, 0UL, 0UL}, {251UL, 0xEBL, 251UL, 0xEBL, 251UL}, {0UL, 0UL, 250UL, 250UL, 0UL}}, {{0x09L, 0xEBL, 0x09L, 0xEBL, 0x09L}, {0UL, 250UL, 250UL, 0UL, 0UL}, {251UL, 0xEBL, 251UL, 0xEBL, 251UL}, {0UL, 0UL, 250UL, 250UL, 0UL}, {0x09L, 0xEBL, 0x09L, 0xEBL, 0x09L}}};
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_4[i] = &g_3;
  ++l_8[1][0][1];
  return g_3;
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
  for (i = 0; i < 2; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
