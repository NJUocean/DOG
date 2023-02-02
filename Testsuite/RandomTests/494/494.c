// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_3 = 0x76F5020FL;
static int32_t g_4 = (-6L);
static int16_t g_24 = 0xE314L;
static volatile int32_t *volatile g_26 = &g_3;
static const volatile int32_t *volatile g_32 = (void *)0;
static const volatile int32_t *volatile *g_31 = &g_32;
static int8_t g_43[5][1][2] = {{{2L, 2L}}, {{2L, 2L}}, {{2L, 2L}}, {{2L, 2L}}, {{2L, 2L}}};
static int32_t g_46 = 0xAD14CA72L;
static const int32_t g_47 = (-1L);

static const int8_t func_1(void);
static int32_t *func_5(uint16_t p_6, int32_t *p_7, uint16_t p_8, const uint8_t p_9);

static const int8_t func_1(void) {
  uint32_t l_2[4];
  int32_t l_25[2][1];
  int32_t l_33 = 0xE11914CCL;
  uint8_t l_53 = 252UL;
  int i, j;
  for (i = 0; i < 4; i++)
    l_2[i] = 4294967289UL;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++)
      l_25[i][j] = 6L;
  }
  for (g_4 = 0; (g_4 <= 3); g_4 += 1) {
    int32_t **l_19 = (void *)0;
    int32_t **l_20 = (void *)0;
    int32_t *l_22 = &g_4;
    int32_t **l_21 = &l_22;
    int16_t *l_23 = &g_24;
    int8_t *l_42[5][2] = {{&g_43[2][0][1], &g_43[2][0][1]}, {&g_43[2][0][1], &g_43[2][0][1]}, {&g_43[2][0][1], &g_43[2][0][1]}, {&g_43[2][0][1], &g_43[2][0][1]}, {&g_43[2][0][1], &g_43[2][0][1]}};
    int32_t *l_44 = (void *)0;
    int32_t *l_45 = &g_46;
    int i, j;
    (*l_21) = func_5((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint64_t_u_u(((l_2[g_4] |= 0xE0369BD6L) >= (~(((safe_mod_func_uint64_t_u_u(((l_33 = ((l_25[0][0] = ((*l_23) = (((*l_21) = &g_4) == (void *)0))) | ((((void *)0 != g_26) & (safe_sub_func_int16_t_s_s(((((*l_45) ^= ((safe_mod_func_uint16_t_u_u(((g_31 != l_20), l_33), (((((((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((g_43[2][0][1] = ((safe_lshift_func_int64_t_s_u(((safe_lshift_func_int32_t_s_u((-1L), g_4)) & g_4), 38)), g_4)), 3)), l_33)), g_43[2][0][1]) || g_43[2][0][1]) <= 0x0B56L) && 0x18BD2E84L) != g_4) || l_33))), 0x289ED5B6L)) == 0xE66B6C7EL) <= g_4), 3UL))) && g_43[2][0][1]))) < g_4), g_4)), 0x04CEL) == g_4))), g_4)) <= 0xAE05L), g_47)), 0xA73BL)), &g_4, g_4, g_4);
    if (l_25[0][0])
      break;
  }
  if ((*g_26)) {
    int32_t *l_48 = &l_25[1][0];
    int32_t *l_49 = (void *)0;
    int32_t *l_50 = &g_46;
    int32_t *l_51 = &l_25[0][0];
    int32_t *l_52[5] = {&l_25[1][0], &l_25[1][0], &l_25[1][0], &l_25[1][0], &l_25[1][0]};
    int i;
    l_53--;
    (*g_31) = (*g_31);
  } else {
    int32_t l_56 = 0x56A9E5FAL;
    int32_t *l_57[2][1];
    int i, j;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 1; j++)
        l_57[i][j] = (void *)0;
    }
    (*g_26) ^= l_56;
  }
  return g_24;
}

static int32_t *func_5(uint16_t p_6, int32_t *p_7, uint16_t p_8, const uint8_t p_9) { return &g_4; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_43[i][j][k], "g_43[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
