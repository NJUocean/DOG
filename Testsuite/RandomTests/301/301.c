// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  int32_t f0;
  int64_t f1;
  int64_t f2;
  volatile int32_t f3;
  int8_t f4;
};

static int16_t g_7 = (-1L);
static int16_t g_25[2] = {0xAC3AL, 0xAC3AL};
static int32_t *g_27 = (void *)0;
static uint8_t g_42 = 2UL;
static uint8_t g_56 = 0UL;
static int64_t g_58[2] = {0x206CBC8CA929EFCFLL, 0x206CBC8CA929EFCFLL};
static int32_t g_60 = 0x4D441147L;
static int32_t *volatile g_59[2][4][1] = {{{&g_60}, {&g_60}, {&g_60}, {&g_60}}, {{&g_60}, {&g_60}, {&g_60}, {&g_60}}};
static int32_t **const volatile g_63 = &g_27;
static struct S1 g_64 = {5L, 1L, 0x847E08A84A000286LL, -1L, 0x95L};

static uint16_t func_1(void);
static int32_t *func_2(uint16_t p_3, int32_t p_4, int32_t *p_5, int32_t *p_6);

static uint16_t func_1(void) {
  const uint64_t l_8 = 0x649F6D4A0D461E3FLL;
  int32_t *l_13 = (void *)0;
  int16_t *l_23 = (void *)0;
  int16_t *l_24 = &g_25[1];
  uint32_t l_26 = 0x00CE3D97L;
  (*g_63) = func_2(g_7, g_7, ((l_8 & ((safe_add_func_uint64_t_u_u(l_8, (((safe_mul_func_uint8_t_u_u(((l_8, l_13) == ((((((((~l_8) < (safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(((*l_24) = ((safe_sub_func_uint16_t_u_u(0UL, g_7)), g_7)), 65533UL)), g_25[1]), 0x8BBDL), l_26)), 0x7A7BF748BBE26B5CLL))), 255UL) > 7L) & 65535UL) < l_8) && 0x79EBEF9FL), (void *)0)), 1L)) > (-1L)) != 255UL))), 8L)), g_27), g_27);
  g_64 = g_64;
  return g_64.f0;
}

static int32_t *func_2(uint16_t p_3, int32_t p_4, int32_t *p_5, int32_t *p_6) {
  uint32_t l_34 = 18446744073709551610UL;
  uint8_t *l_41[4];
  uint8_t *l_55 = &g_56;
  int64_t *l_57 = &g_58[0];
  int32_t *l_61 = (void *)0;
  int32_t l_62[5] = {5L, 5L, 5L, 5L, 5L};
  int i;
  for (i = 0; i < 4; i++)
    l_41[i] = &g_42;
  l_62[0] ^= ((((*l_57) ^= ((safe_mod_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u(65535UL, l_34)), (safe_mod_func_uint16_t_u_u(g_7, (((safe_mul_func_uint64_t_u_u(((void *)0 != &g_25[1]), p_4)) > (safe_sub_func_uint8_t_u_u((g_42++), ((safe_rshift_func_int32_t_s_u(((safe_rshift_func_int64_t_s_u(p_3, ((safe_div_func_uint64_t_u_u(((((safe_unary_minus_func_uint8_t_u((~((safe_div_func_uint64_t_u_u((l_55 == l_41[1]), l_34)) & l_34)))) && 0x8824L) == g_25[1]) && l_34), g_25[1])) <= l_34))) & l_34), 12)) & g_56)))), 65535UL))))) & g_7), 0x3A20L)) < 1UL)) == g_56) && l_34);
  return p_6;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_25[i], "g_25[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_58[i], "g_58[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_60, "g_60", print_hash_value);
  transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
  transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
  transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
  transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
  transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
