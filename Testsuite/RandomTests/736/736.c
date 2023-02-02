// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint64_t g_9 = 0x865B49D585ED0657LL;
static uint32_t g_21 = 0UL;
static uint32_t g_34 = 4294967286UL;
static int32_t *volatile g_40 = (void *)0;
static int32_t g_42 = 0L;
static int32_t *volatile g_41 = &g_42;

static int64_t func_1(void);
static uint64_t func_2(uint8_t p_3, uint64_t p_4, int32_t p_5, const int32_t p_6);

static int64_t func_1(void) {
  int16_t l_14[3];
  int64_t l_32[5];
  uint16_t *l_33 = (void *)0;
  uint32_t l_35 = 1UL;
  int32_t l_36 = 8L;
  int32_t *l_37 = (void *)0;
  int32_t *l_38 = &l_36;
  int32_t *l_39 = (void *)0;
  int i;
  for (i = 0; i < 3; i++)
    l_14[i] = (-10L);
  for (i = 0; i < 5; i++)
    l_32[i] = (-10L);
    (*g_41) = ((*l_38) = (((func_2(((l_36 = (safe_div_func_int16_t_s_s((g_9 != (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_14[2], (safe_mod_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_s((((((safe_add_func_uint64_t_u_u(l_14[2], (((g_21 > (+(safe_mod_func_int8_t_s_s(l_14[2], ((((safe_sub_func_int8_t_s_s((((g_34 = (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_21, (246UL >= ((((!l_32[2]) == g_21) && 18446744073709551615UL) ^ 0xDF2AL)))), (-3L)))) != l_32[3]) & 0x8770L), g_21)) || g_34) , l_14[2]) && l_14[2]))))) >= l_35) < l_14[2]))) && g_21) ^ l_14[2]) , 1L) <= 0L), g_21)) & g_21) > g_21) & 0x1E1CL) < 0xBA2D3C5EBB4EE00BLL) ^ l_35), g_21)))), g_21))), l_32[2]))) != g_21), g_21, l_32[2], l_14[2]) != (-1L)) , 0xF7L) ^ l_14[2]));
    return g_9;
}

static uint64_t func_2(uint8_t p_3, uint64_t p_4, int32_t p_5, const int32_t p_6) { return g_21; }

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
