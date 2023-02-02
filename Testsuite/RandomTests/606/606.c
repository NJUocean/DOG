// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_6 = 0x45307222L;
static int32_t g_8 = 1L;
static uint64_t g_23[4] = {0x1FF29ACD409884CBLL, 0x1FF29ACD409884CBLL, 0x1FF29ACD409884CBLL, 0x1FF29ACD409884CBLL};
static uint32_t g_27 = 0xF27A4129L;
static uint32_t g_45 = 9UL;
static int32_t g_59 = (-1L);
static uint32_t g_60 = 4294967292UL;
static const volatile int32_t g_77[2][4] = {{(-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L)}};
static const volatile int32_t *g_76[1][1] = {{&g_77[0][3]}};
static const volatile int32_t *volatile *const g_75 = &g_76[0][0];

static int32_t func_1(void);
static int32_t *func_9(int32_t p_10, int32_t *p_11);

static int32_t func_1(void) {
  uint8_t l_2 = 255UL;
  int32_t l_26 = 2L;
  uint16_t l_43 = 65535UL;
  int32_t *l_46[4] = {&g_8, &g_8, &g_8, &g_8};
  int i;
  if (l_2) {
    for (l_2 = (-25); (l_2 != 3); ++l_2) {
      int32_t *l_5 = &g_6;
      int32_t *l_7 = &g_8;
      (*l_7) ^= ((*l_5) = 0xAED23B61L);
    }
  } else {
    uint64_t *l_22 = &g_23[0];
    uint32_t l_44 = 18446744073709551615UL;
    int32_t **l_63 = &l_46[2];
    int8_t l_64 = 0x94L;
    int32_t l_65 = 0x7DCCC76BL;
    (*l_63) = func_9((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_8, ((safe_rshift_func_uint64_t_u_u(((*l_22) |= 4UL), (((safe_sub_func_int32_t_s_s((((g_27 = ((g_8, 0L) ^ (l_26 = g_6))) & ((safe_mod_func_uint64_t_u_u(g_6, (g_45 = (safe_div_func_uint8_t_u_u((((~(safe_rshift_func_int32_t_s_u((safe_lshift_func_uint64_t_u_u(((safe_div_func_int16_t_s_s(l_2, 0x9D44L)) == ((((safe_div_func_uint8_t_u_u((safe_mul_func_int64_t_s_s(l_43, g_8)), l_44)) > 0x835A7AB5L) ^ 0x29L) != 1L)), 48)), 16))) >= l_44) & l_44), g_6))))) > g_6)) ^ g_8), g_8)) & g_6) && 0L))), l_44))), g_8)) != 0L), l_44), l_44)), l_46[2]);
    g_8 = (l_65 &= l_64);
  }
  g_6 = (safe_add_func_uint32_t_u_u((~(safe_rshift_func_uint16_t_u_s((safe_lshift_func_int32_t_s_s((safe_lshift_func_uint32_t_u_s(g_23[0], 15)), 0)), ((0xEEL <= 0xBDL), (&l_46[3] == g_75))))), (**g_75)));
  return g_45;
}

static int32_t *func_9(int32_t p_10, int32_t *p_11) {
  int32_t *l_47 = (void *)0;
  int32_t *l_48 = &g_8;
  int32_t *l_49 = &g_6;
  int32_t l_50 = 0x77D900D2L;
  int32_t *l_51 = &g_6;
  int32_t *l_52 = &g_6;
  int32_t *l_53 = &g_6;
  int32_t *l_54 = &g_8;
  int32_t l_55 = (-9L);
  int32_t l_56 = (-1L);
  int32_t *l_57 = &l_50;
  int32_t *l_58[3][2][2] = {{{&g_8, (void *)0}, {&g_8, (void *)0}}, {{&g_8, (void *)0}, {&g_8, (void *)0}}, {{&g_8, (void *)0}, {&g_8, (void *)0}}};
  int i, j, k;
  g_60--;
  return &g_8;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_23[i], "g_23[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_59, "g_59", print_hash_value);
  transparent_crc(g_60, "g_60", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_77[i][j], "g_77[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
