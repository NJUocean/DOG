// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  volatile unsigned f0 : 2;
};

static volatile int16_t g_2 = 0xAE5AL;
static int64_t g_9 = 0x9BACC5D9B4E94F93LL;
static uint32_t g_12[2] = {8UL, 8UL};
static int32_t g_14 = 0L;
static int32_t g_19 = 0L;
static uint64_t g_20 = 0x2324015FB26C4F32LL;
static union U2 g_23[2][5] = {{{0xCDF8ABFFL}, {0xCDF8ABFFL}, {0xCDF8ABFFL}, {0xCDF8ABFFL}, {0xCDF8ABFFL}}, {{0xCDF8ABFFL}, {0xCDF8ABFFL}, {0xCDF8ABFFL}, {0xCDF8ABFFL}, {0xCDF8ABFFL}}};

static union U2 func_1(void);
static uint16_t func_3(uint32_t p_4, const int32_t p_5, const int64_t p_6);

static union U2 func_1(void) {
  int32_t l_10 = 1L;
  uint32_t *l_11 = &g_12[0];
  int32_t *l_18[5];
  int i;
  for (i = 0; i < 5; i++)
    l_18[i] = &l_10;
  if ((((-1L) >= g_2) >= func_3(((*l_11) = (safe_add_func_int8_t_s_s(g_9, l_10))), g_9, g_9))) {
    int32_t *l_16 = &g_14;
    int32_t **l_15 = &l_16;
    (*l_15) = &g_14;
  } else {
    int32_t *l_17 = &g_14;
    (*l_17) = 0xE24307A3L;
  }
  --g_20;
  return g_23[0][1];
}

static uint16_t func_3(uint32_t p_4, const int32_t p_5, const int64_t p_6) {
  for (p_4 = 0; (p_4 <= 1); p_4 += 1) {
    int32_t *l_13 = &g_14;
    int i;
    (*l_13) |= g_12[p_4];
    (*l_13) = g_12[0];
  }
  return g_9;
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
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_12[i], "g_12[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_23[i][j].f0, "g_23[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
