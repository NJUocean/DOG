// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[3] = {3L, 3L, 3L};
static int32_t g_3 = 2L;
static uint16_t g_11 = 0x44D0L;
static int32_t g_31 = 1L;
static uint8_t g_47 = 0xA5L;
static uint64_t g_49 = 18446744073709551615UL;
static int8_t g_51[5] = {1L, 1L, 1L, 1L, 1L};
static int32_t g_54 = 0x09C4F4FCL;
static int32_t *g_67 = &g_3;

static int16_t func_1(void);
static uint32_t func_6(int32_t p_7, int8_t p_8, uint32_t p_9);

static int16_t func_1(void) {
  uint8_t l_19 = 0x63L;
  uint32_t l_57 = 0x3986B299L;
  for (g_3 = 0; (g_3 != (-18)); g_3--) {
    uint16_t *l_10 = &g_11;
    int32_t l_14[5] = {0x733E34B6L, 0x733E34B6L, 0x733E34B6L, 0x733E34B6L, 0x733E34B6L};
    int32_t *l_53 = &g_54;
    int i;
    (*l_53) |= ((func_6(((((*l_10) ^= (0UL ^ 5L)) & g_2[0]), (safe_mod_func_int16_t_s_s(((-1L) <= g_2[2]), ((*l_10) = l_14[0])))), (((safe_lshift_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(0x272BL, (g_3 || g_3))), l_14[1])) == 0UL), l_19), g_3) >= l_14[4]), g_2[1]);
  }
  for (g_31 = (-7); (g_31 != (-21)); g_31--) {
    uint16_t *l_65 = &g_11;
    uint16_t **l_66 = &l_65;
    int32_t l_68 = 4L;
    (*g_67) = (l_57, (l_57 <= (safe_mul_func_uint64_t_u_u((((((~(safe_add_func_int8_t_s_s(((g_54, ((((*l_66) = l_65) != (void *)0) | (((void *)0 == g_67) < ((g_11 || g_51[1]), (-2L))))) && g_2[0]), l_19))) >= 0L), 0xE8L) > 1UL), g_31), l_57))));
    if (l_68)
      continue;
  }
  return g_51[1];
}

static uint32_t func_6(int32_t p_7, int8_t p_8, uint32_t p_9) {
  uint32_t l_22 = 1UL;
  int32_t *l_30 = &g_31;
  uint8_t *l_46[2][3] = {{&g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47}};
  uint64_t *l_48[4];
  int8_t *l_50[2];
  int32_t l_52 = (-1L);
  int i, j;
  for (i = 0; i < 4; i++)
    l_48[i] = &g_49;
  for (i = 0; i < 2; i++)
    l_50[i] = &g_51[1];
  for (g_11 = 0; (g_11 < 16); g_11 = safe_add_func_uint64_t_u_u(g_11, 1)) {
    return l_22;
  }
  l_52 = ((safe_unary_minus_func_int8_t_s((p_8 |= ((+g_2[2]) < (+(((((4294967293UL || (l_22 == (((safe_mod_func_uint32_t_u_u(((g_51[0] = (((*l_30) |= 9L) > (safe_div_func_uint8_t_u_u((65535UL <= ((((g_49 ^= (safe_mul_func_uint32_t_u_u(g_11, ((safe_lshift_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(0UL, 0x2C2A4E63L)), 9)) != (safe_div_func_uint64_t_u_u(((g_47 &= (safe_add_func_int8_t_s_s((8UL <= 0xA307L), g_3))), 0UL), g_11)))))) < g_11), (void *)0) != &g_11)), 0xE6L)))), (*l_30)), g_3)) >= g_11) | g_11))) < 4294967295UL), &g_11) == (void *)0) & g_11)))))) < 0x538FD232038BE40ELL);
  return (*l_30);
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_51[i], "g_51[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_54, "g_54", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
