// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-6L);

static uint8_t func_1(void);

static uint8_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t l_5[2][4][3] = {{{7L, (-1L), (-1L)}, {1L, (-1L), 0L}, {0x54FDDD3FL, 7L, 0x3FA75C19L}, {1L, 1L, 0x3FA75C19L}}, {{7L, 0x54FDDD3FL, 0L}, {(-1L), 1L, (-1L)}, {(-1L), 7L, 1L}, {7L, (-1L), (-1L)}}};
  int32_t *l_6[1];
  uint8_t l_7 = 0x31L;
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_6[i] = (void *)0;
  --l_7;
  (*l_2) = (+0x7030L);
  return g_3;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
