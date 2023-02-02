// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_27 = (-1L);
static int32_t g_31 = 0x6D5D64F6L;
static int32_t *g_37[3][5] = {{&g_31, (void *)0, &g_31, &g_31, (void *)0}, {&g_31, &g_27, &g_27, &g_31, &g_27}, {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}};
static int32_t **volatile g_36[4][1] = {{&g_37[0][3]}, {(void *)0}, {&g_37[0][3]}, {(void *)0}};

static uint8_t func_1(void);
static int32_t *func_2(int64_t p_3, int16_t p_4);

static uint8_t func_1(void) {
  uint16_t l_5 = 65532UL;
  int32_t *l_26 = &g_27;
  int32_t *l_28 = &g_27;
  int32_t **l_29 = &l_28;
  int64_t l_30[1];
  uint8_t l_32 = 3UL;
  int32_t **l_38 = &l_26;
  int i;
  for (i = 0; i < 1; i++)
    l_30[i] = 1L;
  (*l_38) = ((*l_29) = func_2(l_5, (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((((((l_5 != ((safe_mul_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((safe_lshift_func_int32_t_s_u((0x773672D714F98CAFLL == ((((safe_lshift_func_uint64_t_u_s((safe_mod_func_int8_t_s_s((l_26 != (void *)0), (g_27 || g_27))), 55)), l_26) != ((*l_29) = l_28)) ^ 1L)), 19)) < (*l_26)), l_30[0])), 0x6C0B333EE6768459LL)), (void *)0) != (void *)0), (-1L))) && (-1L))) & g_31) > 18446744073709551615UL) & g_27) && g_27), l_32)), 20)), g_27)), 0xFCL))));
  for (l_32 = 0; l_32 < 4; l_32 += 1) {
    for (g_31 = 0; g_31 < 1; g_31 += 1) {
      g_36[l_32][g_31] = &l_28;
    }
  }
  return g_27;
}

static int32_t *func_2(int64_t p_3, int16_t p_4) {
  int32_t *l_35 = &g_27;
  for (p_3 = (-1); (p_3 > (-3)); p_3--) {
    return l_35;
  }
  return l_35;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
