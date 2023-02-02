// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S1 {
  signed f0 : 3;
  signed f1 : 25;
  unsigned f2 : 26;
};
#pragma pack(pop)

struct S0 {
  volatile signed f0 : 14;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
  uint64_t f0;
  const volatile uint64_t f1;
  struct S1 f2;
  volatile struct S0 f3;
};
#pragma pack(pop)

static struct S2 g_5 = {0xDA7FE64FD9E2A8D3LL, 0x18E418A52733582FLL, {-0, -4364, 1940}, {1}};
static int32_t g_8[1][2][2] = {{{6L, 6L}, {6L, 6L}}};
static struct S2 *g_19 = (void *)0;
static struct S2 g_23[2][1] = {{{18446744073709551615UL, 7UL, {-1, -1730, 1634}, {47}}}, {{18446744073709551615UL, 7UL, {-1, -1730, 1634}, {47}}}};
static int32_t g_25 = 0xFBC01D4CL;
static struct S1 *volatile g_28[1] = {&g_5.f2};
static int16_t g_32 = 0x684CL;
static volatile struct S1 g_35 = {-0, 4602, 6708};
static volatile struct S1 *g_34 = &g_35;

static int64_t func_1(void);
static int32_t func_2(uint32_t p_3);

static int64_t func_1(void) {
  struct S2 *l_4 = &g_5;
  struct S2 **l_64 = &g_19;
  (*l_64) = (func_2((l_4 == l_4)), &g_23[1][0]);
  return g_23[0][0].f1;
}

static int32_t func_2(uint32_t p_3) {
  uint32_t l_15 = 4294967295UL;
  int32_t l_61 = 0x66A4358BL;
  for (p_3 = 0; (p_3 > 19); p_3 = safe_add_func_uint16_t_u_u(p_3, 9)) {
    uint32_t l_16 = 0UL;
    struct S2 *l_22[1];
    int32_t l_26 = 0xA3B7DC4BL;
    const uint32_t l_33[5] = {0xC6833686L, 0xC6833686L, 0xC6833686L, 0xC6833686L, 0xC6833686L};
    int16_t l_62 = 0xF1CCL;
    int i;
    for (i = 0; i < 1; i++)
      l_22[i] = &g_23[0][0];
    for (g_5.f0 = 0; (g_5.f0 <= 0); g_5.f0 += 1) {
      int32_t *l_24 = &g_25;
      l_26 = (safe_sub_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((g_5.f1 > ((safe_div_func_uint64_t_u_u((l_15 > l_16), ((safe_lshift_func_uint32_t_u_s((((g_19 == g_19) || l_15) | (((l_15 <= (((*l_24) = (safe_sub_func_uint8_t_u_u((g_5.f2.f0, ((void *)0 == l_22[0])), l_15))) > 0x2059515EL)) <= l_15) | 0x1885A1EC8F949145LL)), 1)), 2UL))) != l_15)), g_23[0][0].f2.f0)) | 0xF32F520AL), g_5.f2.f0));
      for (l_16 = 0; (l_16 <= 0); l_16 += 1) {
        int32_t **l_27 = &l_24;
        struct S1 *l_29 = &g_23[0][0].f2;
        (*l_27) = &g_25;
        (*l_29) = g_5.f2;
      }
      for (l_16 = 0; (l_16 <= 0); l_16 += 1) {
        int16_t *l_30 = (void *)0;
        int16_t *l_31[4] = {&g_32, &g_32, &g_32, &g_32};
        uint8_t *l_60 = (void *)0;
        int32_t *l_63[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
        int i, j, k;
        l_26 &= ((((g_32 = g_8[l_16][(l_16 + 1)][(l_16 + 1)]), (l_33[4], g_28[0])) != g_34) | ((safe_rshift_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((p_3 || (+(safe_rshift_func_uint64_t_u_u(((safe_lshift_func_int32_t_s_s(1L, ((safe_rshift_func_uint8_t_u_u((l_61 = ((((p_3, 247UL) > (~(g_23[0][0].f0 >= (*l_24)))) >= (-1L)), g_8[0][1][1])), 6)) == p_3))) == 0x172C66C3L), 51)))), g_23[0][0].f2.f2)), (*l_24))) <= g_8[0][1][1]) >= g_23[0][0].f2.f1), p_3)), g_23[0][0].f0)), l_16)), g_8[l_16][(l_16 + 1)][(l_16 + 1)])) <= 0x5DL), g_23[0][0].f2.f0)) <= 0L), l_62)) < (*l_24)));
      }
    }
  }
  return l_15;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
  transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
  transparent_crc(g_5.f2.f0, "g_5.f2.f0", print_hash_value);
  transparent_crc(g_5.f2.f1, "g_5.f2.f1", print_hash_value);
  transparent_crc(g_5.f2.f2, "g_5.f2.f2", print_hash_value);
  transparent_crc(g_5.f3.f0, "g_5.f3.f0", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_23[i][j].f0, "g_23[i][j].f0", print_hash_value);
      transparent_crc(g_23[i][j].f1, "g_23[i][j].f1", print_hash_value);
      transparent_crc(g_23[i][j].f2.f0, "g_23[i][j].f2.f0", print_hash_value);
      transparent_crc(g_23[i][j].f2.f1, "g_23[i][j].f2.f1", print_hash_value);
      transparent_crc(g_23[i][j].f2.f2, "g_23[i][j].f2.f2", print_hash_value);
      transparent_crc(g_23[i][j].f3.f0, "g_23[i][j].f3.f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
  transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
  transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
