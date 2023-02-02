// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  uint32_t f0;
  uint32_t f1;
  const int8_t f2;
  volatile uint32_t f3;
};

static int8_t g_10[4] = {0x23L, 0x23L, 0x23L, 0x23L};
static int32_t g_17[4] = {6L, 6L, 6L, 6L};
static int32_t g_22 = 2L;
static int32_t *g_21 = &g_22;
static int32_t *g_25[1][3] = {{(void *)0, (void *)0, (void *)0}};
static uint64_t g_34[2] = {1UL, 1UL};
static int32_t g_45 = 0L;
static int32_t g_46[2][5][2] = {{{1L, 0xE61175C8L}, {0x05E2623EL, 0xE61175C8L}, {1L, 0x05E2623EL}, {0x5FF9B037L, 0x5FF9B037L}, {0x5FF9B037L, 0x05E2623EL}}, {{1L, 0xE61175C8L}, {0x05E2623EL, 0xE61175C8L}, {1L, 0x05E2623EL}, {0x5FF9B037L, 0x5FF9B037L}, {0x5FF9B037L, 0x05E2623EL}}};
static int16_t g_50 = 0x6512L;
static union U1 g_54[4][4] = {{{18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}}, {{18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}}, {{18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}}, {{18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}}};

static const uint32_t func_1(void);
static int32_t func_2(uint8_t p_3);

static const uint32_t func_1(void) {
  int32_t l_6 = 0x1551DA62L;
  int8_t *l_9[5] = {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0};
  union U1 *const l_53 = &g_54[0][1];
  int i;
  if (func_2((safe_add_func_int8_t_s_s((l_6 = (l_6 == (safe_rshift_func_uint32_t_u_u(0x9E672CA3L, 16)))), 0x5DL)))) {
    for (g_45 = 0; (g_45 <= 17); g_45++) {
      if (l_6)
        break;
    }
  } else {
    union U1 *l_56 = (void *)0;
    union U1 **l_55 = &l_56;
    (*l_55) = l_53;
  }
  return g_10[2];
}

static int32_t func_2(uint8_t p_3) {
  int32_t *l_16 = &g_17[1];
  int8_t *l_20 = &g_10[2];
  int32_t *l_24 = &g_22;
  int32_t **l_23[3];
  uint64_t *l_33 = &g_34[0];
  uint32_t l_35 = 0UL;
  int i;
  for (i = 0; i < 3; i++)
    l_23[i] = &l_24;
  if ((safe_unary_minus_func_uint16_t_u((((-3L) && (safe_mul_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((*l_24) = (((*l_16) = g_10[3]) > (safe_lshift_func_int8_t_s_s(p_3, ((l_20 == (void *)0) | ((((((((g_21 = g_21) != (g_25[0][1] = l_16)), ((safe_div_func_int16_t_s_s((g_10[2] && (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint64_t_u_s(((*l_33) = (safe_mod_func_int64_t_s_s((&g_25[0][1] == &l_16), p_3))), p_3))))), (*l_24))) == p_3)) == p_3) | g_10[2]) && p_3) != (*l_24)) & g_10[2])))))) | g_10[2]), 1UL)), 0x60F9AA2AAFA0B2B0LL))) > p_3)))) {
    return l_35;
  } else {
    int32_t *const l_44[4][4] = {{&g_45, &g_45, &g_45, &g_45}, {&g_45, &g_45, &g_45, &g_45}, {&g_45, &g_45, &g_45, &g_45}, {&g_45, &g_45, &g_45, &g_45}};
    int32_t *const *l_43[4] = {&l_44[1][3], &l_44[1][3], &l_44[1][3], &l_44[1][3]};
    int32_t *const **l_42 = &l_43[3];
    int16_t *l_49 = &g_50;
    int i, j;
    (*g_21) = ((safe_rshift_func_int8_t_s_s((g_34[0] && (safe_div_func_int8_t_s_s(p_3, ((*l_20) = (g_22 & g_34[0]))))), 2)) ^ ((((&g_22 != (void *)0) <= (safe_sub_func_int32_t_s_s(((*l_16) = (((&l_24 != ((*l_42) = &l_16)), (safe_mod_func_int16_t_s_s(((*l_49) = p_3), g_34[0]))) >= 65532UL)), 0x074C89AEL))) > 0UL) ^ 0UL));
  }
  return p_3;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 4; i++) {
    transparent_crc(g_17[i], "g_17[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_22, "g_22", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_34[i], "g_34[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_45, "g_45", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_46[i][j][k], "g_46[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_50, "g_50", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_54[i][j].f0, "g_54[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
