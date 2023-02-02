// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  volatile uint32_t f0;
  uint64_t f1;
  uint32_t f2;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
  const unsigned f0 : 23;
  volatile signed f1 : 6;
  signed f2 : 26;
  signed f3 : 31;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
  uint8_t f0;
  const uint8_t f1;
  uint8_t f2;
  unsigned f3 : 3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
  struct S1 f0;
  int32_t f1;
  int64_t f2;
};
#pragma pack(pop)

static struct S4 g_5 = {{253UL, 0x1BL, 0xB4L, 1}, 1L, 0xD6C1DFE936BE856DLL};
static const struct S0 g_9 = {0UL, 9UL, 4294967289UL};
static struct S0 g_10 = {0x9C79EBEFL, 9UL, 8UL};
static struct S3 g_16 = {1949, -5, -5115, 38330};
static uint16_t g_24 = 65535UL;
static uint16_t g_26 = 2UL;

static int16_t func_1(void);
static const struct S0 func_2(struct S4 p_3, uint64_t p_4);

static int16_t func_1(void) {
  uint16_t l_8 = 0xFC75L;
  uint16_t *l_23 = &g_24;
  uint32_t l_25[5];
  int i;
  for (i = 0; i < 5; i++)
    l_25[i] = 18446744073709551614UL;
  g_10 = func_2(g_5, ((l_8 < (g_5.f0.f1 != 0x0955205300CE3D97LL)) || g_5.f0.f1));
  g_26 |= (safe_sub_func_int32_t_s_s(((((safe_sub_func_int64_t_s_s(l_8, (safe_unary_minus_func_uint8_t_u((func_2(g_5, (g_16, 0x908FBDEDBEC151D1LL)), 0x32L))))) ^ (((*l_23) |= (((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(l_8, 255UL)) >= g_16.f3), g_5.f1)) != g_9.f2), l_8)) & 0x9CL), g_16.f2)) ^ l_25[1])), l_25[3]) != l_25[1]), l_8));
  return l_25[3];
}

static const struct S0 func_2(struct S4 p_3, uint64_t p_4) { return g_9; }

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5.f0.f0, "g_5.f0.f0", print_hash_value);
  transparent_crc(g_5.f0.f1, "g_5.f0.f1", print_hash_value);
  transparent_crc(g_5.f0.f2, "g_5.f0.f2", print_hash_value);
  transparent_crc(g_5.f0.f3, "g_5.f0.f3", print_hash_value);
  transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
  transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
  transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
  transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
  transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
  transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
  transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
  transparent_crc(g_16.f3, "g_16.f3", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
