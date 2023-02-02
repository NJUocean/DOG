// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const int32_t f0;
  const int32_t f1;
};

union U3 {
  unsigned f0 : 31;
  int8_t f1;
};

union U5 {
  int64_t f0;
  uint32_t f1;
  int16_t f2;
};

static volatile uint32_t g_12[2] = {8UL, 8UL};
static const uint16_t g_13 = 0x95D1L;
static union U1 g_23 = {0x3A4D1B40L};
static union U3 g_24 = {0UL};
static uint8_t g_27 = 1UL;
static int32_t g_35[5] = {0x43CCC099L, 0x43CCC099L, 0x43CCC099L, 0x43CCC099L, 0x43CCC099L};
static uint8_t g_42 = 7UL;
static int32_t g_55 = 0xF54CEAA9L;
static int32_t g_57 = 0xFAADAD2DL;
static union U5 g_58 = {1L};

static union U5 func_1(void);
static uint8_t func_20(union U1 p_21, union U3 p_22);

static union U5 func_1(void) {
  int8_t l_5 = 0x03L;
  int32_t *l_56 = &g_57;
  (*l_56) &= (((safe_mul_func_int8_t_s_s((+l_5), (safe_rshift_func_int32_t_s_u((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_12[0], g_13)), 0L)), 31)))) < 0xF6285890L) > (safe_div_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0xD2L, 4)), (((func_20(g_23, g_24) | g_23.f0) ^ g_23.f0) > g_23.f0))), 1UL) <= 0xA5L), g_23.f0)));
  return g_58;
}

static uint8_t func_20(union U1 p_21, union U3 p_22) {
  int32_t *l_40 = &g_35[4];
  for (g_24.f1 = 27; (g_24.f1 != 27); g_24.f1 = safe_add_func_uint8_t_u_u(g_24.f1, 5)) {
    g_27++;
  }
  for (g_27 = 7; (g_27 > 6); g_27 = safe_sub_func_int16_t_s_s(g_27, 3)) {
    int32_t *const l_34 = &g_35[2];
    for (g_24.f1 = 0; (g_24.f1 == (-13)); g_24.f1--) {
      int32_t *l_38[1];
      int i;
      for (i = 0; i < 1; i++)
        l_38[i] = &g_35[1];
      if (p_22.f0) {
        int32_t *l_37[5] = {&g_35[2], &g_35[2], &g_35[2], &g_35[2], &g_35[2]};
        int32_t **l_36 = &l_37[4];
        int i;
        (*l_36) = l_34;
        if (g_27)
          break;
      } else {
        int32_t **l_39 = &l_38[0];
        l_40 = ((*l_39) = l_38[0]);
      }
    }
    for (g_24.f1 = 0; (g_24.f1 <= 4); g_24.f1 += 1) {
      uint8_t *l_41 = &g_42;
      int32_t *l_54 = &g_55;
      int i;
      (*l_54) &= ((((void *)0 == &g_35[g_24.f1]) != (g_23.f0 > ((*l_41)++))) | ((p_21.f0 >= (safe_mod_func_uint64_t_u_u(((((safe_add_func_uint16_t_u_u((((*l_34) = ((safe_mul_func_int8_t_s_s((g_35[2] || 65534UL), ((8UL < (safe_add_func_int32_t_s_s((!(g_35[g_24.f1] != 4294967289UL)), g_23.f0))), p_22.f0))) && g_27)) || 1L), p_21.f0)) & p_21.f0), 0x270BB1DCL), g_13), 0x93DCEDB1A73B020BLL))), g_35[2]));
    }
  }
  return p_22.f0;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    transparent_crc(g_12[i], "g_12[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
  transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_35[i], "g_35[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_55, "g_55", print_hash_value);
  transparent_crc(g_57, "g_57", print_hash_value);
  transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
