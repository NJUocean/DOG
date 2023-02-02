// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[4] = {(-8L), (-8L), (-8L), (-8L)};
static volatile int32_t g_4 = 6L;
static volatile int32_t g_5 = 0xB4E94F93L;
static volatile int32_t g_6 = 0x45EE28FDL;
static int32_t g_7 = 0x7278FA8FL;
static int32_t g_9 = 9L;

static int16_t func_1(void);

static int16_t func_1(void) {
  uint16_t l_2[4];
  int i;
  for (i = 0; i < 4; i++)
    l_2[i] = 5UL;
  for (g_3[2] = 0; (g_3[2] <= 3); g_3[2] += 1) {
    uint32_t l_11 = 0x720348F4L;
    for (g_7 = 3; (g_7 >= 0); g_7 -= 1) {
      int32_t *l_8 = &g_9;
      int32_t *l_10[3];
      int i;
      for (i = 0; i < 3; i++)
        l_10[i] = &g_9;
      l_11++;
    }
  }
  return l_2[0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
