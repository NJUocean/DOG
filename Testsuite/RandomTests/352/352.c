// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const signed f0 : 23;
  unsigned f1 : 16;
  uint32_t f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
  unsigned f0 : 14;
};
#pragma pack(pop)

static int16_t g_10 = 0xD2ABL;
static volatile int32_t g_24[3] = {(-1L), (-1L), (-1L)};
static volatile int32_t *volatile g_23[3] = {&g_24[2], &g_24[2], &g_24[2]};
static struct S1 g_33 = {99};
static uint32_t g_36 = 0x891F433CL;
static int32_t g_38 = (-1L);
static int32_t *g_37 = &g_38;
static int64_t g_40[5][1] = {{0x3D58E56A96DAD8BELL}, {0x3D58E56A96DAD8BELL}, {0x3D58E56A96DAD8BELL}, {0x3D58E56A96DAD8BELL}, {0x3D58E56A96DAD8BELL}};
static uint16_t g_42[1][2] = {{0xC702L, 0xC702L}};
static int8_t g_65 = (-2L);
static int32_t g_69[3][3][1] = {{{0x515B8451L}, {0x515B8451L}, {1L}}, {{0x515B8451L}, {0x515B8451L}, {1L}}, {{0x515B8451L}, {0x515B8451L}, {1L}}};
static int32_t **volatile g_70 = &g_37;

static int16_t func_1(void);
static int32_t *func_2(int64_t p_3);

static int16_t func_1(void) {
  uint32_t l_12 = 0xF0842170L;
  uint32_t *l_34 = (void *)0;
  uint32_t *l_35 = &g_36;
  int64_t *l_39 = &g_40[4][0];
  uint16_t *l_41 = &g_42[0][1];
    (*g_70) = func_2((safe_lshift_func_int16_t_s_u((safe_lshift_func_int64_t_s_u(((((safe_mod_func_int32_t_s_s(g_10, ((+(l_12 == (safe_add_func_int16_t_s_s(((g_10 , ((safe_unary_minus_func_int16_t_s(((((*l_41) = (((*l_39) &= (safe_mod_func_int64_t_s_s(((((((+(safe_div_func_uint32_t_u_u((l_12 | (((g_23[2] != ((safe_unary_minus_func_uint64_t_u(((+((*l_35) &= (g_10 & ((safe_mul_func_uint16_t_u_u((((-1L) != (safe_mod_func_int8_t_s_s(l_12, (((safe_sub_func_uint64_t_u_u((g_33 , 0x9843657218670FC2LL), l_12)) & l_12) ^ 0x2DL)))) ^ l_12), l_12)) , g_10)))) < l_12))) , g_37)) < l_12) > g_10)), l_12))) < l_12) >= 0L) < g_33.f0) == g_10) <= l_12), 0xEE6EE3E4F6F4846ELL))) >= 1UL)) > l_12) , 0xE9D2L))) ^ g_33.f0)) >= g_10), l_12)))) | 0x54656E2E31B54653LL))) && l_12) || 0x3A56CF6DL) != l_12), g_33.f0)), 13)));
    return g_24[2];
}

static int32_t *func_2(int64_t p_3) {
  uint16_t l_43 = 0xC6E2L;
  struct S0 l_50 = {-1775, 123, 0xFAC86E89L};
  uint32_t *l_61 = &l_50.f2;
  uint16_t *l_62 = &g_42[0][0];
  int64_t l_63 = (-1L);
  int8_t *l_64 = &g_65;
  int32_t l_66 = 0x546B77D8L;
  int8_t l_67 = 0L;
  int32_t *l_68 = &g_69[1][0][0];
  (*l_68) &= ((l_43 && 7L) <= (safe_lshift_func_uint64_t_u_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint32_t_u_u(((l_66 |= (0x12A55B90L == (((void *)0 != &g_42[0][1]) | ((l_50, ((*l_64) ^= (safe_rshift_func_int16_t_s_s(l_50.f1, (safe_div_func_uint16_t_u_u(((*l_62) = ((safe_sub_func_int8_t_s_s((((safe_rshift_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((*l_61) ^= ((l_61 != l_61) >= l_43)), l_50.f0)), (*g_37))) == 6UL), 0x24L), g_42[0][0])) || 0xCAE3L)), l_63)))))) ^ 0L)))) | (-1L)), l_67)), l_67)), 49)));
  return &g_38;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_10, "g_10", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_24[i], "g_24[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_40[i][j], "g_40[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_42[i][j], "g_42[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_65, "g_65", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_69[i][j][k], "g_69[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
