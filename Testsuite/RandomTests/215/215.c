// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  int32_t f0;
};

union U3 {
  volatile uint16_t f0;
  const signed f1 : 11;
};

static volatile uint64_t g_11 = 0xED0657689A5A40F2LL;
static const int16_t g_12[4][3] = {{0x9B69L, 9L, (-1L)}, {1L, 9L, 1L}, {(-1L), 0x9B69L, (-1L)}, {(-1L), (-1L), 0x9B69L}};
static int32_t g_15 = 0xC7E43439L;
static int32_t *volatile g_14 = &g_15;
static int32_t *volatile g_18 = (void *)0;
static int32_t *volatile g_19 = &g_15;
static int16_t g_31[2] = {0L, 0L};
static const int32_t g_33 = 1L;
static union U3 g_35 = {0UL};

static union U3 func_1(void);
static int32_t func_4(uint32_t p_5, const int32_t p_6);

static union U3 func_1(void) {
  int32_t l_28 = 0xC930F888L;
  int16_t *l_29 = (void *)0;
  int16_t *l_30[1][5][5] = {{{&g_31[1], &g_31[1], &g_31[1], &g_31[1], &g_31[1]}, {(void *)0, &g_31[1], &g_31[1], &g_31[1], (void *)0}, {&g_31[1], &g_31[1], &g_31[1], &g_31[1], &g_31[1]}, {(void *)0, &g_31[1], &g_31[1], &g_31[1], &g_31[1]}, {&g_31[1], &g_31[1], &g_31[0], &g_31[1], &g_31[1]}}};
  const int32_t *l_32 = &g_33;
  int32_t *l_34 = &g_15;
  int i, j, k;
  (*l_34) = ((safe_sub_func_int8_t_s_s((func_4((safe_div_func_uint16_t_u_u((safe_rshift_func_uint32_t_u_u(g_11, 29)), 0x5A51L)), g_12[0][1]) > (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(0xFBL, (((safe_mul_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((65531UL != 0xA3DEL), (g_31[1] = l_28))) | (((((g_12[2][1] != l_28) <= l_28), l_32) == &g_33) || (*l_32))), (*l_32))), 0UL) >= g_12[0][1]))), (*l_32)))), g_12[0][2])) >= g_33);
  return g_35;
}

static int32_t func_4(uint32_t p_5, const int32_t p_6) {
  const union U1 l_13[2][2] = {{{0xED890FC5L}, {0xED890FC5L}}, {{0xED890FC5L}, {0xED890FC5L}}};
  int i, j;
  (*g_14) = (g_12[0][1] == (l_13[0][0], 1L));
  (*g_19) = (safe_add_func_int64_t_s_s(g_12[1][0], 0L));
  return (*g_19);
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_15, "g_15", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_31[i], "g_31[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
