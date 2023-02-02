// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int32_t f0;
  const volatile int32_t f1;
  const volatile int64_t f2;
  const volatile int32_t f3;
  int32_t f4;
};

static volatile int16_t g_15 = 0x92F1L;
static int32_t g_25 = 0xD1D2A6F9L;
static uint8_t g_28 = 0UL;
static int32_t g_32 = 0x43DEE6EEL;
static uint8_t g_43 = 0UL;
static int32_t *volatile g_51 = &g_32;
static struct S0 g_52 = {0x1002A956L, 2L, 0xDFAC86E89BE308DDLL, 0L, 7L};

static struct S0 func_1(void);
static uint16_t func_2(int32_t p_3, uint32_t p_4, uint8_t p_5);

static struct S0 func_1(void) {
  int32_t l_6 = 1L;
  const uint32_t l_26 = 1UL;
  uint8_t *l_27 = &g_28;
  int32_t l_41 = 0x92FB38A8L;
  int32_t l_42 = 0L;
  if ((func_2(l_6, l_6, ((*l_27) ^= (safe_rshift_func_int64_t_s_s((((safe_rshift_func_int32_t_s_s((l_6 & (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(0x14L, 1L)), (((g_15 || 4294967295UL) > (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((+((safe_div_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(g_25, (((l_6 && (-4L)) ^ l_6) | l_6))) & g_25) != 0x7218L), l_6)) > l_26)), g_25)), l_6))) || 0UL)), 5))), l_6)) & g_25), g_15), l_6)))), 0x1D67A3D5L)) {
    int32_t *l_34 = &l_6;
    int32_t *l_35 = &g_32;
    int32_t *l_36 = &l_6;
    int32_t *l_37 = &g_32;
    int32_t *l_38 = (void *)0;
    int16_t l_39 = 0xC461L;
    int32_t *l_40[3];
    int i;
    for (i = 0; i < 3; i++)
      l_40[i] = &g_32;
    --g_43;
  } else {
    uint32_t l_50 = 9UL;
    for (g_28 = 0; (g_28 == 16); g_28 = safe_add_func_uint16_t_u_u(g_28, 5)) {
      for (l_6 = 0; (l_6 >= (-12)); --l_6) {
        (*g_51) = l_50;
      }
      if (l_41)
        continue;
    }
  }
  return g_52;
}

static uint16_t func_2(int32_t p_3, uint32_t p_4, uint8_t p_5) {
  uint8_t l_33 = 0xF4L;
  for (p_4 = 0; (p_4 < 59); ++p_4) {
    int32_t *l_31 = &g_32;
    (*l_31) |= 0x37280DDAL;
  }
  return l_33;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_43, "g_43", print_hash_value);
  transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
  transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
  transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
  transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
  transparent_crc(g_52.f4, "g_52.f4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
