// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile int32_t f0;
  const signed f1 : 30;
  const int32_t f2;
  const volatile int32_t f3;
};

static uint32_t g_6[3] = {0x9AC196A1L, 0x9AC196A1L, 0x9AC196A1L};
static volatile union U0 g_24 = {-8L};
static int8_t g_27 = 0xC0L;
static const int32_t g_29[1][1] = {{0L}};
static uint32_t g_45 = 0x07758A8CL;
static int32_t g_48 = 0xB9ABC19AL;

static int16_t func_1(void);
static int32_t func_2(int32_t p_3, uint16_t p_4);

static int16_t func_1(void) {
  int64_t l_5 = 5L;
  int32_t *l_46 = (void *)0;
  int32_t *l_47 = &g_48;
  (*l_47) |= func_2(l_5, g_6[1]);
  return (*l_47);
}

static int32_t func_2(int32_t p_3, uint16_t p_4) {
  uint32_t l_13 = 0xA50B5F0BL;
  int8_t *l_25 = (void *)0;
  int8_t *l_26 = &g_27;
  const int32_t *l_28 = &g_29[0][0];
  if (((safe_add_func_uint64_t_u_u((safe_mul_func_int64_t_s_s((safe_mul_func_int16_t_s_s(1L, l_13)), (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_6[1], g_6[1])), (safe_lshift_func_int64_t_s_u(((safe_sub_func_int64_t_s_s(((g_24, 18446744073709551615UL) || ((((*l_26) = (g_24.f0, l_13)) != (g_6[0] | g_6[1])) || p_3)), p_3)) >= p_3), 11)))), l_13)))), 1UL)) >= g_6[1])) {
    const int32_t **l_30 = &l_28;
    (*l_30) = l_28;
  } else {
    int8_t *l_31 = &g_27;
    int32_t l_34 = 0L;
    int32_t *l_38 = &l_34;
    int32_t **l_37[2];
    uint32_t *l_44 = &g_45;
    int i;
    for (i = 0; i < 2; i++)
      l_37[i] = &l_38;
    (*l_38) = (((void *)0 != l_31) >= ((safe_rshift_func_uint32_t_u_u((l_34 | (safe_rshift_func_int64_t_s_u((((void *)0 == l_37[0]) > ((((safe_div_func_uint32_t_u_u(((*l_44) = ((safe_add_func_int64_t_s_s(p_4, (!(((*l_28) != ((*l_38), (l_31 != l_25))), (-1L))))), 7UL)), p_4)) || g_24.f0) && (*l_28)) <= (*l_28))), g_29[0][0]))), 24)) | (-1L)));
    return g_45;
  }
  return p_4;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_29[i][j], "g_29[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
