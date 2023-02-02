// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  unsigned f0 : 14;
  const int16_t f1;
  const int64_t f2;
  volatile int64_t f3;
};
#pragma pack(pop)

static volatile uint32_t g_4 = 4294967295UL;
static uint32_t g_19 = 0x1245C810L;
static uint8_t g_23 = 1UL;
static int32_t g_33 = (-3L);
static uint32_t g_36 = 0x11FFBE62L;
static int32_t *volatile g_39 = &g_33;
static struct S0 g_40 = {32, 0x653DL, 0xB2097E65FBC01D4CLL, 0xF121F2059515ED76LL};

static struct S0 func_1(void);
static uint64_t func_8(uint8_t p_9);

static struct S0 func_1(void) {
  int16_t l_18 = 0x3414L;
  uint8_t *l_22 = &g_23;
  const uint16_t l_31 = 0x07EAL;
  (*g_39) = (safe_sub_func_int64_t_s_s(g_4, (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(func_8((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_18, (g_19 != (+((*l_22) &= ((~l_18) & (l_18 >= 0x3F6085E0710DD013LL)))))), 0x4F230135L)), 0xFFL)), (safe_unary_minus_func_int8_t_s((safe_add_func_int64_t_s_s((((((safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(l_18, g_19)), l_31)) == l_31) != g_19) == l_18) != 1UL), g_19)))))), g_19))))), l_18))));
  return g_40;
}

static uint64_t func_8(uint8_t p_9) {
  int32_t *l_32 = &g_33;
  int32_t *l_34 = &g_33;
  int32_t *l_35[3];
  int i;
  for (i = 0; i < 3; i++)
    l_35[i] = &g_33;
  g_36--;
  return p_9;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
  transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
  transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
  transparent_crc(g_40.f3, "g_40.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
