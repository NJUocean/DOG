// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 1L;
static int32_t g_3 = 0xC2DB2212L;
static volatile uint32_t g_8 = 0xEEA2A3B3L;
static int32_t g_24 = 6L;

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int8_t l_13 = 0xDAL;
  for (g_3 = 1; (g_3 < 10); g_3++) {
    int8_t l_14 = 0x0AL;
    int32_t *l_23 = &g_24;
    (*l_23) |= (safe_mod_func_int8_t_s_s((g_8 && (safe_mul_func_uint16_t_u_u((((((!(safe_unary_minus_func_uint32_t_u((g_8, l_13)))) ^ l_14) | (1UL || (safe_mod_func_int16_t_s_s((l_13, (l_14, ((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((g_3 > (g_3, 0x9035L)), l_13)), g_3), l_14)), g_3)) <= 0xD5FEL))), l_13)))), (-4L)) <= g_3), g_3))), 1L));
  }
  return g_2;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
