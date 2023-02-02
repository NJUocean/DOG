// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static volatile uint8_t g_5[1] = {0x58L};
static volatile uint32_t g_39 = 0x0C090200L;
static int32_t *g_58[1] = {&g_3};
static int16_t g_60[1][1][1] = {{{0xEFC6L}}};
static uint32_t g_70 = 1UL;

static int32_t func_1(void);
static int64_t func_10(uint64_t p_11, uint16_t p_12, int16_t p_13, uint32_t p_14, int32_t *p_15);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4[5] = {&g_3, &g_3, &g_3, &g_3, &g_3};
  int i;
  g_5[0]++;
  (*l_2) = (safe_rshift_func_int64_t_s_s(1L, func_10(((safe_add_func_uint64_t_u_u((g_3, ((*l_2) == (safe_add_func_uint16_t_u_u((g_3 | (-1L)), (0xB9C2L & ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint32_t_u_u(g_5[0], 18)), (safe_mod_func_int32_t_s_s((*l_2), ((&g_3 != &g_3) | g_3)))), 8UL)) >= 0x44D4E2B7L)))))), (-5L))) | 0xD1L), (*l_2), g_3, g_3, l_4[1])));
  return g_5[0];
}

static int64_t func_10(uint64_t p_11, uint16_t p_12, int16_t p_13, uint32_t p_14, int32_t *p_15) {
  int32_t *l_26 = &g_3;
  int32_t *l_27 = (void *)0;
  int32_t *l_28 = &g_3;
  int32_t *l_29 = (void *)0;
  int32_t *l_30 = (void *)0;
  int32_t *l_31 = &g_3;
  int32_t *l_32 = &g_3;
  int32_t *l_33 = &g_3;
  int32_t l_34 = 0x89BE67E7L;
  int32_t *l_35 = &l_34;
  int32_t *l_36 = &l_34;
  int32_t *l_37 = (void *)0;
  int32_t *l_38[4];
  int i;
  for (i = 0; i < 4; i++)
    l_38[i] = (void *)0;
  g_39--;
  if (g_39) {
    int32_t **l_50 = &l_29;
    int32_t **l_57 = (void *)0;
    int16_t *l_59 = &g_60[0][0][0];
    uint16_t l_69 = 0x6545L;
    for (l_34 = 0; (l_34 != (-3)); l_34 = safe_sub_func_int16_t_s_s(l_34, 1)) {
      if ((*l_35))
        break;
    }
    g_70 &= ((safe_rshift_func_int64_t_s_s(((safe_add_func_int8_t_s_s((4294967295UL || ((safe_lshift_func_int32_t_s_u(p_13, 31)) | p_11)), ((((*l_50) = &l_34) == (void *)0) >= ((safe_rshift_func_uint64_t_u_u((((((safe_mul_func_uint16_t_u_u(0x65C8L, ((((((g_58[0] = &l_34) == ((((*l_59) = g_5[0]) && (safe_sub_func_int8_t_s_s((safe_lshift_func_int64_t_s_u((safe_rshift_func_int64_t_s_u((((*l_59) = (safe_lshift_func_uint8_t_u_s((((((g_5[0], 0x72L) && p_13) == g_3), p_15) != (void *)0), l_69))) <= 4L), g_3)), 39)), 0x30L))), (void *)0)), p_11) <= 0UL) != (*l_32)) <= g_3))), 0xA2937BBCL) != (*l_31)) < (-10L)) | (-1L)), g_3)) < g_3)))) & g_3), g_3)) && p_11);
  } else {
    int32_t **l_71 = (void *)0;
    int32_t **l_72 = &l_38[1];
    p_15 = ((*l_72) = p_15);
    (*l_36) = p_11;
  }
  return g_3;
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
  for (i = 0; i < 1; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_39, "g_39", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_60[i][j][k], "g_60[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_70, "g_70", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
