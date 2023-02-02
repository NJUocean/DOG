// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 24;
  signed f1 : 13;
  unsigned f2 : 27;
  signed f3 : 27;
  signed f4 : 30;
};

static int32_t g_16 = 0x7F4039EEL;
static uint32_t g_21 = 1UL;
static uint64_t g_32 = 0x8F57F54AB10079D6LL;
static uint64_t g_36 = 0x4B1C2FBF3F079038LL;
static int32_t g_40 = 0L;
static int32_t *g_43 = &g_16;
static int32_t g_46 = 0x64292628L;
static int32_t *volatile g_47 = (void *)0;

static uint32_t func_1(void);
static int32_t func_10(int32_t p_11, int8_t p_12, uint64_t p_13, int32_t p_14, uint32_t p_15);

static uint32_t func_1(void) {
  int16_t l_4[4][4][4] = {{{9L, 0xEC32L, 0xEC32L, 9L}, {0xEC32L, 9L, 3L, 0x6D21L}, {0xEC32L, 3L, 0xEC32L, 0L}, {9L, 0x6D21L, 0L, 0L}}, {{3L, 3L, 0L, 0x6D21L}, {0x6D21L, 9L, 0L, 9L}, {3L, 0xEC32L, 0L, 0L}, {9L, 0xEC32L, 0xEC32L, 9L}}, {{0xEC32L, 9L, 3L, 0x6D21L}, {0xEC32L, 3L, 0xEC32L, 0L}, {9L, 0x6D21L, 0L, 0L}, {3L, 3L, 3L, 0L}}, {{0L, 0xEC32L, 3L, 0xEC32L}, {(-1L), 0x6D21L, 0L, 3L}, {0xEC32L, 0x6D21L, 0x6D21L, 0xEC32L}, {0x6D21L, 0xEC32L, (-1L), 0L}}};
  struct S0 l_19 = {1773, -75, 4200, 1196, 2427};
  uint32_t *l_20 = &g_21;
  int32_t *l_48 = &g_16;
  int i, j, k;
  (*l_48) = ((0x2121F90EF307D7C1LL || (((0xCF415D72L > (safe_rshift_func_uint64_t_u_s(l_4[2][1][2], ((safe_sub_func_uint8_t_u_u((+((safe_mod_func_uint16_t_u_u((func_10(g_16, l_4[2][1][2], g_16, (l_4[1][0][2] ^ l_4[2][1][2]), ((*l_20) ^= (((safe_div_func_uint8_t_u_u((l_19, l_4[2][1][2]), g_16)) & l_19.f2) | 0xC1E0F758FC5674FALL))), l_4[2][1][2]), l_19.f1)) < 0L)), l_19.f1)) && g_40)))) > l_4[2][1][3]), 0x10B09EDB9CC5119BLL)) >= l_19.f4);
  return (*l_48);
}

static int32_t func_10(int32_t p_11, int8_t p_12, uint64_t p_13, int32_t p_14, uint32_t p_15) {
  uint64_t *l_31 = &g_32;
  uint64_t *l_35 = &g_36;
  int32_t *l_39 = &g_40;
  int32_t l_44[3];
  int32_t *l_45 = &g_46;
  int i;
  for (i = 0; i < 3; i++)
    l_44[i] = (-1L);
  (*l_45) ^= (((safe_div_func_int32_t_s_s(((((safe_div_func_int32_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s((((p_11 ^ (((g_16 ^ ((*l_35) |= ((*l_31)++))) ^ (0xB06A9BEBL ^ ((*l_39) = (safe_lshift_func_int8_t_s_u(((void *)0 == l_35), p_11))))), (((((safe_sub_func_int32_t_s_s((&p_14 == (g_43 = &p_14)), (6L == p_15))), g_40), l_39) == (void *)0) != g_16))) < g_16), 1L), 0x718CE682L)))) < g_21), p_15)) ^ 0L) ^ l_44[1]) == 0x82L), g_16)) & 18446744073709551614UL) ^ g_21);
  return (*l_45);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
