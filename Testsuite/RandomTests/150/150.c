// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0x457102D1L;
static uint32_t g_38 = 0x2BC8F961L;
static uint16_t g_40 = 0x3877L;
static int32_t g_61 = 0xF13E0CA2L;
static int32_t *g_73 = &g_3;
static int32_t **volatile g_72 = &g_73;

static int16_t func_1(void);
static int32_t *func_7(int32_t *p_8, int32_t *p_9, int32_t p_10, int32_t *p_11);

static int16_t func_1(void) {
  int64_t l_2[3];
  int16_t l_74[5];
  int i;
  for (i = 0; i < 3; i++)
    l_2[i] = (-7L);
  for (i = 0; i < 5; i++)
    l_74[i] = 3L;
  for (g_3 = 2; (g_3 >= 0); g_3 -= 1) {
    uint8_t l_4[3][3] = {{1UL, 1UL, 1UL}, {8UL, 1UL, 8UL}, {1UL, 1UL, 1UL}};
    int i, j;
    return l_4[0][2];
  }
  for (g_3 = (-5); (g_3 != 7); g_3 = safe_add_func_int16_t_s_s(g_3, 6)) {
    int64_t l_28 = (-1L);
    uint32_t *l_37 = &g_38;
    uint16_t *l_39 = &g_40;
    (*g_72) = func_7(((safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(l_2[0], ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((((*l_39) = (((l_28 != (safe_add_func_uint32_t_u_u((&g_3 != &g_3), ((((*l_37) = (g_3, (safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((((g_3, 0xEA3DL) != (safe_div_func_int8_t_s_s(0xC9L, 0xF8L))) || 0xB357F039D3CD3624LL), g_3)) < (-7L)), 0xB430688CL)))) & l_2[2]) == 0UL)))) < g_3) < 249UL)) || l_2[0]) < 0x99L), g_3)), l_28)), 7)), g_3)) & l_2[2]))), 0x8B5AL)), 0xB6L), 0x69L)), l_2[1]) | 0L), 0x8C8AL)), (void *)0), &g_3, g_3, &g_3);
  }
  return l_74[0];
}

static int32_t *func_7(int32_t *p_8, int32_t *p_9, int32_t p_10, int32_t *p_11) {
  uint16_t l_69[5];
  int32_t l_70[1][5];
  int32_t *l_71 = &l_70[0][3];
  int i, j;
  for (i = 0; i < 5; i++)
    l_69[i] = 65533UL;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++)
      l_70[i][j] = 0x5900A0D1L;
  }
  for (g_40 = 0; (g_40 < 54); g_40++) {
    uint8_t l_43[1];
    uint32_t *l_58 = &g_38;
    int i;
    for (i = 0; i < 1; i++)
      l_43[i] = 0UL;
    for (g_38 = 0; (g_38 <= 0); g_38 += 1) {
      for (p_10 = 0; (p_10 >= 0); p_10 -= 1) {
        int32_t **l_65 = (void *)0;
        int32_t **l_66 = (void *)0;
        int32_t *l_68 = &g_3;
        int32_t **l_67 = &l_68;
        int i;
        l_70[0][3] = ((safe_add_func_uint16_t_u_u(l_43[p_10], (((0x71L & (safe_div_func_int32_t_s_s((safe_rshift_func_int32_t_s_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int32_t_s_s((safe_rshift_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((void *)0 != l_58), (l_43[0] != ((safe_div_func_uint8_t_u_u(((((((g_61 = 1L), (safe_mod_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s((&g_3 != ((*l_67) = &p_10)))) && l_69[2]), g_61), 0x7FL))), l_43[0]) & p_10) || (**l_67)) && p_10), p_10)) >= (-1L))))), 47)), g_3)), g_38)), 13)), 0x102F310EL))) < p_10) && p_10))) | 0xE87A7CF8L);
        return &g_3;
      }
    }
  }
  return &g_3;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_61, "g_61", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
