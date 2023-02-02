// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0L;
static int32_t g_6 = 0xB999FB02L;

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int64_t l_2 = 0L;
  int32_t *l_3 = &g_4;
  int32_t *l_5[2];
  uint32_t l_7 = 1UL;
  int i;
  for (i = 0; i < 2; i++)
    l_5[i] = &g_6;
  g_6 |= (l_7 &= ((*l_3) |= l_2));
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
  transparent_crc(g_6, "g_6", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
