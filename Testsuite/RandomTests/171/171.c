// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_9 = (-10L);
static int32_t *g_8 = &g_9;
static int64_t g_35 = 0x77AE2718B9628EAFLL;
static uint32_t g_41 = 1UL;
static uint64_t g_45 = 18446744073709551613UL;
static int64_t g_48 = 0x584EDB553A81F6EDLL;
static int32_t **const volatile g_50 = &g_8;

static int32_t func_1(void);
static int32_t *const func_2(int32_t *p_3, uint16_t p_4, int32_t *p_5, const int32_t *p_6, int32_t p_7);

static int32_t func_1(void) {
  int32_t *l_10 = &g_9;
  (*g_50) = func_2(g_8, (&g_9 == ((&g_9 == l_10), l_10)), &g_9, ((safe_rshift_func_int8_t_s_u(((l_10 == &g_9), (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((((void *)0 != &g_9) > 5L), (*l_10))), (*l_10)))), g_9)), l_10), (*l_10));
  return g_45;
}

static int32_t *const func_2(int32_t *p_3, uint16_t p_4, int32_t *p_5, const int32_t *p_6, int32_t p_7) {
  uint64_t l_19 = 0UL;
  int64_t *l_34 = &g_35;
  uint32_t *l_40 = &g_41;
  uint64_t *l_44 = &g_45;
  const int32_t l_46 = 0xAFEC1E18L;
  int32_t l_47 = (-3L);
  int32_t *const l_49 = &l_47;
  (*g_8) = ((safe_div_func_uint64_t_u_u(l_19, (safe_div_func_uint8_t_u_u((safe_lshift_func_int64_t_s_s((safe_add_func_uint8_t_u_u(0x39L, g_9)), (g_48 = (safe_mul_func_uint32_t_u_u((l_47 = (safe_div_func_int32_t_s_s((((safe_rshift_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((((*l_34) &= 0L) <= ((*l_44) = (safe_add_func_int64_t_s_s((0xD0336D06L && (safe_div_func_uint32_t_u_u(((*l_40) = g_9), (l_19, ((safe_mul_func_uint32_t_u_u(p_7, (-7L))) | g_9))))), g_9)))) ^ l_19), g_9)), 9)) == l_46) ^ g_9), l_46))), l_19))))), 0x79L)))), 0L);
  return p_5;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
