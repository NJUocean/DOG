// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0x091DF82DL;
static uint8_t g_8 = 1UL;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t *l_2 = (void *)0;
  int32_t *l_3 = &g_4;
  int32_t *l_5 = &g_4;
  int32_t *l_6 = &g_4;
  int32_t *l_7[1][2][4] = {{{(void *)0, (void *)0, (void *)0, (void *)0}, {(void *)0, (void *)0, (void *)0, (void *)0}}};
  int16_t l_11 = (-7L);
  int i, j, k;
  g_8--;
  return l_11;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
