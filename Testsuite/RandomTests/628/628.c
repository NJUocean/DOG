// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-4L);
static uint8_t g_8 = 0x13L;

static const uint64_t func_1(void);

static const uint64_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5 = &g_3;
  int32_t *l_6 = &g_3;
  int32_t *l_7[4];
  int i;
  for (i = 0; i < 4; i++)
    l_7[i] = &g_3;
  --g_8;
  g_3 = ((0x7207182BL >= ((void *)0 == &g_3)) && (-3L));
  return g_8;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
