// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static volatile int32_t g_4 = (-1L);
static int32_t g_5 = 0x4EA6801FL;
static volatile int32_t g_8[4] = {0x17E5C285L, 0x17E5C285L, 0x17E5C285L, 0x17E5C285L};
static int32_t g_9 = 0x3C407858L;
static uint32_t g_35 = 1UL;
static int32_t g_39 = 0L;
static const int32_t *g_44 = (void *)0;
static const int32_t **g_43 = &g_44;
static const int32_t ***volatile g_42 = &g_43;
static int32_t *g_50 = (void *)0;
static int32_t **g_49 = &g_50;
static int32_t ***volatile g_48 = &g_49;

static int8_t func_1(void);
static int32_t func_10(uint32_t p_11, int16_t p_12, int32_t p_13);

static int8_t func_1(void) {
  int32_t l_2[2];
  int i;
  for (i = 0; i < 2; i++)
    l_2[i] = 8L;
  for (g_3 = 1; (g_3 >= 0); g_3 -= 1) {
    for (g_5 = 1; (g_5 >= 0); g_5 -= 1) {
      int i;
      return l_2[g_5];
    }
  }
  for (g_5 = (-25); (g_5 == 8); g_5++) {
    uint8_t l_40 = 0x4AL;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1) {
      int64_t l_16 = 0x9333C7D24B5E4957LL;
      int32_t *l_47 = &g_5;
      int32_t **l_46 = &l_47;
      for (g_9 = 1; (g_9 >= 0); g_9 -= 1) {
        uint32_t *l_34 = &g_35;
        int32_t *l_38 = &g_39;
        int i;
        (*l_38) = func_10(l_2[g_3], (l_2[g_3], (((((safe_mod_func_uint64_t_u_u(l_16, g_3)) > ((safe_lshift_func_int32_t_s_s(((0x3989L ^ (g_9 != ((safe_mul_func_int32_t_s_s((+(safe_div_func_uint16_t_u_u((safe_rshift_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((g_5 || (--(*l_34))), ((-10L) > ((*l_38) |= (g_8[3] | (-10L)))))), 0x1FA6F63EEDA781B5LL)) >= 1UL), 7)), l_40), 5)) <= 0xDAD4F6C5533F2A6ALL), g_9), 35)), g_3))), l_40)) >= l_2[1]))) || l_40), g_5)) > l_40)) || l_2[1]) > g_3) && 0xA52B3395L)), g_3);
        (*g_48) = l_46;
      }
    }
  }
  return g_8[3];
}

static int32_t func_10(uint32_t p_11, int16_t p_12, int32_t p_13) {
  const int32_t **l_41 = (void *)0;
  int32_t l_45 = 1L;
  for (g_39 = 0; g_39 < 4; g_39 += 1) {
    g_8[g_39] = 1L;
  }
  (*g_42) = l_41;
  return l_45;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_8[i], "g_8[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
