// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_11 = (-7L);
static uint8_t g_14[4][5][4] = {{{0xDEL, 250UL, 1UL, 0xDEL}, {0x58L, 250UL, 0x16L, 0x58L}, {0x58L, 1UL, 1UL, 0x58L}, {0xDEL, 250UL, 1UL, 0xDEL}, {0x58L, 250UL, 0x16L, 0x58L}}, {{0x58L, 1UL, 1UL, 0x58L}, {0xDEL, 250UL, 1UL, 0xDEL}, {0x58L, 250UL, 0x16L, 0x58L}, {0x58L, 1UL, 1UL, 0x58L}, {0xDEL, 250UL, 1UL, 0xDEL}}, {{0x58L, 250UL, 0x16L, 0x58L}, {0x58L, 1UL, 0x16L, 0xDEL}, {0x2BL, 1UL, 0x16L, 0x2BL}, {0xDEL, 1UL, 250UL, 0xDEL}, {0xDEL, 0x16L, 0x16L, 0xDEL}}, {{0x2BL, 1UL, 0x16L, 0x2BL}, {0xDEL, 1UL, 250UL, 0xDEL}, {0xDEL, 0x16L, 0x16L, 0xDEL}, {0x2BL, 1UL, 0x16L, 0x2BL}, {0xDEL, 1UL, 250UL, 0xDEL}}};
static uint16_t g_17 = 0x20D7L;
static uint8_t g_19 = 0UL;
static uint64_t g_21 = 0xBAE8B01213072C02LL;
static int32_t g_24 = 1L;
static int32_t *volatile g_23 = &g_24;
static int32_t *volatile g_26 = &g_24;

static uint8_t func_1(void);
static int32_t func_2(int8_t p_3, int32_t p_4, uint8_t p_5, const uint64_t p_6);

static uint8_t func_1(void) {
  int64_t l_12 = 0x244D513C61C71BC7LL;
  uint8_t *l_13 = &g_14[0][0][0];
  int8_t *l_18 = (void *)0;
  uint64_t *l_20 = &g_21;
  (*g_26) = ((func_2((g_19 = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((g_11 & ((((*l_13)--) != l_12), 0xACB8F2BA167C28CALL)), g_17)), 0x6986L))), l_12, l_12, ((*l_20) = g_17)), (*g_23)) > 0L);
  return l_12;
}

static int32_t func_2(int8_t p_3, int32_t p_4, uint8_t p_5, const uint64_t p_6) {
  int16_t l_22 = 5L;
  uint32_t l_25 = 5UL;
  (*g_23) = l_22;
  return l_25;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
