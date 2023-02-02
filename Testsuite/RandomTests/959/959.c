// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const uint16_t g_6 = 0x0B99L;
static int16_t g_26[1] = {0x1920L};
static int32_t g_28 = 0x8FE4DE5AL;
static int32_t *g_27 = &g_28;
static int32_t **volatile g_29 = &g_27;
static int64_t g_50 = 1L;
static int8_t g_54 = 0x55L;
static int8_t g_56 = 1L;
static uint8_t g_58 = 246UL;
static int32_t g_64 = 0x264A05A9L;
static int32_t g_67[4] = {(-4L), (-4L), (-4L), (-4L)};

static uint32_t func_1(void);
static uint16_t func_2(const int32_t p_3, int32_t p_4, uint32_t p_5);

static uint32_t func_1(void) {
  int16_t l_7 = (-9L);
  uint32_t l_24 = 0x43260389L;
  uint64_t l_25 = 5UL;
  int32_t *l_65 = &g_28;
  int32_t *l_66 = &g_67[2];
  (*l_66) ^= ((*l_65) = (func_2(g_6, l_7, ((safe_add_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((((g_6 < g_6) & (safe_mod_func_uint16_t_u_u((((((safe_mod_func_int64_t_s_s(g_6, (safe_rshift_func_uint32_t_u_s(l_7, 21)))) > (((1UL & 0x30L), (safe_add_func_int64_t_s_s(g_6, g_6))) ^ l_7)) >= g_6) ^ g_6) || l_24), 0xFA48L))) < 0xB8L), 0xC39DL)) <= 0x611FB8EBL), 0x8CL)), l_7)), 0x4015FB26C4F32B7BLL) >= l_25), g_6)) ^ g_6)), l_7));
  return (*l_65);
}

static uint16_t func_2(const int32_t p_3, int32_t p_4, uint32_t p_5) {
  uint32_t l_48 = 0x698B42DCL;
  int64_t *l_51 = &g_50;
  for (p_5 = 0; (p_5 <= 0); p_5 += 1) {
    int16_t l_47 = 0xBBBBL;
    (*g_29) = g_27;
    for (p_4 = 0; (p_4 <= 0); p_4 += 1) {
      for (g_28 = 0; (g_28 <= 0); g_28 += 1) {
        int64_t *l_49 = &g_50;
        int8_t *l_52 = (void *)0;
        int8_t *l_53 = &g_54;
        int8_t *l_55 = &g_56;
        uint8_t *l_57 = &g_58;
        int32_t l_59 = 1L;
        int32_t *l_60 = &l_59;
        int32_t *l_61 = (void *)0;
        int32_t *l_62 = (void *)0;
        int32_t *l_63 = &g_64;
        int i;
        (*l_63) ^= ((safe_unary_minus_func_int32_t_s(((*l_60) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_26[g_28] = ((safe_lshift_func_int64_t_s_u(((+g_26[g_28]) < ((((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s(g_6, 0xDAL)))), (((((safe_mod_func_int16_t_s_s((l_47 && (g_6 != ((*l_57) = ((g_26[g_28] && ((*l_55) ^= ((*l_53) |= (((((*l_49) = l_48) && ((void *)0 != l_51)) || 0x84L) || g_6)))), p_3)))), g_28)) & g_28) | g_6) && g_6) < p_4))), (*g_29)) != &g_28) != p_5), p_3) > 1L)), l_48)) >= 0xE88F3C25A1B5826CLL)), l_59)), g_28))))) != g_28);
      }
    }
  }
  return p_4;
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
  for (i = 0; i < 1; i++) {
    transparent_crc(g_26[i], "g_26[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_54, "g_54", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  transparent_crc(g_58, "g_58", print_hash_value);
  transparent_crc(g_64, "g_64", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_67[i], "g_67[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
