// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int8_t g_16 = (-9L);
static const uint8_t g_32 = 0x79L;
static int32_t g_35 = 4L;
static uint64_t g_37 = 0xA08552AD14CA72CBLL;
static uint8_t g_39 = 0UL;
static const int32_t g_45 = 0xD0615A03L;
static int32_t g_51 = (-1L);
static int64_t g_52 = (-1L);
static int32_t g_54 = 7L;

static uint32_t func_1(void);
static int32_t func_2(int32_t p_3, const uint8_t p_4, uint32_t p_5, uint16_t p_6);

static uint32_t func_1(void) {
  const uint32_t l_19 = 4294967295UL;
  uint64_t *l_36 = &g_37;
  int32_t *l_38 = (void *)0;
  int32_t *l_53[4] = {&g_54, &g_54, &g_54, &g_54};
  int i;
  g_54 |= func_2((g_39 &= (~(((*l_36) = (((-3L) < ((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((g_16 || g_16) == (((safe_div_func_uint8_t_u_u(l_19, ((safe_rshift_func_uint32_t_u_s((safe_rshift_func_uint16_t_u_u(8UL, 0)), (safe_div_func_int32_t_s_s((g_35 = (safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s(1L, (safe_mul_func_uint16_t_u_u(g_32, (safe_add_func_int32_t_s_s((((((l_19 != (((l_19 && g_32) >= g_32) & g_32)) == g_32) > g_32) < 0xC6L) == g_32), g_32)))))), 0x90EF874ACC0136EFLL))), l_19)))) || l_19))) >= g_32) != g_32)), l_19)) & l_19), g_32)) & g_32) & l_19), l_19)), 1L)), g_35)) != 0x5B6062CFL)) <= g_32))), g_32, g_32, g_32);
  return g_45;
}

static int32_t func_2(int32_t p_3, const uint8_t p_4, uint32_t p_5, uint16_t p_6) {
  const int32_t *l_44 = &g_45;
  uint64_t *l_46 = &g_37;
  int32_t l_47 = 0xF0B53CF5L;
  int32_t *l_50[3];
  int i;
  for (i = 0; i < 3; i++)
    l_50[i] = &g_51;
  g_52 ^= (g_51 ^= (safe_mul_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(0x44L, ((void *)0 != l_44))), ((1L != ((l_46 != (void *)0), 0UL)) <= (l_47 <= (safe_add_func_int32_t_s_s(7L, l_47))))), g_35)));
  return p_6;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  transparent_crc(g_54, "g_54", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
