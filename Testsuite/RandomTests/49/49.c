// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0x9AC70C30L;
static int8_t g_5 = (-6L);
static volatile int8_t g_6 = 0L;
static int32_t g_7[1] = {0L};
static volatile int16_t g_8[1][1][4] = {{{(-1L), (-1L), (-1L), (-1L)}}};
static volatile uint64_t g_9 = 0xC657863718BD8502LL;

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4[3][3] = {{&g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3}};
  int i, j;
  g_9--;
  return g_8[0][0][0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
