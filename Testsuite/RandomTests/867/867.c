// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  int16_t f0;
  volatile uint64_t f1;
  volatile int8_t f2;
  volatile int8_t f3;
};

union U1 {
  volatile uint32_t f0;
};

union U2 {
  uint16_t f0;
  const int64_t f1;
};

static uint64_t g_5 = 0x3C633843046B6EB6LL;
static int32_t g_8 = 0L;
static int16_t g_9 = 0x8807L;
static volatile uint32_t g_10 = 0x356EC7E4L;
static uint8_t g_32 = 0x72L;
static volatile union U0 g_39 = {-8L};
static int32_t *g_40 = &g_8;
static union U1 g_41 = {18446744073709551615UL};
static union U1 g_46 = {5UL};
static union U1 g_47 = {18446744073709551614UL};
static int64_t g_66 = 0x4BFCC0C20EB8FC40LL;
static uint32_t g_67 = 18446744073709551615UL;
static uint32_t g_69 = 0xF020A73BL;

static int8_t func_1(void);
static union U1 func_2(uint32_t p_3, union U2 p_4);

static int8_t func_1(void) {
  union U2 l_6[5] = {{65528UL}, {65528UL}, {65528UL}, {65528UL}, {65528UL}};
  uint8_t *l_58 = &g_32;
  uint8_t **l_59 = (void *)0;
  uint8_t *l_61 = (void *)0;
  uint8_t **l_60 = &l_61;
  int32_t *l_62 = &g_8;
  uint8_t *l_63[5];
  uint32_t l_64 = 4294967295UL;
  int64_t *l_65 = &g_66;
  int32_t *l_68 = &g_8;
  int i;
  for (i = 0; i < 5; i++)
    l_63[i] = &g_32;
  g_67 ^= (func_2(g_5, l_6[4]), (safe_add_func_uint8_t_u_u((safe_rshift_func_int64_t_s_u((g_46.f0, ((*l_65) |= ((l_64 |= (safe_add_func_uint16_t_u_u(((g_47.f0 < (safe_mul_func_int32_t_s_s(l_6[4].f0, l_6[4].f0))) > ((((l_58 = &g_32) == ((*l_60) = &g_32)), l_62) != &g_8)), (*l_62)))) <= 0UL))), 18)), g_5)));
  g_69++;
  return g_32;
}

static union U1 func_2(uint32_t p_3, union U2 p_4) {
  int32_t *l_7[3][2][4] = {{{(void *)0, (void *)0, (void *)0, &g_8}, {(void *)0, &g_8, (void *)0, (void *)0}}, {{(void *)0, &g_8, &g_8, &g_8}, {(void *)0, (void *)0, (void *)0, &g_8}}, {{(void *)0, &g_8, (void *)0, (void *)0}, {(void *)0, &g_8, &g_8, &g_8}}};
  union U2 l_44 = {0xDEA9L};
  int i, j, k;
  g_10++;
  for (p_4.f0 = 0; (p_4.f0 > 16); ++p_4.f0) {
    uint32_t l_17 = 2UL;
    for (g_5 = 0; (g_5 <= 1); g_5 += 1) {
      int16_t *l_20 = &g_9;
      uint16_t l_29 = 65535UL;
      uint8_t *l_30 = (void *)0;
      uint8_t *l_31 = &g_32;
      if ((safe_sub_func_int32_t_s_s(((l_17 == (safe_sub_func_int16_t_s_s(((*l_20) = (g_5, p_3)), (safe_add_func_int64_t_s_s((g_5 && ((safe_div_func_int64_t_s_s((safe_mul_func_int32_t_s_s(((safe_add_func_int32_t_s_s(0xB6749EFEL, ((((*l_31) = (p_3 || l_29)), ((safe_mul_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_39, (g_32 || p_3)), l_29)), l_29)), p_3)), (void *)0)) != (void *)0))) | 0xC411E69D0863E871LL), l_29)), 0x283A38C8A251ABE7LL)) || l_17)), g_5))))) <= p_4.f0), g_8))) {
        g_40 = l_7[2][0][0];
        return g_41;
      } else {
        uint16_t l_45 = 0xC77DL;
        (*g_40) &= (safe_rshift_func_uint8_t_u_u(((*l_31) = (l_44, l_45)), (l_17 == l_29)));
        return g_46;
      }
    }
  }
  return g_47;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
  transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
  transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
  transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
  transparent_crc(g_66, "g_66", print_hash_value);
  transparent_crc(g_67, "g_67", print_hash_value);
  transparent_crc(g_69, "g_69", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
