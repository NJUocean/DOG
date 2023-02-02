// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  uint32_t f0;
  int16_t f1;
};

union U3 {
  const uint64_t f0;
  int16_t f1;
  volatile uint32_t f2;
};

static int16_t g_4 = 1L;
static int32_t g_5[2] = {0xDFE0091DL, 0xDFE0091DL};
static int16_t g_6 = 0x9892L;
static union U3 g_10 = {18446744073709551615UL};
static int32_t g_12[4] = {1L, 1L, 1L, 1L};
static int32_t *g_15 = &g_12[0];
static int64_t g_16[3] = {(-1L), (-1L), (-1L)};
static int8_t g_18 = 2L;
static uint32_t g_34 = 0x2B8FFD02L;
static volatile int32_t g_46 = 0xA4ADCF86L;
static volatile int32_t *g_45 = &g_46;
static volatile int32_t **g_44 = &g_45;
static volatile int32_t ***const volatile g_43 = &g_44;
static uint32_t g_53 = 0x3E821D2AL;
static volatile union U3 g_54 = {0xB879C93506F8A133LL};
static const int32_t *g_60 = &g_12[0];
static const int32_t **volatile g_59[3][1] = {{&g_60}, {&g_60}, {&g_60}};

static union U1 func_1(void);
static const int32_t *const func_7(const int32_t *p_8, int8_t p_9);

static union U1 func_1(void) {
  uint8_t l_2 = 0x0FL;
  int16_t *l_3 = &g_4;
  const int32_t *l_11 = &g_12[0];
  int32_t *l_14 = (void *)0;
  int32_t **l_13[5][3][2] = {{{&l_14, (void *)0}, {&l_14, &l_14}, {(void *)0, (void *)0}}, {{&l_14, &l_14}, {(void *)0, &l_14}, {&l_14, (void *)0}}, {{(void *)0, &l_14}, {&l_14, (void *)0}, {&l_14, &l_14}}, {{(void *)0, (void *)0}, {&l_14, &l_14}, {(void *)0, &l_14}}, {{&l_14, (void *)0}, {(void *)0, &l_14}, {&l_14, (void *)0}}};
  int8_t *l_17 = &g_18;
  const int32_t **l_61 = (void *)0;
  const int32_t **l_62[1];
  const int32_t **l_63 = &g_60;
  union U1 l_64[2] = {{4294967295UL}, {4294967295UL}};
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_62[i] = &g_60;
  (*l_63) = ((((*l_3) = l_2) < (g_6 = g_5[1])), func_7((g_10, l_11), (((g_15 = &g_12[2]) != &g_12[3]) <= ((g_16[0] = g_10.f0) || ((*l_17) = ((void *)0 == &g_12[1]))))));
  return l_64[0];
}

static const int32_t *const func_7(const int32_t *p_8, int8_t p_9) {
  uint32_t l_22 = 0xC5A74D4BL;
  int32_t l_31 = 0x7F9F41ADL;
  uint64_t l_32[4] = {18446744073709551608UL, 18446744073709551608UL, 18446744073709551608UL, 18446744073709551608UL};
  uint32_t *l_33 = &g_34;
  int32_t **l_35 = (void *)0;
  int32_t ***l_36 = &l_35;
  int i;
  (*g_15) &= ((p_9 < g_16[1]) == (!p_9));
  if ((l_22 | ((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(g_10.f0, 4)) | (g_4 && ((l_31 = (*g_15)) > l_32[0]))), ((*l_33) = 5UL)), (((*l_36) = l_35) == &g_15))), (p_9 != l_22))) & p_9), (*p_8))) <= (-1L)))) {
    int32_t ***l_47 = &l_35;
    int32_t l_52 = 0L;
    int32_t *l_55 = &l_31;
    (*l_55) ^= ((*g_15) = ((safe_lshift_func_uint16_t_u_s(((((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((*l_33) = (g_43 == l_47)), ((p_9, ((safe_mul_func_int32_t_s_s((*p_8), ((0x7311EBC8L == (((void *)0 != l_47) & ((65527UL == (safe_add_func_int8_t_s_s((g_6 && p_9), g_12[0]))) < (-1L)))) > g_16[2]))) || l_52)) < 0x34L))), g_5[0])) > g_53), g_54), p_9), g_16[0])) > p_9));
  } else {
    uint64_t *l_56 = &l_32[1];
    int32_t l_57 = 1L;
    int8_t *l_58 = &g_18;
    (*g_15) = (((*l_56) = (g_46, ((g_10, (&g_44 == (g_18, &l_35))) != g_16[0]))), (((l_57 && (((*l_58) = ((void *)0 != l_58)) && p_9)) ^ 0xAE7BE98BL) ^ 0xF8526697289F16C4LL));
  }
  return &g_12[3];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_12[i], "g_12[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 3; i++) {
    transparent_crc(g_16[i], "g_16[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_53, "g_53", print_hash_value);
  transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
