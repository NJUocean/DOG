// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-6L);
static int32_t g_3[2][3] = {{0x3C692BEAL, 0x3C692BEAL, 0x3C692BEAL}, {0x3C692BEAL, 0x3C692BEAL, 0x3C692BEAL}};
static int32_t g_7 = 1L;
static int8_t g_14 = 0L;
static int32_t *g_25[3][1][3] = {{{(void *)0, (void *)0, (void *)0}}, {{&g_3[0][0], &g_3[0][0], &g_3[0][0]}}, {{(void *)0, (void *)0, (void *)0}}};
static int32_t **const volatile g_28 = &g_25[1][0][0];
static const int8_t g_57 = 0xF8L;
static const int8_t *g_56 = &g_57;

static int64_t func_1(void);
static int8_t *func_15(int8_t *p_16, int32_t p_17, int32_t *p_18, int8_t p_19, int32_t *p_20);

static int64_t func_1(void) {
  uint64_t l_8 = 0x6EB6B9DD952EAA29LL;
  int8_t *l_13 = &g_14;
  int32_t l_21 = 0x065C829EL;
  int32_t *l_22 = (void *)0;
  int32_t l_23 = 0x58E356ECL;
  int32_t **l_24[1];
  int i;
  for (i = 0; i < 1; i++)
    l_24[i] = (void *)0;
  for (g_3[1][0] = 0; (g_3[1][0] <= 22); g_3[1][0]++) {
    int32_t *l_6 = &g_7;
    (*l_6) ^= 0x6748F69FL;
    (*l_6) = l_8;
  }
  (*g_28) = ((safe_rshift_func_uint64_t_u_u(((g_3[1][1] >= (!(safe_unary_minus_func_int8_t_s(((*l_13) = l_8))))), ((g_56 = func_15(&g_14, (l_21 = 0x7D1AFD06L), l_22, l_23, (g_25[2][0][0] = &l_23))) != &g_57)), 16)), (*g_28));
  return g_3[1][1];
}

static int8_t *func_15(int8_t *p_16, int32_t p_17, int32_t *p_18, int8_t p_19, int32_t *p_20) {
  int32_t *l_34[1][2][2];
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++)
        l_34[i][j][k] = &g_3[0][1];
    }
  }
  for (g_7 = 1; (g_7 >= 0); g_7 -= 1) {
    uint64_t l_26 = 0x9D3CD3624B6749EFLL;
    int32_t *l_27 = &g_7;
    if (l_26)
      break;
    (*g_28) = l_27;
    for (l_26 = 0; (l_26 <= 1); l_26 += 1) {
      uint8_t l_31 = 0x33L;
      for (p_19 = 1; (p_19 >= 0); p_19 -= 1) {
        int32_t *l_29 = &g_3[1][0];
        int32_t *l_30 = (void *)0;
        int i, j;
        ++l_31;
      }
      for (p_19 = 0; (p_19 <= 0); p_19 += 1) {
        int i, j, k;
        g_25[(p_19 + 2)][p_19][g_7] = l_34[0][0][0];
        if ((*p_20))
          continue;
      }
    }
  }
  for (g_7 = 1; (g_7 >= 0); g_7 -= 1) {
    int32_t *l_45 = &g_3[1][0];
    int32_t **l_46 = (void *)0;
    const int32_t l_47 = 0x88A615B3L;
    int8_t **l_52 = (void *)0;
    (*p_20) = ((safe_add_func_int16_t_s_s(0L, (safe_div_func_int64_t_s_s(((-1L) & (((safe_div_func_int64_t_s_s(((0L < ((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((l_45 = l_34[0][0][0]) != ((*g_28) = p_20)), l_47)), (((&p_19 != (p_16 = ((p_17 = (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((p_19 > g_3[1][0]), 0xEFC5L)), p_19))), (void *)0))), 1UL) || l_47))) < g_3[1][0])) && p_19), 0x90EB5CFE74D024BFLL)) | g_7) ^ 4L)), g_7)))) == 0x7A89A43DL);
    for (p_19 = 1; (p_19 >= 0); p_19 -= 1) {
      int32_t **l_55 = &l_45;
      int i, j;
      (*p_20) ^= (safe_sub_func_int8_t_s_s(((g_3[p_19][g_7], p_18) != ((*l_55) = p_18)), p_17));
    }
  }
  return &g_14;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_57, "g_57", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
