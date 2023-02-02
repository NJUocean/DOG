// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = (-1L);
static int32_t g_6 = 0x665683C8L;
static int8_t g_14[1][3][3] = {{{7L, 7L, 7L}, {7L, 7L, 7L}, {7L, 7L, 7L}}};
static int8_t g_15 = 0xC9L;
static volatile int8_t g_16 = 0x1EL;
static volatile int32_t g_17 = 0x9864BA8BL;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  uint16_t l_18 = 0x59C4L;
  for (g_2 = (-2); (g_2 != (-17)); --g_2) {
    int32_t *l_5 = &g_6;
    int32_t *l_7 = (void *)0;
    int32_t *l_8 = &g_6;
    int32_t *l_9 = (void *)0;
    int32_t *l_10 = &g_6;
    int32_t *l_11 = &g_6;
    int32_t *l_12 = &g_6;
    int32_t *l_13[2];
    int i;
    for (i = 0; i < 2; i++)
      l_13[i] = (void *)0;
    --l_18;
  }
  return g_6;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
