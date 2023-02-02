// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint8_t f0;
};
#pragma pack(pop)

static int32_t g_2 = 0x108F8256L;
static int32_t g_5 = 0L;
static struct S0 g_16 = {0x5BL};
static int32_t g_33 = 0x81DDA8DBL;

static int16_t func_1(void);
static int16_t func_14(struct S0 p_15);

static int16_t func_1(void) {
  int16_t l_31 = 0x8033L;
  uint16_t l_34 = 0x1F0EL;
  for (g_2 = 0; (g_2 < (-9)); g_2--) {
    struct S0 *l_20 = &g_16;
    int32_t l_30 = 0xAF7BDD48L;
    for (g_5 = 0; (g_5 >= (-4)); g_5 = safe_sub_func_int16_t_s_s(g_5, 6)) {
      struct S0 *l_21 = &g_16;
      struct S0 **l_22 = &l_21;
      int32_t *l_32 = &g_33;
      (*l_32) &= (safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(g_5, (safe_rshift_func_uint16_t_u_u(0x6EC1L, ((func_14(g_16), (g_16.f0, (safe_sub_func_uint8_t_u_u(((g_16.f0, l_20) != ((*l_22) = l_21)), (safe_lshift_func_uint16_t_u_s((+(safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_5, g_16.f0)), 0xF3L))), 12)))))) <= g_5))))) | l_30), l_31));
    }
  }
  return l_34;
}

static int16_t func_14(struct S0 p_15) {
  struct S0 *l_17[4] = {&g_16, &g_16, &g_16, &g_16};
  int i;
  g_16 = (p_15 = p_15);
  for (p_15.f0 = 0; (p_15.f0 <= 3); p_15.f0 += 1) {
    if (p_15.f0)
      break;
  }
  return g_2;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
