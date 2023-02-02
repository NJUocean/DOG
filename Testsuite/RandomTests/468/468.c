// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint16_t g_2[1] = {0x3946L};
static volatile int32_t g_3[1][5] = {{0xA59C1763L, 0xA59C1763L, 0xA59C1763L, 0xA59C1763L, 0xA59C1763L}};
static int32_t g_4 = 0xF759609CL;
static volatile int32_t g_5 = 0xE63E3155L;
static int32_t g_6 = (-8L);
static uint32_t g_17[2][1] = {{0x3147F59EL}, {0x3147F59EL}};
static int32_t g_20 = 0xA3BDF78BL;
static const int32_t *g_19 = &g_20;
static int8_t g_36 = 0L;

static int8_t func_1(void);
static int32_t *func_7(int16_t p_8, const int32_t p_9, int32_t p_10, uint32_t p_11);

static int8_t func_1(void) {
  int16_t l_18 = 0xBC2AL;
  for (g_4 = 0; (g_4 <= 0); g_4 += 1) {
    int8_t l_16 = 0x65L;
    int16_t l_34 = 1L;
    for (g_6 = 0; (g_6 >= 0); g_6 -= 1) {
      int32_t *l_15 = &g_4;
      int32_t **l_14 = &l_15;
      int i;
      (*l_14) = func_7(g_2[g_4], ((((&g_3[0][0] != &g_6) != (safe_mod_func_int16_t_s_s((0xE008FB0B44CF5927LL > (g_4 ^ ((((*l_14) = &g_4) == (void *)0) >= (g_17[0][0] = (((g_4 != g_5) ^ l_16) != l_16))))), l_16))), l_16), 0x189D9E62L), l_18, g_6);
    }
    for (l_18 = 0; (l_18 <= 0); l_18 += 1) {
      int32_t *l_31 = &g_6;
      int8_t *l_35 = (void *)0;
      int32_t *l_37 = &g_20;
      (*l_37) = ((!(g_36 |= (safe_add_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u(g_20, (0L || (l_18 <= ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint64_t_u_u(((g_3[0][0], (((*l_31) = l_16) || (safe_div_func_int32_t_s_s((((1L | (l_16 && (*l_31))) || 0L), l_18), g_17[0][0])))) || g_17[0][0]), l_18)), 10)) & g_17[0][0]))))) <= 18446744073709551615UL), l_34), l_16)))) < 1UL);
    }
  }
  return g_3[0][0];
}

static int32_t *func_7(int16_t p_8, const int32_t p_9, int32_t p_10, uint32_t p_11) {
  int32_t *l_21 = &g_6;
  g_19 = &p_9;
  return l_21;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
