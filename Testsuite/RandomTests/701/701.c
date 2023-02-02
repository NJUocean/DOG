// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x394643CDL;
static uint8_t g_9 = 0x2CL;
static int32_t g_11 = (-7L);
static int16_t g_13 = 0xE012L;
static int32_t g_16 = 0x9CF13E13L;
static int32_t g_17[2][4][1] = {{{0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}}};

static int32_t func_1(void);

static int32_t func_1(void) {
  int8_t l_14 = 7L;
  for (g_2 = 0; (g_2 == 19); g_2++) {
    uint64_t l_7 = 0x1551DA622A149CECLL;
    uint8_t *l_8 = &g_9;
    int32_t *l_10 = &g_11;
    int16_t *l_12 = &g_13;
    int32_t *l_15[5][2][3] = {{{&g_16, &g_16, &g_16}, {&g_16, &g_2, &g_16}}, {{&g_2, &g_16, &g_16}, {&g_16, &g_16, (void *)0}}, {{&g_2, &g_2, &g_2}, {&g_16, &g_16, &g_2}}, {{&g_2, &g_2, (void *)0}, {&g_16, &g_16, &g_16}}, {{&g_16, &g_2, &g_16}, {&g_2, &g_16, &g_16}}};
    int i, j, k;
    g_17[0][2][0] = (g_16 = ((safe_rshift_func_uint8_t_u_s(((*l_8) |= l_7), (l_7 > ((*l_10) |= l_7)))) & (((*l_12) = g_2) > l_14)));
  }
  return g_16;
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
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_17[i][j][k], "g_17[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
