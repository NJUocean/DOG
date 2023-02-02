// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  int32_t f0;
  int8_t f1;
};

static uint16_t g_13 = 0x4E94L;
static uint8_t g_31 = 0x09L;
static uint8_t g_36 = 0UL;
static uint8_t *g_35 = &g_36;
static uint8_t *g_39 = (void *)0;
static int32_t g_44 = (-1L);
static volatile uint32_t g_45 = 0UL;
static uint16_t g_47 = 0x02DFL;
static int8_t g_48 = 8L;
static int32_t g_49 = 0L;

static uint8_t func_1(void);
static union U1 func_2(uint64_t p_3, uint64_t p_4, int32_t p_5, int8_t p_6);

static uint8_t func_1(void) {
  uint8_t l_11[3];
  uint16_t *l_12 = &g_13;
  uint8_t *l_30 = &g_31;
  uint8_t *l_38 = &g_36;
  uint8_t **l_37[4] = {&l_38, &l_38, &l_38, &l_38};
  uint16_t *l_46 = &g_47;
  int32_t *l_59 = &g_49;
  uint16_t l_60[1][3];
  int i, j;
  for (i = 0; i < 3; i++)
    l_11[i] = 247UL;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++)
      l_60[i][j] = 0xF497L;
  }
  (*l_59) = (func_2((((g_48 = ((*l_46) = (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((((*l_12) = l_11[2]) & (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(l_11[2], l_11[2])) && ((*l_38) = (safe_sub_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((g_44 = ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_12 != (void *)0), (--(*l_30)))) ^ (~((g_35 = &l_11[2]) != (g_39 = &g_36)))), g_36)), ((safe_lshift_func_int64_t_s_s(((safe_lshift_func_int32_t_s_s((((0xDB75L >= g_36) && g_36), l_11[2]), 9)) != l_11[1]), g_36)) ^ g_36))) == g_36)), l_11[1])), g_36)))), g_45)), 0x45L))), 0UL)), (-1L))))) && 0UL) | l_11[2]), g_49, l_11[1], l_11[1]), 0x59960698L);
  return l_60[0][0];
}

static union U1 func_2(uint64_t p_3, uint64_t p_4, int32_t p_5, int8_t p_6) {
  union U1 l_58[2][1][5] = {{{{0x197B2C3CL}, {0x197B2C3CL}, {0x197B2C3CL}, {0x197B2C3CL}, {0x197B2C3CL}}}, {{{0x197B2C3CL}, {0x197B2C3CL}, {0x197B2C3CL}, {0x197B2C3CL}, {0x197B2C3CL}}}};
  int i, j, k;
  for (g_49 = (-7); (g_49 >= (-16)); g_49--) {
    uint32_t l_54 = 0UL;
    int32_t *const l_55 = &g_49;
    for (p_5 = 0; (p_5 > (-26)); p_5--) {
      int32_t *l_57 = (void *)0;
      int32_t **l_56 = &l_57;
      if (l_54)
        break;
      (*l_56) = l_55;
    }
  }
  return l_58[1][0][3];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
