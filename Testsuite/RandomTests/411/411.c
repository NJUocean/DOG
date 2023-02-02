// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 9L;
static volatile int32_t g_3 = 0x9C5A654FL;
static int32_t g_4 = 0x3F467215L;
static volatile int32_t g_7 = 0xFB37B048L;
static volatile int32_t g_8 = (-1L);
static volatile int32_t g_9 = 0x5FCC58A0L;
static int32_t g_10 = 0x1DFE0091L;
static int32_t g_14 = (-8L);
static uint16_t g_33 = 0xE12CL;

static int32_t func_1(void);

static int32_t func_1(void) {
  int16_t l_17 = 0xEE67L;
  uint8_t l_18 = 1UL;
  int32_t *l_21 = (void *)0;
  int32_t *l_22 = &g_10;
  int32_t *l_23 = &g_4;
  int32_t *l_24 = &g_4;
  int32_t *l_25 = &g_14;
  int32_t *l_26 = &g_10;
  int32_t l_27 = 0xD8F9C328L;
  int32_t *l_28 = (void *)0;
  int32_t *l_29 = &g_4;
  int32_t *l_30 = &l_27;
  int32_t l_31 = 0x6121589AL;
  int32_t *l_32[1][4][1] = {{{&l_27}, {&g_14}, {&l_27}, {&g_14}}};
  int i, j, k;
  for (g_4 = 0; (g_4 < (-29)); g_4 = safe_sub_func_uint8_t_u_u(g_4, 5)) {
    int32_t l_16[2];
    int i;
    for (i = 0; i < 2; i++)
      l_16[i] = 0x5467356AL;
    for (g_10 = 0; (g_10 > 17); g_10 = safe_add_func_uint16_t_u_u(g_10, 1)) {
      int32_t *l_13 = &g_14;
      int32_t *l_15[4];
      int i;
      for (i = 0; i < 4; i++)
        l_15[i] = (void *)0;
      --l_18;
    }
    return l_17;
  }
  ++g_33;
  return g_10;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
