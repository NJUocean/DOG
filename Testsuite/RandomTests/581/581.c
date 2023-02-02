// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0L;
static volatile int32_t g_5 = 9L;
static uint32_t g_6 = 18446744073709551607UL;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4[1];
  int i;
  for (i = 0; i < 1; i++)
    l_4[i] = &g_3;
  --g_6;
  for (g_3 = (-21); (g_3 != 0); ++g_3) {
    uint64_t l_11 = 0x44CF592758E92EDALL;
    int32_t l_12 = 0L;
    l_11 = g_3;
    l_12 &= g_3;
  }
  return g_5;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
