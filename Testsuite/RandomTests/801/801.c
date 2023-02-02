// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_6 = 1UL;
static uint32_t g_8 = 0xE08CCCDDL;
static uint32_t g_11 = 0x7516A205L;
static int32_t g_38 = 0xFEC1E183L;
static uint32_t g_40[2] = {0UL, 0UL};
static int32_t g_42[4] = {0xF77D900DL, 0xF77D900DL, 0xF77D900DL, 0xF77D900DL};
static int32_t *g_41 = &g_42[0];

static int32_t func_1(void);
static int32_t *func_2(uint32_t p_3, uint32_t p_4, int32_t *p_5);

static int32_t func_1(void) {
  uint32_t *l_7 = &g_8;
  int32_t l_9 = 0xC5165352L;
  uint32_t *l_10 = &g_11;
  g_41 = func_2(((*l_7) |= g_6), (--(*l_10)), &l_9);
  return g_42[0];
}

static int32_t *func_2(uint32_t p_3, uint32_t p_4, int32_t *p_5) {
  uint32_t *l_16 = &g_6;
  uint32_t *l_17 = &g_8;
  const int32_t l_35 = 0xA7221EBCL;
  int8_t *l_36 = (void *)0;
  int8_t *l_37 = (void *)0;
  uint32_t *l_39 = &g_40[1];
  (*p_5) = (safe_lshift_func_uint32_t_u_u(((*l_17) = ((*l_16) = p_3)), ((*l_39) ^= ((+(((safe_sub_func_uint8_t_u_u(p_3, p_4)) == (((((safe_rshift_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((-8L) <= (g_11 | 4UL)), (((((g_38 &= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint64_t_u_s(((((safe_div_func_uint8_t_u_u((g_11 < (safe_add_func_int8_t_s_s(p_4, ((((((safe_rshift_func_int32_t_s_u(g_11, 10)) >= g_11), (-4L)) & 0x258D0336D065835ALL), 0x5BL) > 0xC2L)))), g_11)) > l_35) || l_35) < 18446744073709551610UL), 17)), g_11))) > g_11) <= l_35) ^ (*p_5)) > g_11))), g_11)) | l_35) == g_11) & p_4) < g_11)), p_3)) ^ 0L))));
  return p_5;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_40[i], "g_40[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 4; i++) {
    transparent_crc(g_42[i], "g_42[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
