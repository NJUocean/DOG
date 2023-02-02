// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static volatile int32_t g_4[5][1] = {{0x54207647L}, {1L}, {0x54207647L}, {1L}, {0x54207647L}};
static volatile int8_t g_5 = (-5L);
static uint32_t g_6[1] = {18446744073709551612UL};

static uint64_t func_1(void);

static uint64_t func_1(void) {
  int32_t *l_2[1];
  int i;
  for (i = 0; i < 1; i++)
    l_2[i] = &g_3;
  g_6[0]--;
  return g_4[1][0];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
