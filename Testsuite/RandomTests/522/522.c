// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static int32_t g_11 = (-1L);
static int32_t g_12[3][4] = {{0x205300CEL, 0x205300CEL, 0x205300CEL, 0x205300CEL}, {0x205300CEL, 0x205300CEL, 0x205300CEL, 0x205300CEL}, {0x205300CEL, 0x205300CEL, 0x205300CEL, 0x205300CEL}};

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t l_4 = 0x24C00011L;
  int32_t *l_5 = &l_4;
  int32_t *l_6 = &l_4;
  int32_t *l_7 = (void *)0;
  int32_t *l_8 = &g_3;
  int32_t *l_9 = &g_3;
  int32_t *l_10[5][3][2] = {{{(void *)0, &l_4}, {(void *)0, (void *)0}, {&l_4, &l_4}}, {{(void *)0, (void *)0}, {&l_4, (void *)0}, {(void *)0, &l_4}}, {{&l_4, (void *)0}, {(void *)0, &l_4}, {(void *)0, (void *)0}}, {{&l_4, &l_4}, {(void *)0, (void *)0}, {&l_4, (void *)0}}, {{(void *)0, &l_4}, {&l_4, (void *)0}, {(void *)0, &l_4}}};
  int8_t l_13 = 1L;
  uint64_t l_14 = 0UL;
  int i, j, k;
  l_14++;
  return g_11;
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
  transparent_crc(g_11, "g_11", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
