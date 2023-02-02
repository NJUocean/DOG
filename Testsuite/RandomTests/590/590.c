// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int8_t g_3 = 7L;
static int32_t g_7 = (-5L);
static volatile int32_t g_8 = (-1L);
static uint16_t g_10[1] = {1UL};
static volatile int16_t g_21[1][2][4] = {{{0xFAE0L, 0xFAE0L, 0xFAE0L, 0xFAE0L}, {0xFAE0L, 0xFAE0L, 0xFAE0L, 0xFAE0L}}};
static volatile int16_t g_22 = 0L;
static volatile int64_t g_24 = 5L;
static uint8_t g_25 = 0x8BL;

static int16_t func_1(void);

static int16_t func_1(void) {
  uint8_t l_2 = 1UL;
  int32_t l_16 = (-9L);
  int32_t l_17 = 0xBF5E4D8DL;
  int32_t l_18 = 0x7511ECBFL;
  int32_t l_20[5] = {0x5423B19DL, 0x5423B19DL, 0x5423B19DL, 0x5423B19DL, 0x5423B19DL};
  int i;
  if (l_2) {
    return g_3;
  } else {
    int16_t l_9 = (-1L);
    int32_t *l_13 = &g_7;
    int32_t *l_14 = &g_7;
    int32_t *l_15[5];
    int32_t l_19 = 0x38D679BDL;
    int8_t l_23 = 0x4AL;
    int i;
    for (i = 0; i < 5; i++)
      l_15[i] = (void *)0;
    for (l_2 = (-10); (l_2 < 9); l_2 = safe_add_func_uint16_t_u_u(l_2, 5)) {
      int32_t *l_6[5][2] = {{&g_7, &g_7}, {&g_7, &g_7}, {&g_7, &g_7}, {&g_7, &g_7}, {&g_7, &g_7}};
      int i, j;
      --g_10[0];
    }
    --g_25;
  }
  return g_7;
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
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
