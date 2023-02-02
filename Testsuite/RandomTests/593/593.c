// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 6L;
static int32_t g_6 = 0x8FAAAEB9L;
static volatile int8_t g_20 = 0xF6L;
static uint64_t g_22[2][5] = {{0x9E071A05132D7AF2LL, 0x9E071A05132D7AF2LL, 0x9E071A05132D7AF2LL, 0x9E071A05132D7AF2LL, 0x9E071A05132D7AF2LL}, {1UL, 18446744073709551615UL, 1UL, 18446744073709551615UL, 1UL}};
static int64_t g_47 = (-10L);
static int32_t *g_50 = &g_6;
static int8_t *g_57 = (void *)0;
static int8_t **g_56[5] = {&g_57, &g_57, &g_57, &g_57, &g_57};

static int16_t func_1(void);
static int32_t func_25(int32_t p_26, int32_t *p_27, const int64_t p_28, uint64_t p_29, int32_t *p_30);

static int16_t func_1(void) {
  int8_t l_8 = (-6L);
  int32_t l_21[4];
  int32_t l_52 = 0xA67B1108L;
  int8_t *l_54 = &l_8;
  int8_t **l_53 = &l_54;
  int8_t ***l_55 = &l_53;
  int i;
  for (i = 0; i < 4; i++)
    l_21[i] = 0L;
  for (g_2 = (-1); (g_2 < (-14)); --g_2) {
    int32_t *l_5 = &g_6;
    int32_t l_7 = 0x3921DED6L;
    int32_t *l_9 = &g_6;
    int32_t *l_10 = (void *)0;
    int32_t *l_11 = &g_6;
    int32_t *l_12 = &g_6;
    int32_t *l_13 = &g_6;
    int32_t *l_14 = &l_7;
    int32_t *l_15 = &g_6;
    int32_t *l_16 = &g_6;
    int32_t *l_17 = &l_7;
    int32_t *l_18 = (void *)0;
    int32_t *l_19[1];
    int8_t *l_45 = &l_8;
    uint32_t l_46 = 0x85A1EC8FL;
    int i;
    for (i = 0; i < 1; i++)
      l_19[i] = (void *)0;
    g_22[1][3]++;
    l_52 ^= func_25((g_2 == (~((+(safe_div_func_int8_t_s_s(((((255UL <= ((g_2 & (((((*l_12) = (safe_div_func_uint16_t_u_u((g_47 = (safe_mod_func_int8_t_s_s(((*l_45) = (((0x1BL == g_6), ((safe_div_func_int64_t_s_s(((safe_div_func_int8_t_s_s((g_6 || (safe_rshift_func_uint16_t_u_u(65530UL, (0L > 1L)))), 1L)) && g_22[1][3]), 0x2097E65FBC01D4C3LL)), l_21[3])), 0L)), l_46))), 0x7E52L))) != (-1L)) == g_2), 1UL)) ^ 1UL)) >= 5L) < 7L) || g_47), 246UL))) || 0x5E0EL))), &l_21[1], g_22[1][3], l_21[1], &l_21[3]);
  }
  g_56[4] = ((*l_55) = l_53);
  return l_8;
}

static int32_t func_25(int32_t p_26, int32_t *p_27, const int64_t p_28, uint64_t p_29, int32_t *p_30) {
  int16_t l_51 = 0x762CL;
  for (p_29 = 14; (p_29 <= 56); p_29++) {
    g_50 = &p_26;
  }
  return l_51;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_22[i][j], "g_22[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_47, "g_47", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
