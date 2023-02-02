// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile uint32_t f0;
  const signed f1 : 18;
  unsigned f2 : 30;
  signed f3 : 8;
};
#pragma pack(pop)

static int8_t g_3 = 0x10L;
static int32_t g_5 = 1L;
static int32_t *volatile g_4 = &g_5;
static int64_t g_17 = 0x29EF4A0426A7609FLL;
static struct S0 g_30 = {0x94B58FE4L, 397, 17045, 10};

static int64_t func_1(void);
static uint8_t func_18(int32_t *p_19, const uint64_t p_20, int64_t p_21, int8_t p_22);

static int64_t func_1(void) {
  int8_t l_2 = 0xFBL;
  int32_t l_31 = (-1L);
  uint64_t l_46 = 0x7B2C3CC8C9F13A4BLL;
  int32_t l_47[5] = {0xC5ACC8E1L, 0xC5ACC8E1L, 0xC5ACC8E1L, 0xC5ACC8E1L, 0xC5ACC8E1L};
  int i;
  if (l_2) {
    (*g_4) |= g_3;
  } else {
    int32_t *l_6 = (void *)0;
    int32_t *l_7 = (void *)0;
    int32_t *l_8 = &g_5;
    int32_t *l_9[2][4][3] = {{{&g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5}}, {{(void *)0, &g_5, &g_5}, {&g_5, &g_5, &g_5}, {&g_5, &g_5, &g_5}, {(void *)0, (void *)0, (void *)0}}};
    uint32_t l_10 = 0xF545EE28L;
    int i, j, k;
    ++l_10;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1) {
      int32_t l_16 = 0x1720348FL;
      for (l_10 = 0; (l_10 <= 1); l_10 += 1) {
        g_17 = ((!4294967291UL), (safe_mod_func_uint16_t_u_u(l_16, l_2)));
      }
      if ((*g_4))
        continue;
      for (l_10 = 0; (l_10 <= 1); l_10 += 1) {
        int32_t *l_23 = (void *)0;
        l_47[0] |= ((func_18(l_23, g_5, ((((g_17 ^ (safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((g_17, (safe_mul_func_int16_t_s_s((g_5 != (((g_30, g_30.f2) & l_31) >= (l_16 <= g_30.f3))), g_17))) || l_31), (-4L))), l_16))) == l_16), l_8) != (void *)0), g_30.f2) ^ l_46) != g_17);
      }
    }
  }
  return l_47[1];
}

static uint8_t func_18(int32_t *p_19, const uint64_t p_20, int64_t p_21, int8_t p_22) {
  int16_t l_39 = 1L;
  int32_t l_44 = 0x473ECFB8L;
  int32_t *l_45 = &g_5;
  for (p_21 = 0; (p_21 != (-9)); p_21--) {
    uint32_t l_34 = 0x444C9CADL;
    return l_34;
  }
  (*l_45) = (safe_sub_func_uint16_t_u_u((l_39 = (safe_lshift_func_uint64_t_u_s(((void *)0 == p_19), 15))), (safe_rshift_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(l_44, l_44)), 17))));
  return (*l_45);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
  transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
  transparent_crc(g_30.f3, "g_30.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
