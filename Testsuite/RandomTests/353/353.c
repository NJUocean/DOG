// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const int64_t g_12 = (-3L);
static uint32_t g_17 = 0UL;
static int32_t g_21[5] = {0xD0B5486BL, 0xD0B5486BL, 0xD0B5486BL, 0xD0B5486BL, 0xD0B5486BL};
static int32_t g_23 = 0x29EF4A04L;
static int32_t *const volatile g_22 = &g_23;
static int32_t *g_25 = &g_23;
static int32_t **volatile g_24 = &g_25;
static int32_t *volatile g_28[2] = {(void *)0, (void *)0};
static uint8_t g_57 = 1UL;
static int16_t g_61[3][4][4] = {{{6L, 6L, 0x2C03L, 6L}, {6L, 0x3830L, 0x3830L, 6L}, {0x3830L, 6L, 0x3830L, 0x3830L}, {6L, 6L, 0x2C03L, 6L}}, {{6L, 0x3830L, 0x3830L, 6L}, {0x3830L, 6L, 0x3830L, 0x3830L}, {6L, 6L, 0x2C03L, 6L}, {6L, 0x3830L, 0x3830L, 6L}}, {{0x3830L, 6L, 0x3830L, 0x3830L}, {6L, 6L, 0x2C03L, 0x3830L}, {0x3830L, 0x2C03L, 0x2C03L, 0x3830L}, {0x2C03L, 0x3830L, 0x2C03L, 0x2C03L}}};

static uint32_t func_1(void);
static uint32_t func_6(int16_t p_7, uint32_t p_8, uint64_t p_9, uint16_t p_10, int32_t p_11);

static uint32_t func_1(void) {
  uint8_t l_13 = 0x63L;
  uint32_t *l_16 = &g_17;
  uint8_t *l_27 = &l_13;
  int32_t *l_29 = &g_23;
  int64_t l_37 = 0L;
  uint8_t l_56[4];
  int32_t **l_58 = &g_25;
  int16_t *l_59 = (void *)0;
  int16_t *l_60[5] = {&g_61[1][0][2], &g_61[1][0][2], &g_61[1][0][2], &g_61[1][0][2], &g_61[1][0][2]};
  int i;
  for (i = 0; i < 4; i++)
    l_56[i] = 1UL;
  (*l_29) = (safe_div_func_int8_t_s_s(0xD8L, ((safe_div_func_uint8_t_u_u(((*l_27) = (func_6((g_12, l_13), l_13, (safe_mul_func_uint32_t_u_u(((*l_16)++), l_13)), ((safe_unary_minus_func_int32_t_s(l_13)) | 0xB77278FA8F90A3CFLL), (g_12 > l_13)) == (-1L))), g_21[0])) && 0x03L)));
  (*l_29) = (safe_mod_func_int16_t_s_s((g_61[0][1][3] = (((g_23, ((safe_mod_func_int16_t_s_s((!((g_21[4] || (((*l_29) == (safe_div_func_uint32_t_u_u(l_37, (safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((g_57 ^= (safe_div_func_uint64_t_u_u(((safe_rshift_func_int64_t_s_u(((*l_29) != (safe_rshift_func_int32_t_s_u((safe_add_func_uint32_t_u_u((*l_29), (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(l_56[3], g_12)), ((*l_29), (*l_29)))) || (*l_29)), 0)))), g_12))), (*l_29))) ^ g_21[0]), 0x89BB643C8F438361LL))), (void *)0) != l_58), (*l_29))), g_17))))), (*g_22))) < 0xB1F059960698B42DLL)), (-9L))), (*l_29))) || (*l_29)) == g_12)), 0xF6DDL));
  return g_61[2][1][2];
}

static uint32_t func_6(int16_t p_7, uint32_t p_8, uint64_t p_9, uint16_t p_10, int32_t p_11) {
  int16_t l_26 = 4L;
  for (g_17 = 0; (g_17 <= 4); g_17 += 1) {
    for (p_9 = 0; (p_9 <= 4); p_9 += 1) {
      (*g_22) &= g_12;
    }
    if ((*g_22))
      break;
  }
  (*g_24) = &p_11;
  return l_26;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_21[i], "g_21[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_57, "g_57", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_61[i][j][k], "g_61[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
