// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_7[1] = {(-1L)};
static volatile int64_t g_20 = (-1L);
static uint16_t g_22 = 0x4114L;
static int32_t g_32 = 0xEB0A1172L;
static uint32_t g_38 = 7UL;

static uint64_t func_1(void);
static int32_t func_2(int16_t p_3);

static uint64_t func_1(void) {
  uint16_t l_6 = 0xEEE2L;
  uint16_t *l_21 = &g_22;
  uint32_t l_23 = 1UL;
  int32_t l_33 = 0L;
  if (func_2((safe_add_func_int16_t_s_s(((((l_6 > g_7[0]) < (safe_mod_func_int8_t_s_s(l_6, (safe_sub_func_uint16_t_u_u(l_6, g_7[0]))))) < (((safe_rshift_func_uint32_t_u_u((l_6, g_7[0]), 9)) ^ (((safe_div_func_int64_t_s_s(((l_6 < (safe_mod_func_uint16_t_u_u(((*l_21) = (g_20 != l_6)), g_7[0]))) != 0x74L), l_23)) ^ g_7[0]) <= 1L)) == g_7[0])) < 7UL), l_6)))) {
    uint64_t l_34 = 0x73C12D4938140A97LL;
    int32_t *l_37 = &l_33;
    for (g_22 = (-14); (g_22 >= 51); g_22++) {
      int32_t *l_31[3][2][2] = {{{&g_32, &g_32}, {&g_32, &g_32}}, {{&g_32, &g_32}, {&g_32, &g_32}}, {{&g_32, &g_32}, {&g_32, &g_32}}};
      int i, j, k;
      l_34--;
    }
    g_38++;
  } else {
    uint64_t l_41 = 0x52B3395CC9E520C3LL;
    return l_41;
  }
  return g_20;
}

static int32_t func_2(int16_t p_3) {
  uint32_t l_28 = 0xA8DB8846L;
  for (g_22 = 4; (g_22 < 37); g_22++) {
    for (p_3 = (-26); (p_3 >= (-3)); p_3 = safe_add_func_int16_t_s_s(p_3, 8)) {
      return p_3;
    }
  }
  return l_28;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
