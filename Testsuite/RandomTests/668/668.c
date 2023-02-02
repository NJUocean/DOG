// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 7L;
static int64_t g_18 = 1L;
static int64_t ***volatile g_21 = (void *)0;
static int64_t *g_24 = &g_18;
static int64_t **g_23 = &g_24;
static volatile uint8_t g_27[5] = {0x29L, 0x29L, 0x29L, 0x29L, 0x29L};
static int8_t g_31 = 1L;
static uint16_t g_35[1][4][3] = {{{0UL, 1UL, 1UL}, {0UL, 1UL, 1UL}, {0UL, 1UL, 1UL}, {0UL, 1UL, 1UL}}};
static uint32_t g_42 = 0x49E3C8D3L;
static const int64_t g_55[4] = {2L, 2L, 2L, 2L};

static uint64_t func_1(void);
static int16_t func_4(int32_t p_5, int32_t p_6, int8_t p_7, int64_t p_8);

static uint64_t func_1(void) {
  uint32_t l_2[5];
  int i;
  for (i = 0; i < 5; i++)
    l_2[i] = 0x176B0F73L;
  for (g_3 = 3; (g_3 >= 0); g_3 -= 1) {
    int64_t *l_17 = &g_18;
    int8_t *l_30 = &g_31;
    int64_t ***l_43 = &g_23;
    uint32_t *l_60 = (void *)0;
    int64_t l_62 = (-8L);
    int i;
    if (((((*l_30) = (func_4(l_2[g_3], (((l_2[4] | (g_3 >= (g_3, ((*l_17) = (safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int32_t_s_s(((l_2[g_3] & g_3) || l_2[2]), ((safe_div_func_uint16_t_u_u(l_2[0], 65531UL)) > l_2[g_3]))), 11)), g_3), 0x6DAD816F93BD5DE1LL)))))) | l_2[3]), l_2[g_3]), g_3, g_3) && g_3)) ^ 0x1EL) >= g_3)) {
      return l_2[g_3];
    } else {
      uint16_t *l_34 = &g_35[0][1][1];
      uint32_t *l_41 = &g_42;
      const int32_t l_44[2] = {0x29335309L, 0x29335309L};
      int i;
      if ((250UL > (safe_sub_func_uint64_t_u_u((((((--(*l_34)) != (safe_add_func_uint32_t_u_u(l_2[g_3], ((~(((((*l_41) = 0x2BE76DCBL) | (&g_18 == &g_18)), &g_23) != l_43)) == (g_18 | ((void *)0 == &l_17)))))), 65530UL) != 0xCF63L), 0xC2C102D1F73E702BLL), l_44[1])))) {
        if (g_31)
          break;
      } else {
        const int64_t *l_54 = &g_55[3];
        const int64_t **l_53 = &l_54;
        const int64_t ***l_52[2];
        const int64_t ****l_51 = &l_52[0];
        int32_t l_61[3];
        uint32_t l_63 = 18446744073709551615UL;
        int32_t *l_64 = &l_61[2];
        int i;
        for (i = 0; i < 2; i++)
          l_52[i] = &l_53;
        for (i = 0; i < 3; i++)
          l_61[i] = (-1L);
        (*l_64) = ((safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((0L > (safe_mul_func_int32_t_s_s((((((*l_51) = (void *)0) != &g_23) ^ (safe_sub_func_int64_t_s_s(((*g_24) &= (safe_add_func_uint16_t_u_u(l_2[3], g_27[1]))), (g_42, ((void *)0 != l_60))))) <= ((l_2[g_3] & 18446744073709551611UL) > 0x2CA01DC0BF288841LL)), 1L))), l_61[0])) == 0xD6648539L), l_62)) < l_63);
      }
      if (g_42)
        break;
    }
  }
  return g_35[0][1][1];
}

static int16_t func_4(int32_t p_5, int32_t p_6, int8_t p_7, int64_t p_8) {
  int64_t *l_20 = &g_18;
  int64_t **l_19 = &l_20;
  int64_t ***l_22[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
  int i;
  g_23 = l_19;
  for (g_18 = 6; (g_18 > (-17)); --g_18) {
    ++g_27[1];
  }
  return p_5;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_27[i], "g_27[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_31, "g_31", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_35[i][j][k], "g_35[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_42, "g_42", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_55[i], "g_55[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
