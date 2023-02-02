// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  signed f0 : 9;
  unsigned f1 : 26;
  signed f2 : 20;
  unsigned f3 : 16;
};

union U2 {
  uint64_t f0;
  volatile uint8_t f1;
};

static int16_t g_14 = 0x2687L;
static const volatile struct S0 g_18 = {-12, 3223, -317, 41};
static struct S0 g_20 = {8, 7878, 178, 115};
static int32_t g_23 = 0x63C10B42L;
static int32_t g_41 = 0xB7DFF937L;
static uint8_t g_47 = 255UL;
static int16_t g_61 = 0xE7BEL;
static uint16_t g_63 = 0x2472L;
static volatile union U2 g_66 = {18446744073709551606UL};

static int64_t func_1(void);
static uint8_t func_3(uint8_t p_4, int32_t p_5, struct S0 p_6, uint32_t p_7);

static int64_t func_1(void) {
  uint32_t l_2 = 0xEA41449CL;
  if (l_2) {
    int32_t l_15[4] = {0xAEBA4D3EL, 0xAEBA4D3EL, 0xAEBA4D3EL, 0xAEBA4D3EL};
    int32_t l_17 = 0x493876A4L;
    struct S0 l_19[1] = {{-3, 1580, 958, 227}};
    int32_t *l_40 = &g_41;
    uint16_t l_44 = 65535UL;
    uint8_t *l_45 = (void *)0;
    uint8_t *l_46 = &g_47;
    int i;
    (*l_40) ^= (func_3((l_19[0].f2 = (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s(0xF98CAFA32FD2D1A4LL, ((l_2 >= (g_14, l_2)) && l_15[3]))) == ((safe_unary_minus_func_int8_t_s(l_17)) <= (((g_14, g_18), l_19[0]), 0xD8F9C328L))), g_14)), g_14))), l_15[1], g_20, l_2) != l_17);
    g_23 = ((safe_add_func_uint8_t_u_u(((*l_46) ^= l_44), 0x28L)) < g_18.f2);
  } else {
    int16_t *l_50 = &g_14;
    uint16_t *l_62 = &g_63;
    int32_t l_67 = 0x1A6866C5L;
    int32_t *l_72 = &g_41;
    (*l_72) ^= (((*l_50) = g_20.f1) <= (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((l_2 ^ (safe_lshift_func_int64_t_s_u((l_2, ((safe_add_func_int64_t_s_s((((--(*l_62)) < ((g_66, l_67) <= (safe_lshift_func_int8_t_s_s(l_2, 6)))) >= g_47), (safe_rshift_func_uint32_t_u_u(g_20.f3, 28)))) & (0xF2D060950C43CAE2LL > 0x99D328171C63CC5DLL))), l_67))) == 0x46F67A21L), 2)), l_67)), 1UL)));
  }
  return g_18.f1;
}

static uint8_t func_3(uint8_t p_4, int32_t p_5, struct S0 p_6, uint32_t p_7) {
  int32_t *l_21 = (void *)0;
  int32_t *l_22[3][5][4] = {{{&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}}, {{&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}}, {{&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}, {&g_23, &g_23, &g_23, &g_23}}};
  uint16_t l_24 = 65526UL;
  uint32_t l_27[1];
  int32_t *l_39 = &g_23;
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_27[i] = 0UL;
  l_24 = 0xF890BA5FL;
  (*l_39) = (safe_mul_func_uint8_t_u_u(((l_27[0] & p_6.f3), (&g_23 != (l_22[0][0][3] = l_21))), (safe_div_func_uint32_t_u_u((248UL > (safe_lshift_func_uint8_t_u_u(p_6.f1, ((safe_sub_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((((g_20.f0 || ((!((((safe_add_func_uint64_t_u_u((l_21 != l_21), g_18.f0)), 0xE5BD571E9572AB10LL) == g_14) != g_20.f2)) | 0UL)) != 0x50D2L) < p_7), 0x6F7EL)) | 251UL) & 65535UL), g_20.f2)) < p_6.f0)))), l_24))));
  return p_4;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
  transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
  transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
  transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
  transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
  transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
  transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
  transparent_crc(g_20.f3, "g_20.f3", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_61, "g_61", print_hash_value);
  transparent_crc(g_63, "g_63", print_hash_value);
  transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
