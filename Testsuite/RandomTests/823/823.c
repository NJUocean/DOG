// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0x9C5A654FL;
static uint64_t g_7 = 0x091DF82D83D78398LL;

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int32_t *l_2 = (void *)0;
  int32_t *l_3 = &g_4;
  int32_t *l_5 = &g_4;
  int32_t *l_6[3][4] = {{&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4}};
  int32_t l_10 = (-1L);
  int i, j;
  --g_7;
  l_10 = 0L;
  return g_4;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
