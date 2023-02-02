// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  int64_t f0;
  signed f1 : 16;
  int32_t f2;
};

static uint16_t g_22 = 0UL;
static volatile uint64_t g_31 = 0x4FFD814383674579LL;
static int32_t g_35 = 0L;
static union U0 g_38 = {0xA8DB8846B51F0EF2LL};
static const union U0 *g_43 = &g_38;
static const union U0 **g_42 = &g_43;
static const union U0 ***volatile g_41 = &g_42;
static uint64_t g_49 = 0x8C0C84A4E7FB108FLL;
static uint8_t g_62 = 0xC0L;
static union U0 ***g_66 = (void *)0;
static int32_t g_70 = 7L;
static int32_t *const volatile g_69 = &g_70;

static uint16_t func_1(void);
static uint8_t func_7(const int32_t p_8, const union U0 *p_9, union U0 p_10);

static uint16_t func_1(void) {
  int64_t l_6 = 1L;
  union U0 l_19 = {-1L};
  const union U0 **l_71[3];
  union U0 *l_72 = &g_38;
  int i;
  for (i = 0; i < 3; i++)
    l_71[i] = &g_43;
  l_72 = (((safe_add_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_u(l_6, 2)), func_7((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint64_t_u_s((safe_mod_func_uint8_t_u_u((l_19, (safe_div_func_int16_t_s_s((((++g_22) & (((safe_rshift_func_uint32_t_u_s(((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_31, ((~(l_6 > ((safe_mul_func_int8_t_s_s((((((g_35 ^ (0x7BL & (((safe_mul_func_uint16_t_u_u(g_35, (g_38, (l_6, g_38.f0)))), (void *)0) == &g_38))) < g_38.f0) && 0x4F16L), 0xE5L) == l_19.f0), g_35)) > l_19.f0))) && 8UL))), l_19.f0)) && g_31), 7)), 1UL) & g_38.f0)) > l_19.f0), g_38.f0))), g_35)), l_6)), g_38.f0)), l_19.f0)), &l_19, l_19)) & 0x47L), g_38.f0)) == l_6), (void *)0);
  return l_6;
}

static uint8_t func_7(const int32_t p_8, const union U0 *p_9, union U0 p_10) {
  const union U0 *l_40 = &g_38;
  const union U0 **l_39 = &l_40;
  uint64_t *l_48[3][3] = {{&g_49, (void *)0, &g_49}, {&g_49, (void *)0, &g_49}, {&g_49, (void *)0, &g_49}};
  int32_t l_50[1][5][3] = {{{0L, 0L, 0x4FF6A91AL}, {0L, 0x47D05199L, (-1L)}, {(-4L), 0L, (-4L)}, {(-4L), 0L, 0L}, {0L, (-4L), (-4L)}}};
  int32_t l_57 = 0x0AC80EABL;
  uint8_t *l_61 = &g_62;
  union U0 ***l_64 = (void *)0;
  union U0 ****l_65 = &l_64;
  union U0 ****l_67 = &g_66;
  uint32_t l_68[1];
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_68[i] = 0UL;
  (*g_41) = l_39;
  (*g_69) &= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int64_t_s_s(((((((l_50[0][0][0] = p_10.f0) == (safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u((g_49 = (g_38.f0 > l_57)), (l_68[0] = (safe_add_func_uint16_t_u_u((((*l_61) = (!p_10.f0)) ^ (((!g_22), (g_22 <= (((*l_65) = l_64) == ((*l_67) = g_66)))) && l_57)), 0x58B5L))))) >= 0x7DL) <= g_38.f0), 0xFBB05D09421A0E57LL)), 1L))) < 0x20C2L) <= p_8) & l_57), 0x6AF5756627F1A9F1LL), g_22)), l_57)) > p_10.f0);
  return l_68[0];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_62, "g_62", print_hash_value);
  transparent_crc(g_70, "g_70", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
