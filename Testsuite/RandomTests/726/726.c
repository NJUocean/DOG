// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint8_t g_4[4][3][1] = {{{1UL}, {0xEAL}, {0x3CL}}, {{0UL}, {0x3CL}, {0xEAL}}, {{1UL}, {0xEAL}, {0x3CL}}, {{0UL}, {0x3CL}, {0xEAL}}};
static uint64_t g_22 = 18446744073709551611UL;
static uint8_t g_25 = 250UL;
static int8_t g_29 = 0x71L;
static int8_t g_30 = 0xA7L;
static int64_t g_33 = 0x0B137D3709E8E548LL;
static uint8_t g_39 = 1UL;
static int32_t g_44 = (-1L);
static int32_t *g_43[1][4][2] = {{{(void *)0, (void *)0}, {(void *)0, (void *)0}, {(void *)0, (void *)0}, {(void *)0, (void *)0}}};
static int32_t **volatile g_42 = &g_43[0][1][0];
static int32_t *volatile g_46[2][3][5] = {{{&g_44, &g_44, &g_44, &g_44, &g_44}, {(void *)0, &g_44, (void *)0, &g_44, (void *)0}, {&g_44, &g_44, &g_44, &g_44, &g_44}}, {{&g_44, &g_44, &g_44, &g_44, &g_44}, {&g_44, &g_44, &g_44, &g_44, &g_44}, {(void *)0, &g_44, (void *)0, &g_44, (void *)0}}};
static int32_t *volatile g_47[4][4][2] = {{{&g_44, &g_44}, {(void *)0, &g_44}, {&g_44, &g_44}, {&g_44, &g_44}}, {{(void *)0, &g_44}, {&g_44, &g_44}, {(void *)0, &g_44}, {&g_44, &g_44}}, {{&g_44, &g_44}, {(void *)0, &g_44}, {&g_44, &g_44}, {&g_44, &g_44}}, {{&g_44, &g_44}, {&g_44, &g_44}, {&g_44, &g_44}, {&g_44, &g_44}}};

static uint32_t func_1(void);
static uint16_t func_5(int8_t p_6, int16_t p_7, int64_t p_8, uint16_t p_9, int16_t p_10);

static uint32_t func_1(void) {
  uint32_t l_16[3];
  uint8_t *l_23 = (void *)0;
  uint8_t *l_24 = &g_25;
  int32_t l_26 = (-4L);
  int64_t l_27 = 6L;
  int8_t *l_28[4][5] = {{(void *)0, (void *)0, &g_29, (void *)0, (void *)0}, {&g_29, (void *)0, &g_29, &g_29, (void *)0}, {(void *)0, &g_29, &g_29, (void *)0, &g_29}, {(void *)0, (void *)0, &g_29, (void *)0, (void *)0}};
  int32_t l_45 = 0xE1DC630DL;
  int32_t *l_48 = &g_44;
  int32_t **l_49 = &l_48;
  int i, j;
  for (i = 0; i < 3; i++)
    l_16[i] = 18446744073709551614UL;
  (*l_48) = (safe_add_func_uint8_t_u_u((l_45 ^= ((g_4[2][2][0], func_5((((((safe_lshift_func_uint8_t_u_s((!(g_4[2][0][0], g_4[2][2][0])), 1)) != (g_29 = (safe_div_func_uint8_t_u_u(l_16[1], (l_27 |= ((l_26 = (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint64_t_u(((((safe_div_func_uint16_t_u_u(l_16[1], l_16[1])) ^ ((*l_24) = g_22)), l_16[1]), (((((l_16[2] >= l_16[1]) == g_25) < l_16[0]) == l_16[1]), l_16[1])))) || g_22), g_22))), l_16[2])))))) >= l_16[1]) == l_16[1]) <= g_22), l_16[2], g_22, g_22, g_22)) != l_16[0])), g_44));
  (*l_49) = &g_44;
  return (**l_49);
}

static uint16_t func_5(int8_t p_6, int16_t p_7, int64_t p_8, uint16_t p_9, int16_t p_10) {
  int32_t *l_31 = (void *)0;
  int32_t l_32 = 0x1B0CE7AEL;
  int32_t *l_34 = &l_32;
  int32_t *l_35 = &l_32;
  int32_t *l_36 = &l_32;
  int32_t *l_37 = &l_32;
  int32_t *l_38[2][1][2];
  int i, j, k;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 2; k++)
        l_38[i][j][k] = &l_32;
    }
  }
  ++g_39;
  (*g_42) = &l_32;
  return g_39;
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
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
