// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0xCB13638EL;
static volatile int32_t g_4 = 1L;

static const uint64_t func_1(void);

static const uint64_t func_1(void) {
  uint32_t l_2[1][3];
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++)
      l_2[i][j] = 0x342EB90DL;
  }
  for (g_3 = 0; g_3 < 1; g_3 += 1) {
    for (g_4 = 0; g_4 < 3; g_4 += 1) {
      l_2[g_3][g_4] = 0UL;
    }
  }
  return l_2[0][2];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
