// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_12 = (-1L);
static int32_t *volatile *volatile g_25 = (void *)0;
static int32_t *g_27 = &g_12;
static int32_t **g_26 = &g_27;
static int32_t **const g_30 = &g_27;
static int64_t g_33 = 9L;

static uint16_t func_1(void);
static int32_t *func_2(int32_t *p_3);

static uint16_t func_1(void) {
  uint8_t l_8 = 253UL;
  int32_t *l_11 = &g_12;
  int32_t **l_13 = &l_11;
  const int32_t *l_14 = &g_12;
  int8_t l_31[3];
  int64_t *l_32 = &g_33;
  int16_t l_34 = 0x6572L;
  int64_t l_51[2];
  int i;
  for (i = 0; i < 3; i++)
    l_31[i] = (-1L);
  for (i = 0; i < 2; i++)
    l_51[i] = 0xBCEC63F78CAFACA8LL;
  (*l_13) = func_2((((safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(l_8, (((safe_sub_func_int8_t_s_s((((*l_13) = l_11) == l_14), ((safe_mul_func_int64_t_s_s(((*l_32) = (safe_mod_func_uint32_t_u_u(((((*l_14) == (l_31[1] &= (safe_mul_func_int8_t_s_s((~(safe_sub_func_uint32_t_u_u(0xC2D621ECL, ((safe_unary_minus_func_int64_t_s((g_12 & (g_25 != g_26)))) != (safe_div_func_uint8_t_u_u((g_30 == (void *)0), 7L)))))), g_12)))) < (*l_14)) && 1L), g_12))), g_12)) >= 0xBCL))) & (*l_14)) != g_12))) | 0L), 3)) ^ l_34), (*l_13)));
  return l_51[1];
}

static int32_t *func_2(int32_t *p_3) {
  const int8_t l_41 = 0L;
  int32_t *l_43[1];
  int i;
  for (i = 0; i < 1; i++)
    l_43[i] = &g_12;
  for (g_12 = 1; (g_12 == 8); ++g_12) {
    uint32_t l_42[4][3][3] = {{{4294967287UL, 0x776E9F81L, 9UL}, {0xDDA259C4L, 0xDDA259C4L, 0x3DEE6EE3L}, {4294967295UL, 0xDDA259C4L, 0x46E1D67AL}}, {{5UL, 0x776E9F81L, 0xDDA259C4L}, {8UL, 0x770AACC7L, 6UL}, {9UL, 5UL, 0xDDA259C4L}}, {{0xE56A96DAL, 0x46E1D67AL, 0x46E1D67AL}, {0UL, 0x71603728L, 0x3DEE6EE3L}, {0UL, 0x3DEE6EE3L, 9UL}}, {{0xE56A96DAL, 4294967295UL, 4294967295UL}, {9UL, 8UL, 1UL}, {8UL, 4294967295UL, 4294967287UL}}};
    int32_t **l_50[4][3][5] = {{{(void *)0, &l_43[0], &l_43[0], (void *)0, &l_43[0]}, {&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}, {&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}}, {{&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}, {&l_43[0], (void *)0, &l_43[0], &l_43[0], (void *)0}, {&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}}, {{&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}, {&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}, {&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}}, {{&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}, {&l_43[0], &l_43[0], &l_43[0], (void *)0, &l_43[0]}, {&l_43[0], &l_43[0], &l_43[0], &l_43[0], &l_43[0]}}};
    int i, j, k;
    (*g_26) = p_3;
    p_3 = (((((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(l_41, 1UL)), ((l_42[2][2][1] & l_42[2][2][1]) && g_33))) == (((((*g_30) = l_43[0]) != ((safe_rshift_func_int64_t_s_s((g_33, (l_42[0][1][0] & (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_12 != l_42[2][2][1]), l_42[2][2][1])), g_33)))), g_33)), (void *)0)), 0x88L) & l_42[2][2][1])) ^ l_42[3][1][1]) & 0x02A9L), (void *)0);
  }
  return (*g_26);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
