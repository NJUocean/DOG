// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S2 {
  unsigned f0 : 15;
};

union U5 {
  signed f0 : 2;
  int64_t f1;
};

static int32_t g_14 = 0xE5741311L;
static int64_t g_22 = 0xBDD48407374FD522LL;
static int64_t g_24 = 0x881DDA8DB8846B51LL;
static int64_t g_28 = 0xF1636717B38E5161LL;
static int64_t *g_27 = &g_28;
static union U5 g_34 = {-10L};
static const volatile union U5 g_36 = {1L};
static const volatile union U5 *volatile g_35[2] = {&g_36, &g_36};
static uint16_t g_47 = 9UL;
static uint8_t g_63 = 0x42L;
static volatile int32_t g_68 = 0x1AAE879CL;
static volatile int32_t g_69 = 7L;

static uint16_t func_1(void);
static int16_t func_7(uint32_t p_8, uint8_t p_9, int32_t p_10, struct S2 p_11, uint32_t p_12);

static uint16_t func_1(void) {
  uint16_t l_20[1];
  int64_t *l_21 = &g_22;
  int64_t *l_23 = &g_24;
  struct S2 l_31 = {20};
  int8_t l_60 = 0x7DL;
  uint8_t *l_61 = (void *)0;
  uint8_t *l_62 = &g_63;
  uint8_t l_64 = 1UL;
  int32_t l_67[3];
  int i;
  for (i = 0; i < 1; i++)
    l_20[i] = 0UL;
  for (i = 0; i < 3; i++)
    l_67[i] = (-1L);
  if (((((*l_62) = (+((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(0UL, func_7((~((((((g_14 & ((safe_unary_minus_func_uint8_t_u((((*l_23) = (safe_rshift_func_uint64_t_u_s((safe_lshift_func_int64_t_s_s(((*l_21) = l_20[0]), 0)), 35))) | (safe_sub_func_uint64_t_u_u(((l_20[0] > ((((void *)0 != l_23), g_27) != &g_28)), (safe_sub_func_int32_t_s_s((l_20[0] | 0xD7C8L), 1UL))), l_20[0]))))) | 0xA4A104ACL)) | g_28), l_20[0]) ^ g_28) & l_20[0]) >= g_14)), l_20[0], g_14, l_31, g_28))), l_60)), g_14))) >= 0x7CL), 0xCF68020CL)) {
    return l_64;
  } else {
    int32_t *l_65 = &g_14;
    int32_t *l_66[3];
    uint16_t l_70 = 0x1070L;
    int i;
    for (i = 0; i < 3; i++)
      l_66[i] = &g_14;
    ++l_70;
  }
  return g_28;
}

static int16_t func_7(uint32_t p_8, uint8_t p_9, int32_t p_10, struct S2 p_11, uint32_t p_12) {
  union U5 *l_33 = &g_34;
  union U5 **l_32[5] = {&l_33, &l_33, &l_33, &l_33, &l_33};
  int32_t l_39 = (-1L);
  uint16_t *l_46 = &g_47;
  int32_t l_59 = 6L;
  int i;
  g_35[0] = (void *)0;
  l_59 ^= (safe_add_func_uint16_t_u_u(l_39, (p_11, ((0x62L > p_10) > ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((*l_46)++), 1)), 7)), (safe_sub_func_uint8_t_u_u((0x554C62B4L <= g_28), (((((safe_mod_func_uint32_t_u_u(2UL, p_12)) <= (safe_mul_func_int32_t_s_s((+(safe_sub_func_uint32_t_u_u(g_36.f0, p_9))), g_14))) > 0xBBL) == p_10) >= g_22))))) | p_10)))));
  return g_14;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
  transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_63, "g_63", print_hash_value);
  transparent_crc(g_68, "g_68", print_hash_value);
  transparent_crc(g_69, "g_69", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
