// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  const volatile unsigned f0 : 14;
};
#pragma pack(pop)

static const volatile int16_t g_14 = (-1L);
static uint32_t g_16 = 3UL;
static uint64_t g_18[2][3] = {{0x14B11F3813BF58AALL, 5UL, 0x14B11F3813BF58AALL}, {0x14B11F3813BF58AALL, 5UL, 0x14B11F3813BF58AALL}};
static int32_t g_21 = 0L;
static struct S0 g_22 = {63};

static struct S0 func_1(void);
static const int64_t func_2(uint32_t p_3, uint32_t p_4, int32_t p_5);

static struct S0 func_1(void) {
  uint16_t l_15 = 0UL;
  int64_t l_17 = 0x839E071A05132D7ALL;
  int32_t l_19[1][4][3] = {{{0x96497440L, 0x3F30B91EL, 0x96497440L}, {0x8CFF26AFL, 0x71DBCABEL, 0x8CFF26AFL}, {0x96497440L, 0x3F30B91EL, 0x96497440L}, {0x8CFF26AFL, 0x71DBCABEL, 0x8CFF26AFL}}};
  int32_t *l_20 = &g_21;
  int i, j, k;
  (*l_20) ^= ((func_2((safe_lshift_func_uint16_t_u_s((((((((g_18[0][1] |= ((4L == (((safe_sub_func_uint16_t_u_u(g_14, l_15)) <= 0x90611BC383C67EE3LL), g_14)) > (((g_16, (-1L)) || (l_17 == g_16)) != l_17))) || 0L) ^ l_19[0][0][2]) | l_19[0][0][1]), 65529UL) && g_18[0][1]) <= l_15), 13)), l_19[0][1][2], l_17) == l_19[0][0][1]) <= l_19[0][3][2]);
  return g_22;
}

static const int64_t func_2(uint32_t p_3, uint32_t p_4, int32_t p_5) { return p_5; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
