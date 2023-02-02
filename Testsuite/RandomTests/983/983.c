// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile int8_t f0;
  signed f1 : 4;
};
#pragma pack(pop)

static volatile int64_t g_8[5][4] = {{(-1L), 0L, 5L, 5L}, {0x0CBEB969161D594DLL, 0x0CBEB969161D594DLL, (-1L), 5L}, {(-9L), 0L, (-9L), (-1L)}, {(-9L), (-1L), (-1L), (-9L)}, {0x0CBEB969161D594DLL, (-1L), 5L, (-1L)}};
static uint32_t g_11[3] = {0UL, 0UL, 0UL};
static uint64_t g_14 = 0x8CCEDB7758B39D20LL;
static uint32_t g_22 = 1UL;
static volatile struct S0 g_24 = {-4L, 3};
static volatile struct S0 g_25[5][5] = {{{0xEAL, 0}, {0L, 1}, {1L, -2}, {1L, -2}, {0L, 1}}, {{0x76L, -1}, {0x02L, -0}, {0x1FL, 0}, {0L, 1}, {-7L, -3}}, {{0x02L, -0}, {1L, -2}, {0x1FL, 0}, {0L, -3}, {0x1FL, 0}}, {{-7L, -3}, {-7L, -3}, {1L, -2}, {0x76L, -1}, {0x55L, -3}}, {{0x02L, -0}, {0x55L, -3}, {0xEAL, 0}, {0L, 1}, {0L, 1}}};
static volatile int32_t g_31 = 0x46158E9DL;
static volatile int32_t *g_30 = &g_31;
static uint32_t g_55 = 0x05BA845DL;
static uint64_t *g_61 = &g_14;
static uint64_t **g_60 = &g_61;
static uint64_t ***volatile g_59[3] = {&g_60, &g_60, &g_60};

static const uint32_t func_1(void);
static uint64_t func_2(uint32_t p_3, uint8_t p_4, uint32_t p_5, int32_t p_6);

static const uint32_t func_1(void) {
  uint32_t l_7 = 0x66E58D02L;
  int32_t l_12 = 0xC8A52B4BL;
  uint64_t *l_13 = &g_14;
  uint32_t *l_21 = &g_22;
  int32_t l_23 = 4L;
  uint64_t **l_58 = (void *)0;
  if (((func_2(l_7, (g_8[4][0] <= 4294967292UL), (((safe_sub_func_int16_t_s_s(g_11[0], (((l_23 = ((((l_7 == g_11[0]) || ((l_12 = g_11[0]), g_11[0])) & ((*l_13)--)) || (l_12 = ((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((*l_21) = (g_14 > 0UL)), l_7)), l_7)) > g_11[0])))) != 1L) ^ l_7))), 0UL) ^ 0x7218670FC24489BELL), l_7) <= g_11[1]), 0xE1D67A3DL)) {
    for (g_14 = 0; (g_14 > 19); ++g_14) {
      uint64_t l_33 = 0xC8BB6AF833954656LL;
      int32_t *l_45 = &l_12;
      for (l_12 = 0; (l_12 < (-7)); l_12 = safe_sub_func_int8_t_s_s(l_12, 4)) {
        volatile int32_t **l_32 = &g_30;
        (*l_32) = g_30;
        if (l_33)
          continue;
      }
      (*l_45) ^= (safe_lshift_func_uint32_t_u_u(g_24.f1, (((*l_21) = 0UL) != (+((safe_add_func_int32_t_s_s((g_11[0] && 7UL), (((safe_sub_func_uint64_t_u_u(0x62D17F4926A67225LL, ((g_11[0], g_11[0]) > (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int64_t_s_u((g_11[1] | 0xF9BDL), g_11[0])), 2))))) & 65535UL) < l_33))), 0x64FCL)))));
    }
    for (g_14 = 0; (g_14 <= 26); g_14++) {
      (*g_30) = 0x5545654AL;
      l_23 &= 8L;
    }
  } else {
    int32_t *l_52[3][1][5] = {{{&l_23, &l_23, &l_23, &l_23, &l_23}}, {{&l_23, &l_23, &l_23, &l_23, &l_23}}, {{&l_23, &l_23, &l_23, &l_23, &l_23}}};
    int i, j, k;
    for (g_22 = 0; (g_22 == 15); g_22++) {
      int32_t l_54 = (-7L);
      for (l_12 = 0; (l_12 == 26); l_12++) {
        int32_t **l_53 = &l_52[1][0][2];
        (*l_53) = l_52[0][0][0];
        (*g_30) = (*g_30);
      }
      ++g_55;
    }
  }
  l_58 = l_58;
  return l_12;
}

static uint64_t func_2(uint32_t p_3, uint8_t p_4, uint32_t p_5, int32_t p_6) {
  g_25[4][0] = g_24;
  for (g_14 = 0; (g_14 <= 2); g_14 += 1) {
    int i;
    return g_11[g_14];
  }
  return g_8[1][3];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 3; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
  transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_25[i][j].f0, "g_25[i][j].f0", print_hash_value);
      transparent_crc(g_25[i][j].f1, "g_25[i][j].f1", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_55, "g_55", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
