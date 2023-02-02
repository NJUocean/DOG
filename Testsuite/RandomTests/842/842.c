// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0x4B666A75L;
static volatile int32_t g_6 = 0x1E3FF14EL;
static volatile int32_t g_7 = 0xD0714AD3L;
static volatile uint16_t g_8[1][2][5] = {{{0x6081L, 0x6081L, 0x6081L, 0x6081L, 0x6081L}, {0x6081L, 0x6081L, 0x6081L, 0x6081L, 0x6081L}}};

static int64_t func_1(void);

static int64_t func_1(void) {
  int32_t *l_2 = (void *)0;
  int32_t *l_3 = &g_4;
  int32_t *l_5[1][4][3] = {{{&g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4}}};
  int i, j, k;
  g_8[0][1][3]--;
  return (*l_3);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
