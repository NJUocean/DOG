// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int64_t g_2[4] = {1L, 1L, 1L, 1L};
static int32_t g_11 = (-1L);
static int32_t g_18 = 0xE5AB06C0L;
static int32_t *g_17 = &g_18;
static uint16_t g_42 = 0x0127L;
static int8_t g_44 = 0x8AL;
static uint32_t g_63[2] = {18446744073709551614UL, 18446744073709551614UL};
static int8_t g_77 = 9L;

static int8_t func_1(void);
static int32_t *func_3(uint32_t p_4);

static int8_t func_1(void) {
  uint64_t *l_10[4][3] = {{(void *)0, (void *)0, (void *)0}, {(void *)0, (void *)0, (void *)0}, {(void *)0, (void *)0, (void *)0}, {(void *)0, (void *)0, (void *)0}};
  int32_t l_21[5];
  int32_t l_40 = (-1L);
  uint16_t *l_41 = &g_42;
  int8_t *l_43 = &g_44;
  int32_t *l_66 = &g_18;
  const int16_t l_73 = 0xD133L;
  int32_t *l_78 = &l_40;
  int i, j;
  for (i = 0; i < 5; i++)
    l_21[i] = 0L;
  l_66 = (g_2[0], func_3(((((safe_lshift_func_uint8_t_u_s(
                                (safe_mod_func_int64_t_s_s((((*l_43) = (((safe_unary_minus_func_uint64_t_u((((g_11 ^= 0xE4B9A733E34B64B5LL) >= (~((safe_lshift_func_int32_t_s_u(((safe_sub_func_int16_t_s_s((g_17 != (void *)0), (safe_mul_func_int64_t_s_s(l_21[0], l_21[2])))) ^ (!(safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((~((safe_mul_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((*l_41) = (((safe_rshift_func_int16_t_s_u(g_2[2], 0)) | (safe_lshift_func_int8_t_s_s((g_18, (safe_lshift_func_uint32_t_u_s((l_40 = ((safe_div_func_int16_t_s_s((g_18, g_18), l_21[0])) & 0x714BA09AL)), l_21[0]))), 6))) != l_21[0])), g_18)) < 9L), 4294967295UL)) && 0x2C2A4E630971CF71LL)), 12)), l_21[1])))), 29)) < l_21[1]))), g_2[1]))) && l_40), 0xCAL)) > 0xB8L), 0x14227F44FB66C146LL)), 7)) <= g_18),
                           l_21[0]) == 4294967295UL)));
  (*l_78) |= (g_63[0] || (safe_rshift_func_uint32_t_u_u(((safe_lshift_func_uint32_t_u_s(((g_42 | 0UL) == ((*l_43) = (safe_mul_func_int16_t_s_s((((((g_44 | (*l_66)) >= l_73), l_66) != l_66) > ((safe_lshift_func_int8_t_s_s((+(g_2[1] <= g_42)), g_77)) == 0x05CA7CEEL)), 0x7B83L)))), 25)), g_2[0]), g_42)));
  return (*l_66);
}

static int32_t *func_3(uint32_t p_4) {
  int64_t l_49[5][1][2] = {{{0L, 0x742D63D2C82F3C07LL}}, {{(-1L), 0x742D63D2C82F3C07LL}}, {{0L, (-1L)}}, {{0xA5D0C9AD537E8F88LL, 0xA5D0C9AD537E8F88LL}}, {{0xA5D0C9AD537E8F88LL, (-1L)}}};
  const int32_t l_52[3] = {0x0538FD23L, 0x0538FD23L, 0x0538FD23L};
  uint16_t *l_61[2][1][5] = {{{(void *)0, &g_42, &g_42, &g_42, (void *)0}}, {{(void *)0, &g_42, &g_42, &g_42, (void *)0}}};
  uint32_t *l_62[2][3];
  int32_t l_64 = 0xD76C132DL;
  int16_t l_65 = 1L;
  int i, j, k;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++)
      l_62[i][j] = &g_63[1];
  }
  (*g_17) = (+((safe_mul_func_int64_t_s_s((!(l_49[1][0][1] = g_18)), (((safe_mul_func_int16_t_s_s(((p_4 < l_52[2]) || (safe_rshift_func_uint16_t_u_u(((((l_64 = (safe_add_func_int8_t_s_s(p_4, (safe_div_func_uint8_t_u_u(5UL, (safe_sub_func_int16_t_s_s(p_4, (&g_42 != l_61[1][0][0])))))))), 0xAB60L) > 0xA2E2L) < p_4), l_52[2]))), l_52[2])), p_4) <= 1L))), l_65));
  return &g_18;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_63[i], "g_63[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_77, "g_77", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
