// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint8_t f0;
  unsigned f1 : 4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
  unsigned f0 : 7;
  signed f1 : 30;
  const signed f2 : 8;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
  uint16_t f0;
  const volatile uint64_t f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
  unsigned f0 : 2;
  volatile signed f1 : 9;
  signed : 0;
};
#pragma pack(pop)

static struct S0 g_4[5][3][2] = {{{{0x41L, 2}, {0UL, 1}}, {{1UL, 3}, {1UL, 3}}, {{0UL, 1}, {0x41L, 2}}}, {{{0UL, 1}, {0x41L, 2}}, {{0UL, 1}, {1UL, 3}}, {{1UL, 3}, {0UL, 1}}}, {{{0x41L, 2}, {0UL, 1}}, {{0x41L, 2}, {0UL, 1}}, {{1UL, 3}, {1UL, 3}}}, {{{0UL, 1}, {0x41L, 2}}, {{0UL, 1}, {0x41L, 2}}, {{0UL, 1}, {1UL, 3}}}, {{{1UL, 3}, {0UL, 1}}, {{0x41L, 2}, {0UL, 1}}, {{0x41L, 2}, {0UL, 1}}}};
static struct S0 *volatile g_3 = &g_4[1][2][0];
static volatile struct S2 g_31 = {0xC090L, 0UL};
static uint32_t g_33[5] = {0x4846E1D6L, 0x4846E1D6L, 0x4846E1D6L, 0x4846E1D6L, 0x4846E1D6L};
static uint32_t g_36 = 4UL;
static volatile uint8_t g_40 = 0xB3L;
static struct S0 *g_46 = &g_4[1][2][0];
static struct S0 **volatile g_45[2] = {&g_46, &g_46};
static int32_t g_49[4] = {0xD251A654L, 0xD251A654L, 0xD251A654L, 0xD251A654L};
static volatile struct S3 g_54[1][1] = {{{0, -2}}};
static volatile struct S3 g_55 = {0, -5};
static int8_t g_68 = (-6L);
static uint64_t g_73 = 18446744073709551615UL;
static const struct S3 g_74 = {1, 11};
static struct S3 g_76 = {1, 11};
static struct S3 *volatile g_75 = &g_76;
static struct S3 g_80 = {1, 14};
static int32_t g_90 = 0xE7967B2DL;
static int32_t *g_93 = &g_49[1];
static int32_t **volatile g_92 = &g_93;
static uint8_t *g_94 = &g_4[1][2][0].f0;

static uint16_t func_1(void);
static int64_t func_5(struct S0 p_6);

static uint16_t func_1(void) {
  struct S0 l_2 = {0x75L, 1};
  (*g_3) = l_2;
  for (l_2.f0 = 0; (l_2.f0 <= 1); l_2.f0 += 1) {
    struct S0 l_7 = {0UL, 2};
    int32_t *l_88 = &g_49[0];
    int32_t *l_89 = &g_90;
    uint8_t *l_95 = &l_2.f0;
    (*l_89) = ((*l_88) = ((func_5(l_7), (0L <= l_7.f1)) <= (safe_sub_func_uint16_t_u_u((+l_2.f1), g_74.f0))));
    for (l_7.f0 = 0; (l_7.f0 <= 1); l_7.f0 += 1) {
      int32_t l_91 = 0x9581AD2EL;
      (*l_89) ^= g_54[0][0].f1;
      if (l_91)
        continue;
      for (g_73 = 0; (g_73 <= 1); g_73 += 1) {
        (*g_92) = &g_90;
        (*l_89) = ((g_94 = g_94) == l_95);
      }
    }
  }
  return g_33[4];
}

