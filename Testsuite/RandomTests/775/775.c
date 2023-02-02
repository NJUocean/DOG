// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  const volatile int32_t f0;
  const int32_t f1;
};
#pragma pack(pop)

static volatile int32_t g_2 = 0x99FB023EL;
static int32_t g_3 = 0xDE05DAE5L;
static struct S0 g_22 = {-6L, 1L};
static int8_t g_32 = 0x56L;
static uint64_t g_35 = 0UL;
static uint8_t g_36 = 246UL;
static int32_t *volatile g_38 = (void *)0;
static int32_t g_40 = 0x1CD5CCFDL;
static int32_t *volatile g_39 = &g_40;

static uint32_t func_1(void);
static uint64_t func_12(int64_t p_13, const int64_t p_14);

static uint32_t func_1(void) {
  const int32_t l_8 = 0xDEAD9BACL;
  for (g_3 = 0; (g_3 > 16); g_3 = safe_add_func_int64_t_s_s(g_3, 1)) {
    uint8_t l_30 = 0UL;
    int8_t *l_31[1][2][4] = {{{&g_32, &g_32, &g_32, &g_32}, {&g_32, &g_32, &g_32, &g_32}}};
    int32_t l_33 = 5L;
    uint64_t *l_34 = &g_35;
    int i, j, k;
    (*g_39) = (safe_div_func_uint32_t_u_u(l_8, ((safe_mul_func_uint64_t_u_u((~(1L < 4L)), (func_12((g_36 |= (((*l_34) = ((8UL || (safe_mul_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((~((l_33 = (safe_sub_func_uint16_t_u_u(((g_22, ((safe_add_func_int16_t_s_s(g_2, ((safe_rshift_func_int16_t_s_u(g_3, 1)) != ((~((safe_div_func_int32_t_s_s(g_3, 0x5FB26C4FL)), g_3)), 0xF8ABFF5ECCE35A12LL)))) <= l_30)) == (-1L)), l_30))) | l_8)) || 0x06E82A74L), 3)), g_3))) | 0UL)) && g_22.f1)), l_8) != 0xA058A13C444C9CADLL))), 0xA44F34D8L)));
    for (g_32 = 0; (g_32 > (-6)); g_32 = safe_sub_func_uint64_t_u_u(g_32, 9)) {
      for (l_33 = 0; (l_33 >= 0); l_33 -= 1) {
        return g_36;
      }
      g_40 ^= (g_22.f0 < l_33);
    }
  }
  return l_8;
}

static uint64_t func_12(int64_t p_13, const int64_t p_14) {
  uint8_t l_37 = 1UL;
  g_2 = l_37;
  return p_14;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
  transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
