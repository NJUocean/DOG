// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint64_t g_17[5][4][1] = {{{0x8531D14CD49598AALL}, {18446744073709551615UL}, {0x8531D14CD49598AALL}, {18446744073709551615UL}}, {{0x8531D14CD49598AALL}, {18446744073709551615UL}, {0x8531D14CD49598AALL}, {18446744073709551615UL}}, {{0x8531D14CD49598AALL}, {18446744073709551615UL}, {0x8531D14CD49598AALL}, {18446744073709551615UL}}, {{0x8531D14CD49598AALL}, {18446744073709551615UL}, {0x8531D14CD49598AALL}, {18446744073709551615UL}}, {{0x8531D14CD49598AALL}, {18446744073709551615UL}, {0x8531D14CD49598AALL}, {18446744073709551615UL}}};
static int8_t g_27 = (-9L);
static int32_t g_30 = (-1L);
static int32_t *g_29 = &g_30;
static int64_t g_33[2][4] = {{(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}};
static uint16_t g_35[3] = {0UL, 0UL, 0UL};

static uint8_t func_1(void);
static int32_t *func_2(int32_t p_3, int32_t *p_4, int32_t p_5, const int32_t *p_6);

static uint8_t func_1(void) {
  const int32_t *const l_7 = (void *)0;
  int32_t l_10 = 0x7C1188E1L;
  int64_t l_23[4];
  int64_t *l_24 = (void *)0;
  int64_t *l_25 = &l_23[1];
  uint8_t l_26 = 0x25L;
  uint32_t l_28 = 7UL;
  int32_t **l_38 = &g_29;
  int32_t *l_40[5][4] = {{&l_10, &l_10, &l_10, &l_10}, {&l_10, &l_10, &l_10, &l_10}, {&l_10, &l_10, &l_10, &l_10}, {&l_10, &l_10, &l_10, &l_10}, {&l_10, &l_10, &l_10, &l_10}};
  int32_t **l_39 = &l_40[4][3];
  int i, j;
  for (i = 0; i < 4; i++)
    l_23[i] = 1L;
  (*l_39) = ((*l_38) = func_2((((void *)0 != l_7) | (((safe_add_func_uint32_t_u_u(((l_10 && ((safe_div_func_uint64_t_u_u(((((void *)0 == &l_10) | 8L) >= (((safe_add_func_int16_t_s_s((safe_rshift_func_uint32_t_u_s((l_28 |= (g_17[0][1][0], ((safe_sub_func_int8_t_s_s(g_17[0][1][0], (((safe_mul_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((((*l_25) = l_23[1]) >= l_26))), g_27)) <= g_27) >= g_27))) > 0UL))), l_26)), g_27)), g_17[0][1][0]) && 0x8AAC1E0F758FC567LL)), l_10)), g_17[1][1][0])), 4294967294UL), g_27)) | l_26) <= 0x3526L)), g_29, (*g_29), &g_30));
  return g_35[0];
}

static int32_t *func_2(int32_t p_3, int32_t *p_4, int32_t p_5, const int32_t *p_6) {
  int64_t *l_32 = &g_33[0][1];
  int64_t **l_31[5][5][1] = {{{(void *)0}, {&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {(void *)0}, {&l_32}}, {{(void *)0}, {&l_32}, {&l_32}, {&l_32}, {&l_32}}, {{&l_32}, {&l_32}, {&l_32}, {(void *)0}, {&l_32}}, {{(void *)0}, {&l_32}, {&l_32}, {&l_32}, {&l_32}}};
  int32_t *l_34[5][3] = {{&g_30, &g_30, &g_30}, {(void *)0, (void *)0, (void *)0}, {&g_30, &g_30, &g_30}, {(void *)0, (void *)0, (void *)0}, {&g_30, &g_30, &g_30}};
  int i, j, k;
  l_31[1][1][0] = (void *)0;
  --g_35[0];
  return l_34[3][0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_17[i][j][k], "g_17[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_33[i][j], "g_33[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 3; i++) {
    transparent_crc(g_35[i], "g_35[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
