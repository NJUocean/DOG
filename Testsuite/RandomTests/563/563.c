// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  const int64_t f0;
};

static uint32_t g_15 = 18446744073709551615UL;
static int8_t g_17 = 0x3EL;
static int8_t *volatile g_26 = (void *)0;
static uint16_t g_30 = 0xA4B1L;
static int8_t g_33[5] = {0x57L, 0x57L, 0x57L, 0x57L, 0x57L};
static int32_t g_35 = 0x3FDE7504L;
static int32_t g_37 = 8L;
static int32_t g_46[4][4][5] = {{{1L, (-3L), (-1L), (-1L), (-1L)}, {(-6L), (-6L), (-7L), (-6L), (-6L)}, {(-1L), (-1L), (-1L), (-3L), 1L}, {(-6L), 0xE945D447L, 0xE945D447L, (-6L), 0xE945D447L}}, {{1L, (-1L), (-2L), (-1L), 1L}, {0xE945D447L, (-6L), 0xE945D447L, 0xE945D447L, (-6L)}, {1L, (-3L), (-1L), (-1L), (-1L)}, {(-6L), (-6L), (-7L), (-6L), (-6L)}}, {{(-1L), (-3L), (-2L), 0xCCC41425L, (-1L)}, {0xE945D447L, (-7L), (-7L), 0xE945D447L, (-7L)}, {(-1L), (-3L), 1L, (-3L), (-1L)}, {(-7L), 0xE945D447L, (-7L), (-7L), 0xE945D447L}}, {{(-1L), 0xCCC41425L, (-2L), (-3L), (-2L)}, {0xE945D447L, 0xE945D447L, (-6L), 0xE945D447L, 0xE945D447L}, {(-2L), (-3L), (-2L), 0xCCC41425L, (-1L)}, {0xE945D447L, (-7L), (-7L), 0xE945D447L, (-7L)}}};
static union U2 g_51 = {0x2C3978D11E8E103CLL};

static int8_t func_1(void);
static int8_t func_3(int64_t p_4);

static int8_t func_1(void) {
  uint64_t l_2 = 0x8D526D2E8588D0D3LL;
  int8_t *l_16 = &g_17;
  uint16_t *l_29 = &g_30;
  int32_t l_31 = 1L;
  uint64_t l_32 = 0x2ABAC89D73AE4C7BLL;
  uint16_t l_47 = 3UL;
  union U2 *l_50 = &g_51;
  if ((l_2 && func_3(((safe_div_func_uint16_t_u_u((l_31 ^= ((*l_29) = (safe_div_func_int8_t_s_s((((safe_rshift_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((*l_16) |= (safe_mul_func_uint16_t_u_u(g_15, 0x1B58L))) & ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_15, (safe_mul_func_int32_t_s_s(g_15, (safe_rshift_func_uint64_t_u_s(((void *)0 != g_26), g_15)))))), (safe_add_func_int8_t_s_s(g_15, l_2)))), l_2)), 18446744073709551609UL)), 9)) == g_15) >= g_15), g_15)))), 0x3D62L)), l_32)))) {
    int32_t *l_38 = &g_35;
    int32_t *l_39 = &g_35;
    int32_t *l_40 = &g_35;
    int32_t *l_41 = &g_35;
    int32_t *l_42 = &l_31;
    int32_t *l_43 = (void *)0;
    int32_t *l_44 = (void *)0;
    int32_t *l_45[4][2] = {{&l_31, &l_31}, {&l_31, &l_31}, {&l_31, &l_31}, {&l_31, &l_31}};
    union U2 **l_52 = &l_50;
    union U2 *l_54 = &g_51;
    union U2 **l_53 = &l_54;
    int i, j;
    l_47--;
    (*l_53) = ((*l_52) = l_50);
  } else {
    return l_32;
  }
  return l_2;
}

static int8_t func_3(int64_t p_4) {
  int32_t *l_34 = &g_35;
  for (g_30 = 0; (g_30 <= 4); g_30 += 1) {
    int32_t **l_36[2][1];
    int i, j;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 1; j++)
        l_36[i][j] = &l_34;
    }
    l_34 = l_34;
    for (p_4 = 0; (p_4 <= 4); p_4 += 1) {
      int i;
      (*l_34) = g_33[g_30];
    }
  }
  return g_37;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_33[i], "g_33[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_46[i][j][k], "g_46[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
