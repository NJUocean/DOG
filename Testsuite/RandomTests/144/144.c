// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const volatile unsigned f0 : 30;
  signed f1 : 30;
  signed f2 : 2;
  volatile unsigned f3 : 15;
  unsigned f4 : 13;
};

union U1 {
  uint64_t f0;
  int32_t f1;
  uint8_t f2;
  int32_t f3;
};

union U2 {
  int64_t f0;
  int8_t f1;
  int32_t f2;
};

union U3 {
  uint32_t f0;
  int64_t f1;
  uint32_t f2;
  uint8_t f3;
};

union U4 {
  int32_t f0;
  volatile int16_t f1;
  uint8_t f2;
};

union U5 {
  volatile int16_t f0;
  const volatile uint32_t f1;
};

static uint8_t g_11 = 0x35L;
static uint32_t g_15 = 0xB5725D36L;
static volatile struct S0 g_27 = {18213, -23519, 1, 112, 19};
static volatile union U1 g_28 = {0xDAE89405DBD55ADBLL};
static volatile union U4 g_30 = {0x5EA37665L};
static union U3 *g_32 = (void *)0;
static union U3 g_34[1][3] = {{{4294967295UL}, {4294967295UL}, {4294967295UL}}};
static int8_t g_37 = 1L;
static volatile union U5 g_47[4] = {{-7L}, {-7L}, {-7L}, {-7L}};
static union U4 g_50 = {-6L};

static union U4 func_1(void);
static union U3 *func_2(uint64_t p_3, uint32_t p_4, const uint16_t p_5, union U3 *p_6);

static union U4 func_1(void) {
  const uint32_t l_12 = 0x0DB959C4L;
  uint32_t *l_13 = (void *)0;
  uint32_t *l_14 = &g_15;
  int32_t l_16 = 0x5F7919ADL;
  union U2 l_19[1][2][2] = {{{{1L}, {1L}}, {{1L}, {1L}}}};
  uint64_t l_29 = 1UL;
  int8_t l_31[3][1][1];
  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 1; k++)
        l_31[i][j][k] = (-4L);
    }
  }
  g_32 = func_2((safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s((g_11, l_12), (l_16 = ((*l_14) = l_12)))), (safe_lshift_func_int32_t_s_u((l_19[0][1][1], ((safe_unary_minus_func_int32_t_s(((0x0A98CEEFL >= (safe_div_func_int64_t_s_s((((((((safe_mod_func_int64_t_s_s(((g_11 <= l_19[0][1][1].f0) ^ (l_12 <= (safe_sub_func_uint8_t_u_u((((g_27, g_28), 0x8A87EA82BC906383LL) || l_12), g_11)))), l_29)) <= l_29), g_30), 0x394A737BL) == l_29) == l_12) || g_27.f3), l_12))) > g_11))), 5L)), 0)))), l_31[0][0][0], l_19[0][1][1].f0, g_32);
  return g_50;
}

static union U3 *func_2(uint64_t p_3, uint32_t p_4, const uint16_t p_5, union U3 *p_6) {
  union U3 *l_33 = &g_34[0][2];
  uint32_t *l_35 = (void *)0;
  int8_t *l_36 = &g_37;
  int32_t l_48 = 0L;
  int32_t *l_49 = &l_48;
  (*l_49) = ((((g_15 = (g_27.f4 | (l_33 == l_33))), 0x24L) | ((*l_36) &= p_4)) && (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint32_t_u_u((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint32_t_u_s((g_47[2], l_48), 0)))), 0)), p_3)), 255UL)));
  return &g_34[0][1];
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
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
  transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
  transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
  transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
  transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
  transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_34[i][j].f0, "g_34[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_37, "g_37", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_47[i].f0, "g_47[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
