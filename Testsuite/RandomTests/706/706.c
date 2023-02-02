// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const uint16_t g_9 = 9UL;
static int32_t g_32 = 0xC14C38D6L;
static volatile uint32_t g_38 = 0UL;
static int32_t *volatile g_41 = &g_32;
static int32_t *g_44 = &g_32;
static int32_t **volatile g_43 = &g_44;

static uint8_t func_1(void);
static uint16_t func_3(int64_t p_4, uint32_t p_5, uint64_t p_6);

static uint8_t func_1(void) {
  int32_t l_2[2];
  int32_t *const l_42 = &g_32;
  int i;
  for (i = 0; i < 2; i++)
    l_2[i] = 1L;
  (*g_41) = (l_2[0] > func_3((safe_lshift_func_int8_t_s_u(((g_9, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(g_9, 5)) || (safe_rshift_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(((((l_2[0] >= (safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s(g_9, ((safe_div_func_uint64_t_u_u((((1UL <= ((safe_sub_func_int64_t_s_s(((((g_9, 0x3EDBL) & 0x523DL) ^ g_9) || g_9), l_2[0])) > 255UL)) >= 0xE265L) >= l_2[0]), g_9)) >= l_2[0]))), g_9))) <= g_9) != g_9), g_9), 0x5E4D8D95L)), g_9)) | g_9), 10))), g_9)), 0))) || l_2[0]), l_2[0])), l_2[1], l_2[1]));
  (*g_43) = l_42;
  return g_9;
}

static uint16_t func_3(int64_t p_4, uint32_t p_5, uint64_t p_6) {
  int32_t l_30 = 0xCF419C2BL;
  int32_t *l_31 = &g_32;
  int32_t *l_33 = (void *)0;
  int32_t *l_34 = &g_32;
  int32_t *l_35 = &g_32;
  int32_t *l_36 = &g_32;
  int32_t *l_37[5];
  int i;
  for (i = 0; i < 5; i++)
    l_37[i] = &g_32;
  g_38--;
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
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
