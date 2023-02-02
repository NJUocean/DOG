// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  volatile int16_t f0;
  uint16_t f1;
};

union U4 {
  int16_t f0;
  uint32_t f1;
  uint64_t f2;
};

static const volatile union U2 g_2 = {-1L};
static int32_t g_16 = (-1L);
static int64_t g_28 = 0xF419C2B2E5F58CDCLL;
static int32_t *g_31 = &g_16;
static uint16_t g_37 = 0UL;

static int32_t func_1(void);
static uint32_t func_11(int8_t p_12, int64_t p_13);

static int32_t func_1(void) {
  int32_t l_21 = 0xC23EDB39L;
  int8_t l_24 = 8L;
  int8_t *l_25 = (void *)0;
  int8_t *l_26 = &l_24;
  int64_t *l_27 = &g_28;
  int32_t **l_42 = &g_31;
  if ((g_2, (((safe_rshift_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s(g_2.f0, (safe_sub_func_uint32_t_u_u(func_11((((*l_27) &= (safe_sub_func_int16_t_s_s(g_16, ((1UL && ((((((*l_26) = ((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((((l_21 ^ g_16) <= 0L) ^ g_16), ((((((safe_div_func_int32_t_s_s(l_24, g_16)), l_21) != l_24) < l_21), l_24) < g_16))), 1)), l_21)) != 255UL) && l_21) < l_21) | l_21)) < g_16)))), l_24), g_16), 0x3633E7A3L)))), g_16)), g_16)) < l_21), l_21))) {
    int64_t l_35 = 0xEC53312A7FAD5407LL;
    uint16_t *l_36 = &g_37;
    uint64_t l_38 = 0x8E972CE3C489718BLL;
    l_38 ^= ((*g_31) = (safe_add_func_uint16_t_u_u(g_2.f0, ((*l_36) = l_35))));
  } else {
    int32_t **l_39[4] = {&g_31, &g_31, &g_31, &g_31};
    int32_t **l_41 = &g_31;
    int32_t ***l_40[5];
    int i;
    for (i = 0; i < 5; i++)
      l_40[i] = &l_41;
    l_42 = (l_39[2] = &g_31);
  }
  return g_28;
}

static uint32_t func_11(int8_t p_12, int64_t p_13) {
  int32_t *l_29[5] = {&g_16, &g_16, &g_16, &g_16, &g_16};
  int32_t **l_30[3][3] = {{&l_29[1], &l_29[0], &l_29[1]}, {&l_29[1], &l_29[0], &l_29[1]}, {&l_29[1], &l_29[0], &l_29[1]}};
  const union U4 *l_32 = (void *)0;
  int i, j;
  g_31 = l_29[0];
  l_32 = l_32;
  return p_12;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