static int64_t func_5(struct S0 p_6) {
  int32_t l_20 = 0L;
  uint32_t *l_32 = &g_33[4];
  uint8_t *l_34 = &g_4[1][2][0].f0;
  uint32_t *l_35 = &g_36;
  struct S1 l_83 = {9, 26535, 13};
  if ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((+((((((((*l_35) = ((((&p_6 == (void *)0) ^ ((*l_34) = ((p_6, ((*l_32) = (safe_mod_func_uint16_t_u_u(g_4[1][2][0].f1, (+((safe_mod_func_uint16_t_u_u((((l_20 && l_20) | (safe_mul_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((((g_31, &g_4[1][2][0]) == (void *)0) <= l_20), g_4[1][2][0].f1)), 0xF69A0165L)), p_6.f0)), g_4[1][2][0].f1)), p_6.f1))), p_6.f0), l_20)) ^ p_6.f1)))))) && g_33[0]))) > p_6.f0) ^ l_20)) & 0UL), p_6.f1), 0x30268D9AL) != g_4[1][2][0].f1) >= 0x83395465L) < p_6.f0)), l_20)) == 6L), 0UL)) > p_6.f1), g_4[1][2][0].f1))) {
    int32_t *l_37 = &l_20;
    int32_t *l_38 = &l_20;
    int32_t l_39 = 1L;
    --g_40;
  } else {
    int32_t *l_52 = (void *)0;
    int32_t *l_53 = &l_20;
    for (l_20 = 0; (l_20 < 29); l_20 = safe_add_func_int16_t_s_s(l_20, 8)) {
      for (g_36 = 0; (g_36 <= 1); g_36 += 1) {
        struct S0 *l_47 = &g_4[3][0][1];
        int32_t *l_48 = &g_49[1];
        int i;
        l_47 = &p_6;
        (*l_48) ^= g_33[g_36];
      }
    }
    if (((*l_53) &= (safe_div_func_uint64_t_u_u(0xA718BA309CE07B88LL, g_4[1][2][0].f0)))) {
      g_55 = g_54[0][0];
      (*l_53) = 0L;
    } else {
      int8_t l_60 = 6L;
      for (l_20 = 0; (l_20 <= 0); l_20 += 1) {
        int8_t *l_67 = &g_68;
        int8_t *l_69 = &l_60;
        uint64_t *l_70 = (void *)0;
        uint64_t *l_71 = (void *)0;
        uint64_t *l_72 = &g_73;
        g_49[1] = (((safe_mod_func_uint32_t_u_u(g_55.f0, (p_6.f1 || p_6.f0))) < ((*l_72) = ((((*l_69) = ((safe_rshift_func_int8_t_s_s(l_60, ((*l_67) = ((safe_add_func_uint32_t_u_u(p_6.f1, p_6.f1)) && (safe_rshift_func_uint8_t_u_s((g_49[1] <= 0xCDC86D9EL), (safe_mod_func_uint32_t_u_u(((*l_32) = 0xB3902D8BL), g_49[2])))))))) != 0x0EFDL)), 0x3396L) | p_6.f1))) <= p_6.f0);
        (*g_75) = g_74;
      }
    }
  }
  for (g_68 = (-26); (g_68 == (-11)); ++g_68) {
    uint32_t l_79 = 0UL;
    uint64_t *l_84 = &g_73;
    (*g_46) = (((g_74.f0 < g_74.f0) & l_79), (((*l_84) = ((((g_80, ((g_49[1] >= ((safe_mul_func_uint8_t_u_u(0x3FL, (l_83, ((void *)0 != &g_40)))) ^ 0x42DFAD40L)) ^ 0xEBL)) & g_4[1][2][0].f0) & g_33[3]) != g_73)), p_6));
    return l_79;
  }
  return p_6.f0;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_4[i][j][k].f0, "g_4[i][j][k].f0", print_hash_value);
        transparent_crc(g_4[i][j][k].f1, "g_4[i][j][k].f1", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
  transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_33[i], "g_33[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_49[i], "g_49[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_54[i][j].f0, "g_54[i][j].f0", print_hash_value);
      transparent_crc(g_54[i][j].f1, "g_54[i][j].f1", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
  transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
  transparent_crc(g_68, "g_68", print_hash_value);
  transparent_crc(g_73, "g_73", print_hash_value);
  transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
  transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
  transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
  transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
  transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
  transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
  transparent_crc(g_90, "g_90", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
