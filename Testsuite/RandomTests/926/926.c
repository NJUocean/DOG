// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0x7D8A8701L;

static uint64_t func_1(void);

static uint64_t func_1(void) {
  int32_t *l_3 = &g_4;
  int32_t **l_2 = &l_3;
  int32_t *l_5[3];
  int16_t l_6 = 0x0FC0L;
  int i;
  for (i = 0; i < 3; i++)
    l_5[i] = (void *)0;
  (*l_2) = (void *)0;
  g_4 = 7L;
  return l_6;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
