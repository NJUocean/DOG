// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int64_t f0;
  volatile signed f1 : 29;
};

union U4 {
  const int32_t f0;
  volatile int16_t f1;
  uint16_t f2;
  uint64_t f3;
};

static uint32_t g_6 = 0xFE23A266L;
static int64_t g_8 = (-1L);
static int32_t g_23 = 1L;
static uint64_t g_24 = 0UL;
static struct S0 g_25 = {0x7C914A3A6D7D0454LL, -1011};
static volatile union U4 g_26 = {-1L};

static uint16_t func_1(void);
static struct S0 func_14(uint32_t p_15, int16_t p_16, int16_t p_17, int32_t p_18);

static uint16_t func_1(void) {
  int16_t l_4 = 0x3AB1L;
  uint32_t *l_5[1];
  int32_t l_7 = 0x65256810L;
  int64_t *l_13 = &g_8;
  int i;
  for (i = 0; i < 1; i++)
    l_5[i] = &g_6;
  if ((((((safe_div_func_uint32_t_u_u((g_6 = (l_7 = l_4)), (255UL & g_8))) && ((((l_5[0] == (void *)0), (safe_lshift_func_int8_t_s_u(1L, 1))) && (safe_sub_func_uint64_t_u_u(((((((*l_13) = g_8) > g_6), func_14(l_7, g_8, g_8, l_4)), g_26), 0xA3418EB0BADCAB39LL), l_7))) < g_6)) < 0x57L) | 0x00L) == l_4)) {
    int8_t l_27[2];
    int i;
    for (i = 0; i < 2; i++)
      l_27[i] = 0xFBL;
    return l_27[0];
  } else {
    return g_24;
  }
}

static struct S0 func_14(uint32_t p_15, int16_t p_16, int16_t p_17, int32_t p_18) {
  uint32_t *l_21 = &g_6;
  int32_t *l_22 = &g_23;
  g_24 = (g_8 >= ((*l_22) = (safe_lshift_func_int8_t_s_s(((g_8, &g_6) == l_21), 5))));
  return g_25;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
  transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
  transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
