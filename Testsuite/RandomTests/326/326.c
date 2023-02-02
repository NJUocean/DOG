// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile int64_t f0;
};
#pragma pack(pop)

union U1 {
  const uint64_t f0;
  uint16_t f1;
  int32_t f2;
  uint16_t f3;
};

static volatile int32_t g_2 = 0x70C3099CL;
static volatile int32_t g_3[3][5] = {{0x849F845DL, (-6L), 0x849F845DL, 0x849F845DL, (-6L)}, {(-6L), 0x849F845DL, 0x849F845DL, (-6L), 0x849F845DL}, {(-6L), (-6L), (-2L), (-6L), (-6L)}};
static volatile int32_t g_4[2][3] = {{(-8L), (-8L), (-8L)}, {(-1L), (-1L), (-1L)}};
static int32_t g_5 = 0xBEDEDB5CL;
static int8_t g_20 = 6L;
static int8_t g_23 = (-1L);
static union U1 g_30 = {0xCAF1E2CD8491F199LL};
static int64_t g_31 = 0xC6F0D4A7C769867FLL;
static int32_t *g_34 = &g_5;
static int32_t **volatile g_33 = &g_34;
static int16_t g_35 = (-7L);
static struct S0 g_38 = {8L};
static struct S0 *volatile g_39[5] = {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0};
static struct S0 *const volatile g_42[5][3][4] = {{{(void *)0, &g_38, &g_38, (void *)0}, {&g_38, (void *)0, (void *)0, (void *)0}, {&g_38, &g_38, (void *)0, &g_38}}, {{(void *)0, &g_38, (void *)0, &g_38}, {&g_38, (void *)0, &g_38, (void *)0}, {(void *)0, &g_38, &g_38, &g_38}}, {{&g_38, &g_38, &g_38, &g_38}, {(void *)0, (void *)0, &g_38, &g_38}, {(void *)0, &g_38, (void *)0, &g_38}}, {{&g_38, &g_38, (void *)0, &g_38}, {(void *)0, &g_38, &g_38, &g_38}, {&g_38, (void *)0, &g_38, &g_38}}, {{(void *)0, &g_38, (void *)0, &g_38}, {&g_38, &g_38, &g_38, &g_38}, {(void *)0, &g_38, &g_38, &g_38}}};
static struct S0 *const volatile g_43 = &g_38;

static uint64_t func_1(void);
static int32_t func_8(int16_t p_9, union U1 p_10, int32_t p_11, union U1 p_12, uint64_t p_13);

static uint64_t func_1(void) {
  uint32_t l_18 = 0UL;
  const int32_t *l_21 = (void *)0;
  for (g_5 = 0; (g_5 != (-11)); g_5--) {
    int32_t *l_19[2];
    int8_t *l_22 = &g_23;
    int i;
    for (i = 0; i < 2; i++)
      l_19[i] = (void *)0;
    g_35 &= func_8(((safe_mul_func_int32_t_s_s(((g_20 ^= l_18) | (((void *)0 == l_21) >= ((*l_22) = g_2))), ((g_5, (((g_5 >= (g_5, (((((safe_mul_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(0xE177L, (((safe_mul_func_int64_t_s_s(g_5, g_5)) > l_18), g_5))) & g_5), g_5)) >= g_5) > g_5) < g_5) >= g_5))) & g_5), l_21)) == &g_5))) ^ 18446744073709551606UL), g_30, g_31, g_30, g_31);
  }
  for (g_5 = 21; (g_5 != 3); g_5 = safe_sub_func_int64_t_s_s(g_5, 6)) {
    struct S0 *l_40[2];
    struct S0 *l_41[2][1][1];
    int i, j, k;
    for (i = 0; i < 2; i++)
      l_40[i] = &g_38;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 1; j++) {
        for (k = 0; k < 1; k++)
          l_41[i][j][k] = &g_38;
      }
    }
    (*g_43) = g_38;
  }
  return g_23;
}

static int32_t func_8(int16_t p_9, union U1 p_10, int32_t p_11, union U1 p_12, uint64_t p_13) {
  int32_t *l_32 = (void *)0;
  (*g_33) = l_32;
  return p_9;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
