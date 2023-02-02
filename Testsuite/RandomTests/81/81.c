// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  const uint64_t f0;
  uint64_t f1;
  int32_t f2;
  volatile uint32_t f3;
};

static uint16_t g_5 = 0xBF48L;
static volatile int64_t g_10 = 0x7AB61B583DC0E3E7LL;
static uint16_t g_14 = 0x3004L;
static uint16_t g_18[2] = {0xE750L, 0xE750L};
static int32_t g_20 = 0xCC545E21L;
static uint16_t g_29[5][4][1] = {{{0x78D5L}, {5UL}, {1UL}, {0x4475L}}, {{1UL}, {5UL}, {0x78D5L}, {0x31B3L}}, {{0xC7BCL}, {0x31B3L}, {0x78D5L}, {5UL}}, {{1UL}, {0x4475L}, {1UL}, {5UL}}, {{0x78D5L}, {0x31B3L}, {0xC7BCL}, {0x31B3L}}};
static uint16_t g_33[1][5] = {{5UL, 5UL, 5UL, 5UL, 5UL}};
static const union U0 g_35[2] = {{0UL}, {0UL}};

static const union U0 func_1(void);
static uint16_t func_6(uint32_t p_7, uint8_t p_8);

static const union U0 func_1(void) {
  uint32_t l_9 = 0x7207182BL;
  uint64_t l_13[2][3][5] = {{{18446744073709551615UL, 0xD6DBC1C234AC0198LL, 18446744073709551615UL, 0xD6DBC1C234AC0198LL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 0xC28CAE2FE81720D7LL, 0xC28CAE2FE81720D7LL, 18446744073709551615UL}, {0x3062A4B15D3E9973LL, 0xD6DBC1C234AC0198LL, 0x3062A4B15D3E9973LL, 0xD6DBC1C234AC0198LL, 0x3062A4B15D3E9973LL}}, {{18446744073709551615UL, 0xC28CAE2FE81720D7LL, 0xC28CAE2FE81720D7LL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 0xD6DBC1C234AC0198LL, 18446744073709551615UL, 0xD6DBC1C234AC0198LL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 0xC28CAE2FE81720D7LL, 0xC28CAE2FE81720D7LL, 18446744073709551615UL}}};
  uint32_t l_15[2];
  uint16_t *l_32 = &g_33[0][1];
  int32_t l_34 = 0xC3978D11L;
  int i, j, k;
  for (i = 0; i < 2; i++)
    l_15[i] = 0xD6446BD2L;
  l_34 = ((safe_div_func_int8_t_s_s(((((!0xD568D526L), ((*l_32) ^= (g_5, func_6((((g_5 || g_5) < (l_9 & (g_10 || (((l_9 != l_9) || ((safe_rshift_func_uint32_t_u_u(l_13[0][2][1], 6)), 0x04F77722L)) <= g_10)))), g_14), l_15[0])))) ^ l_13[0][2][1]) == 0xC856L), (-3L))), g_18[0]);
  return g_35[0];
}

static uint16_t func_6(uint32_t p_7, uint8_t p_8) {
  int32_t *l_19 = &g_20;
  int32_t l_28 = 0x0EE3B00BL;
  for (p_7 = 0; (p_7 >= 6); p_7 = safe_add_func_int64_t_s_s(p_7, 8)) {
    int16_t l_21 = (-1L);
    int32_t *l_22 = (void *)0;
    int32_t *l_23 = &g_20;
    int32_t *l_24 = &g_20;
    int32_t *l_25 = &g_20;
    int32_t *l_26 = &g_20;
    int32_t *l_27[5];
    int i;
    for (i = 0; i < 5; i++)
      l_27[i] = (void *)0;
    for (g_5 = 0; (g_5 <= 1); g_5 += 1) {
      l_19 = (void *)0;
      for (g_20 = 0; (g_20 <= 1); g_20 += 1) {
        int i;
        if (g_18[g_20])
          break;
        l_21 = p_8;
      }
    }
    ++g_29[2][3][0];
  }
  return g_18[0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_18[i], "g_18[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_20, "g_20", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_29[i][j][k], "g_29[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_33[i][j], "g_33[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 2; i++) {
    transparent_crc(g_35[i].f0, "g_35[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
