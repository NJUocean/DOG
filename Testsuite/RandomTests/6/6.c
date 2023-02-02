// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint8_t g_13[2][1] = {{6UL}, {6UL}};
static int8_t g_29 = 0xFFL;
static int64_t g_31[2] = {(-10L), (-10L)};
static int32_t g_35 = (-1L);
static uint16_t g_37 = 0xAB6AL;
static int32_t g_41 = 0L;
static int32_t ***volatile g_61 = (void *)0;
static int32_t *g_63 = (void *)0;
static int32_t **g_62 = &g_63;

static int32_t func_1(void);
static int16_t func_7(int8_t p_8, uint32_t p_9, uint64_t p_10, uint64_t p_11, uint8_t p_12);

static int32_t func_1(void) {
  int32_t l_2[5];
  uint32_t l_54 = 0x68CDE333L;
  int32_t **l_64 = &g_63;
  uint64_t l_65 = 18446744073709551607UL;
  int i;
  for (i = 0; i < 5; i++)
    l_2[i] = 9L;
  if (l_2[1]) {
    int64_t l_26 = 0xB5B3847D228D5FEALL;
    int32_t l_27[5] = {1L, 1L, 1L, 1L, 1L};
    int8_t *l_28 = &g_29;
    int64_t *l_30[3][3][5] = {{{&g_31[1], &g_31[1], &g_31[1], &g_31[1], &g_31[1]}, {&g_31[0], (void *)0, &g_31[1], &g_31[0], &g_31[1]}, {&g_31[0], &g_31[0], (void *)0, &g_31[1], &g_31[1]}}, {{&g_31[1], &g_31[1], &g_31[1], &g_31[1], &g_31[1]}, {&g_31[1], (void *)0, &g_31[1], &g_31[1], &g_31[1]}, {&g_31[1], &g_31[1], (void *)0, &g_31[1], &g_31[1]}}, {{&g_31[1], &g_31[0], (void *)0, &g_31[1], &g_31[0]}, {&g_31[1], (void *)0, (void *)0, (void *)0, &g_31[0]}, {&g_31[1], (void *)0, &g_31[0], &g_31[1], &g_31[1]}}};
    int i, j, k;
    l_27[4] = (l_2[0] || (safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((func_7(g_13[1][0], g_13[1][0], ((l_27[3] = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_2[1] || (safe_rshift_func_int16_t_s_s(l_2[1], ((safe_mod_func_int16_t_s_s((((*l_28) = ((((safe_sub_func_int8_t_s_s(g_13[1][0], ((safe_sub_func_uint16_t_u_u((g_13[1][0], (g_13[1][0], ((l_26 = g_13[1][0]) == (-7L)))), l_27[2])) > l_2[0]))) | g_13[0][0]) != 0x64L) ^ l_2[2])), l_2[2]), 0xDAA2L)) & l_27[2])))), 13)), g_13[0][0]))) != 0x1B14898D08F49235LL), l_2[2], g_31[0]), l_2[3]), l_2[1])), l_2[3])));
  } else {
    int32_t *l_58 = &l_2[1];
    int32_t **l_57 = &l_58;
    int32_t ***l_59 = (void *)0;
    int32_t ***l_60 = (void *)0;
    for (g_41 = 0; (g_41 == 16); g_41 = safe_add_func_int64_t_s_s(g_41, 9)) {
      for (g_35 = 0; (g_35 <= 4); g_35 += 1) {
        int32_t *l_51 = &l_2[0];
        int32_t *l_52 = &l_2[1];
        int32_t *l_53[4][2] = {{&l_2[0], &l_2[0]}, {&l_2[0], &l_2[0]}, {&l_2[0], &l_2[0]}, {&l_2[0], &l_2[0]}};
        int i, j;
        l_54--;
      }
    }
    g_62 = l_57;
  }
  (*l_64) = &l_2[2];
  return l_65;
}

static int16_t func_7(int8_t p_8, uint32_t p_9, uint64_t p_10, uint64_t p_11, uint8_t p_12) {
  uint32_t l_46 = 1UL;
  for (g_29 = 0; (g_29 != (-12)); g_29 = safe_sub_func_int64_t_s_s(g_29, 3)) {
    int32_t *l_34 = &g_35;
    uint16_t *l_36 = &g_37;
    int32_t *l_40 = &g_41;
    (*l_34) = 0x3A64E785L;
    (*l_40) = ((*l_34) = (((*l_36)--) ^ (*l_34)));
  }
  for (g_41 = 0; (g_41 == 8); g_41++) {
    int32_t *l_44 = (void *)0;
    int32_t *l_45 = &g_35;
    ++l_46;
    (*l_45) = (&g_37 != (void *)0);
  }
  return g_13[1][0];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_29, "g_29", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_31[i], "g_31[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
