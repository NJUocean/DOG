// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S2 {
  volatile int64_t f0;
  unsigned f1 : 9;
  uint8_t f2;
  uint64_t f3;
  uint8_t f4;
};
#pragma pack(pop)

union U4 {
  int32_t f0;
  const unsigned f1 : 8;
  const int16_t f2;
  volatile int64_t f3;
  volatile uint64_t f4;
};

static uint64_t g_20[4] = {0xB88CDF8ABFF5ECCELL, 0xB88CDF8ABFF5ECCELL, 0xB88CDF8ABFF5ECCELL, 0xB88CDF8ABFF5ECCELL};
static int32_t g_28 = 0x9B45C761L;
static volatile union U4 g_30 = {0x34D89BB6L};
static const volatile union U4 *volatile g_29[1][2] = {{&g_30, &g_30}};
static uint64_t g_32 = 0UL;
static uint8_t g_34[1][3] = {{0x76L, 0x76L, 0x76L}};
static union U4 g_36 = {-5L};
static const union U4 *g_35[5] = {&g_36, &g_36, &g_36, &g_36, &g_36};
static union U4 g_39 = {0x0386B9BDL};
static union U4 g_40 = {1L};
static union U4 *g_38[3][3] = {{&g_39, &g_39, &g_39}, {&g_40, &g_40, &g_40}, {&g_39, &g_39, &g_39}};
static union U4 g_42 = {-9L};
static union U4 g_43[1][5][4] = {{{{1L}, {0xF936BB35L}, {1L}, {0xF936BB35L}}, {{1L}, {0xF936BB35L}, {1L}, {0xF936BB35L}}, {{1L}, {0xF936BB35L}, {1L}, {0xF936BB35L}}, {{1L}, {0xF936BB35L}, {1L}, {0xF936BB35L}}, {{1L}, {0xF936BB35L}, {1L}, {0xF936BB35L}}}};
static struct S2 g_46 = {8L, 6, 255UL, 18446744073709551615UL, 9UL};
static volatile union U4 *g_48 = (void *)0;
static volatile union U4 **volatile g_47 = &g_48;

static int32_t func_1(void);
static struct S2 func_2(const union U4 *p_3, const uint16_t p_4, union U4 *p_5, union U4 *p_6);

static int32_t func_1(void) {
  int16_t l_15 = 0x4326L;
  int32_t l_21[4][3][4] = {{{2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}}, {{2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}}, {{2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}}, {{2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}, {2L, 1L, 2L, 1L}}};
  int32_t *l_26 = (void *)0;
  int32_t *l_27 = &g_28;
  uint64_t *l_31 = &g_32;
  uint8_t *l_33 = &g_34[0][2];
  const int32_t l_37 = 6L;
  union U4 *l_41[5] = {&g_43[0][0][3], &g_43[0][0][3], &g_43[0][0][3], &g_43[0][0][3], &g_43[0][0][3]};
  int i, j, k;
  (*g_47) = (func_2(((((*l_33) = (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_15 == (((safe_add_func_uint64_t_u_u(((((safe_sub_func_int32_t_s_s(l_15, (g_20[1] == (l_21[1][0][2] = g_20[1])))) >= ((((safe_lshift_func_uint64_t_u_s(((*l_31) |= (safe_add_func_int32_t_s_s(((*l_27) = 0xE82A74DBL), ((((0xB9CEC02DFCE95866LL && 0x883FAA058A13C444LL), g_29[0][0]) == (void *)0) || 1UL)))), 0)) && g_30.f0) == l_15) == 0x473ECFB8L)) > g_20[3]), (*l_27)), g_20[1])) & 0x2C3CC8C9L) >= g_20[1])), g_20[1])), g_20[1])) < 65532UL), g_20[1]))) && 1UL), g_35[4]), l_37, g_38[0][2], l_41[0]), &g_30);
  return g_46.f4;
}

static struct S2 func_2(const union U4 *p_3, const uint16_t p_4, union U4 *p_5, union U4 *p_6) {
  for (g_42.f0 = 0; (g_42.f0 == (-15)); g_42.f0 = safe_sub_func_uint64_t_u_u(g_42.f0, 5)) {
    if (g_34[0][2])
      break;
  }
  return g_46;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    transparent_crc(g_20[i], "g_20[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
  transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
  transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
  transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_43[i][j][k].f0, "g_43[i][j][k].f0", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
  transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
  transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
  transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
  transparent_crc(g_46.f4, "g_46.f4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
