// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint16_t g_2 = 0xDD3FL;
static int32_t g_4 = 0x12491E29L;
static int32_t g_9[4] = {0xE1DFE009L, 0xE1DFE009L, 0xE1DFE009L, 0xE1DFE009L};

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int32_t *l_3 = &g_4;
  int32_t l_10 = 1L;
  int32_t l_11 = 0xD3EC93CCL;
  int32_t l_12 = 1L;
  int32_t l_13[5][4] = {{0xFA553FC2L, 0xFA553FC2L, 0xCDEDFC3EL, 6L}, {0L, (-1L), 0L, 0xCDEDFC3EL}, {0L, 0xCDEDFC3EL, 0xCDEDFC3EL, 0L}, {0xFA553FC2L, 0xCDEDFC3EL, 6L, 0xCDEDFC3EL}, {0xCDEDFC3EL, (-1L), 6L, 6L}};
  int8_t l_14 = 0xD6L;
  int8_t l_15 = 0x5DL;
  int i, j;
  (*l_3) ^= g_2;
  for (g_4 = 0; (g_4 <= 14); g_4 = safe_add_func_uint8_t_u_u(g_4, 1)) {
    int32_t *l_7 = (void *)0;
    int32_t *l_8[5] = {&g_9[0], &g_9[0], &g_9[0], &g_9[0], &g_9[0]};
    uint16_t l_16[3];
    int i;
    for (i = 0; i < 3; i++)
      l_16[i] = 0x8724L;
    ++l_16[1];
  }
  return g_9[1];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_9[i], "g_9[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
