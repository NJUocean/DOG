// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const unsigned f0 : 9;
  unsigned f1 : 26;
  signed f2 : 20;
  signed f3 : 16;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
  volatile int16_t f0;
  int64_t f1;
  volatile int16_t f2;
  int64_t f3;
  int32_t f4;
};
#pragma pack(pop)

static volatile int32_t g_2 = (-1L);
static int32_t g_3 = 0x091DF82DL;
static struct S0 g_15 = {10, 1350, 568, -141};
static uint32_t g_29 = 4294967295UL;
static volatile struct S1 g_36 = {1L, -1L, -2L, 1L, 0L};
static uint32_t *volatile g_37 = &g_29;
static int32_t g_40 = 1L;
static volatile int32_t *g_52[5][1] = {{&g_2}, {&g_36.f4}, {&g_2}, {&g_36.f4}, {&g_2}};
static volatile int32_t **volatile g_51 = &g_52[0][0];

static uint8_t func_1(void);
static const uint64_t func_12(const uint32_t p_13, uint32_t p_14);

static uint8_t func_1(void) {
  int8_t l_10[2];
  int i;
  for (i = 0; i < 2; i++)
    l_10[i] = (-1L);
  for (g_3 = 0; (g_3 <= (-11)); g_3 = safe_sub_func_int32_t_s_s(g_3, 6)) {
    uint32_t l_16 = 1UL;
    int32_t *l_26 = &g_3;
    int32_t l_30[4][2] = {{(-6L), (-6L)}, {(-6L), (-6L)}, {(-6L), (-6L)}, {(-6L), (-6L)}};
    int i, j;
    if ((safe_lshift_func_uint8_t_u_s((g_2 > ((((safe_lshift_func_int16_t_s_u(0x1A4EL, l_10[1])) & 2L) ^ (!0x874BE76D238E486ALL)) | func_12((g_15.f1 = (g_15, (l_16 < l_10[1]))), g_3))), 1))) {
      uint32_t *const l_35 = &l_16;
      int32_t l_38 = 0xB7203FCAL;
      for (l_16 = 0; (l_16 != 4); l_16++) {
        int32_t **l_27 = &l_26;
        uint32_t *l_28[2][3] = {{(void *)0, (void *)0, (void *)0}, {&g_29, &g_29, &g_29}};
        int32_t *l_39 = &g_40;
        int i, j;
        (*l_39) &= (safe_mul_func_uint16_t_u_u((8L || (((((safe_lshift_func_int32_t_s_u(g_15.f0, 19)) < g_15.f0) < ((((l_30[0][0] = (((*l_27) = l_26) == (g_15.f2, &g_2))) & (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_35 != (g_36, g_37)), g_29)), g_15.f3))), (**l_27)) < l_38)) | 0x40A7B48FL) == 7L)), g_15.f0));
      }
      for (l_16 = 0; (l_16 == 39); l_16 = safe_add_func_int64_t_s_s(l_16, 7)) {
        volatile struct S1 *l_43 = &g_36;
        g_36 = g_36;
        (*l_43) = g_36;
      }
    } else {
      int32_t **l_50 = &l_26;
      for (g_40 = 0; (g_40 < 16); g_40 = safe_add_func_uint64_t_u_u(g_40, 8)) {
        int32_t *l_46 = &g_3;
        int32_t **l_47 = &l_46;
        int32_t *l_53[5][5] = {{&l_30[1][0], (void *)0, &l_30[1][0], (void *)0, &l_30[1][0]}, {&l_30[0][1], &l_30[0][1], &l_30[0][1], &l_30[0][1], &l_30[0][1]}, {&l_30[1][0], (void *)0, &l_30[1][0], (void *)0, &l_30[1][0]}, {&l_30[0][1], &l_30[0][1], &l_30[0][1], &l_30[0][1], &l_30[0][1]}, {&l_30[1][0], (void *)0, &l_30[1][0], (void *)0, &l_30[1][0]}};
        int i, j;
        (*l_47) = l_46;
        g_15.f2 ^= ((safe_mul_func_int8_t_s_s((&g_36 != (void *)0), (&g_29 == (void *)0))) >= (l_50 != g_51));
      }
    }
  }
  return g_36.f4;
}

static const uint64_t func_12(const uint32_t p_13, uint32_t p_14) {
  int32_t *l_17[1][4];
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++)
      l_17[i][j] = &g_3;
  }
  l_17[0][3] = l_17[0][3];
  return g_15.f1;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
  transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
  transparent_crc(g_15.f2, "g_15.f2", print_hash_value);
  transparent_crc(g_15.f3, "g_15.f3", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
  transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
  transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
  transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
  transparent_crc(g_36.f4, "g_36.f4", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
