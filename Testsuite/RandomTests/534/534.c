// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4[3] = {0L, 0L, 0L};
static uint16_t g_5[3][4] = {{0x22E6L, 0x22E6L, 0x22E6L, 0x22E6L}, {0x22E6L, 0x22E6L, 0x22E6L, 0x22E6L}, {0x22E6L, 0x22E6L, 0x22E6L, 0x22E6L}};

static int8_t func_1(void);

static int8_t func_1(void) {
  uint64_t l_2 = 1UL;
  int32_t *l_3[2];
  int i;
  for (i = 0; i < 2; i++)
    l_3[i] = &g_4[1];
  g_5[2][3] = (g_4[1] = l_2);
  return g_5[2][3];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
