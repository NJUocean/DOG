// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static uint32_t g_6 = 0x50B5F0B1L;

static const uint8_t func_1(void);

static const uint8_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t l_4[4][4] = {{1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}};
  int32_t *l_5[2];
  int i, j;
  for (i = 0; i < 2; i++)
    l_5[i] = &l_4[3][2];
  g_6++;
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
  transparent_crc(g_6, "g_6", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
