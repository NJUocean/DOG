// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  signed f0 : 4;
};
#pragma pack(pop)

struct S2 {
  int16_t f0;
  uint64_t f1;
  int32_t f2;
  uint32_t f3;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
  const struct S2 f0;
  uint32_t f1;
  int32_t f2;
  int8_t f3;
};
#pragma pack(pop)

static volatile int8_t g_8 = 0L;
static uint32_t g_11 = 6UL;

static uint32_t func_1(void);
static struct S0 func_12(uint32_t p_13, const struct S0 p_14, uint8_t p_15, struct S2 p_16, int16_t p_17);

static uint32_t func_1(void) {
  int16_t l_18 = 0xBD5DL;
  const struct S0 l_19[4][5][5] = {{{{-0}, {-0}, {3}, {1}, {-2}}, {{2}, {3}, {1}, {2}, {2}}, {{-2}, {2}, {-2}, {-0}, {1}}, {{3}, {2}, {-1}, {1}, {2}}, {{2}, {1}, {-3}, {-0}, {1}}}, {{{2}, {-2}, {-1}, {2}, {3}}, {{0}, {-3}, {-2}, {-2}, {-3}}, {{-1}, {-1}, {1}, {3}, {-2}}, {{-0}, {-3}, {3}, {2}, {3}}, {{-1}, {-1}, {2}, {3}, {-1}}}, {{{-1}, {1}, {-0}, {-2}, {2}}, {{3}, {-1}, {-1}, {3}, {0}}, {{-2}, {-0}, {1}, {-1}, {1}}, {{3}, {2}, {-1}, {2}, {1}}, {{0}, {0}, {-0}, {-1}, {3}}}, {{{-2}, {0}, {2}, {3}, {2}}, {{-1}, {-1}, {-3}, {-2}, {0}}, {{3}, {2}, {2}, {3}, {3}}, {{-0}, {0}, {-3}, {0}, {-0}}, {{0}, {2}, {-1}, {-2}, {-1}}}};
  struct S2 l_20 = {1L, 0xC1D99EA5D840DFE9LL, 0x48648546L, 0x8DACB314L};
  struct S2 *l_21 = &l_20;
  int32_t l_24 = 2L;
  struct S3 l_26 = {{0x538EL, 18446744073709551615UL, -1L, 0xECE01153L}, 0xA9B22354L, 6L, 0x77L};
  uint32_t l_27 = 6UL;
  int32_t *l_28 = &l_20.f2;
  int i, j, k;
  (*l_28) = (safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(g_8, ((safe_rshift_func_int32_t_s_s(g_11, g_11)) & ((((func_12(l_18, l_19[2][3][3], g_11, ((*l_21) = l_20), (l_24 = ((((((((safe_add_func_int32_t_s_s((0x98L <= (1UL > (-8L))), 0UL)) >= 0L) <= 0x3B10L) <= g_11) >= g_11) && 1L) >= 18446744073709551609UL) >= l_19[2][3][3].f0))), l_26), l_27) >= g_11), l_26.f2)))) ^ l_26.f1), 0x07L)) < 0x8E480B0DEBF624E1LL) ^ g_11), g_11));
  return g_8;
}

static struct S0 func_12(uint32_t p_13, const struct S0 p_14, uint8_t p_15, struct S2 p_16, int16_t p_17) {
  struct S0 l_25 = {-3};
  return l_25;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
