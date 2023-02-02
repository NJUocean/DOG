// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-3L);
static int32_t g_3 = 0xF46DB505L;
static int32_t g_7 = (-1L);
static volatile int8_t g_12 = 0x3AL;
static volatile int32_t g_14[4][5] = {{0L, 0x3CB5AF9FL, 0x3CB5AF9FL, 0L, 0L}, {0x691F6F49L, 8L, 0x691F6F49L, 8L, 0x691F6F49L}, {0L, 0L, 0x3CB5AF9FL, 0x3CB5AF9FL, 0L}, {0xC40A98CEL, 8L, 0xC40A98CEL, 8L, 0xC40A98CEL}};
static int32_t g_15 = 1L;
static int32_t g_16 = 0xB78F18B0L;
static volatile int8_t g_17 = 1L;
static int32_t g_18 = (-1L);
static volatile int32_t g_19 = (-1L);
static volatile uint16_t g_20 = 1UL;

static int32_t func_1(void);

static int32_t func_1(void) {
  int64_t l_11 = 0x69F30CC2FDCBA86BLL;
  int32_t l_13[4] = {0x2B5F7919L, 0x2B5F7919L, 0x2B5F7919L, 0x2B5F7919L};
  int32_t *l_27 = (void *)0;
  int i;
  for (g_3 = (-30); (g_3 <= 28); g_3 = safe_add_func_int8_t_s_s(g_3, 8)) {
    int32_t *l_6 = &g_7;
    int32_t *l_8 = &g_7;
    int32_t *l_9 = &g_7;
    int32_t *l_10[2][2][2];
    int i, j, k;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        for (k = 0; k < 2; k++)
          l_10[i][j][k] = &g_7;
      }
    }
    --g_20;
    for (g_15 = (-28); (g_15 < 18); ++g_15) {
      int32_t *l_25 = &g_3;
      int32_t **l_26 = (void *)0;
      l_27 = l_25;
    }
  }
  return l_11;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
