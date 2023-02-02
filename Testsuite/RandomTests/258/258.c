// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t *g_7[5] = {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0};
static const uint64_t g_8 = 0xC196A162C9CC1417LL;
static int32_t g_10[4] = {0xEFA5F9C7L, 0xEFA5F9C7L, 0xEFA5F9C7L, 0xEFA5F9C7L};
static uint16_t g_24[4][3] = {{3UL, 1UL, 3UL}, {65535UL, 65535UL, 65535UL}, {3UL, 1UL, 3UL}, {65535UL, 65535UL, 65535UL}};
static uint16_t *g_42 = (void *)0;

static uint8_t func_1(void);
static int32_t *func_2(int32_t *p_3, uint8_t p_4, int32_t *p_5, int32_t p_6);

static uint8_t func_1(void) {
  int32_t *l_9 = &g_10[2];
  int32_t l_11 = 0L;
  int8_t l_43 = 1L;
  g_7[3] = func_2(g_7[3], (g_8 > (((((g_8 >= (((void *)0 != g_7[0]) >= ((void *)0 != l_9))) ^ ((-1L) || (*l_9))), (void *)0) == (void *)0) && l_11)), &l_11, (*l_9));
  l_43 |= (-4L);
  return (*l_9);
}

static int32_t *func_2(int32_t *p_3, uint8_t p_4, int32_t *p_5, int32_t p_6) {
  uint16_t l_16[3][4] = {{0UL, 0x72DDL, 0UL, 0x72DDL}, {0UL, 0x72DDL, 0UL, 0x72DDL}, {0UL, 0x72DDL, 0UL, 0x72DDL}};
  const int32_t *l_17 = &g_10[0];
  uint16_t *l_23 = &g_24[2][2];
  int32_t l_38 = 2L;
  int32_t *l_39 = &g_10[2];
  int32_t l_40 = 7L;
  uint16_t **l_41[5] = {&l_23, &l_23, &l_23, &l_23, &l_23};
  int i, j;
  l_40 |= ((safe_add_func_uint16_t_u_u(((l_39 = ((&g_10[2] != ((safe_sub_func_int64_t_s_s(l_16[1][0], (((void *)0 != l_17) ^ (~(~(safe_div_func_int16_t_s_s((((*l_17) >= ((!(--(*l_23))) ^ (4UL >= (safe_mul_func_uint32_t_u_u(((*l_17) == ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((!(l_38 = (safe_div_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(((*p_5) ^ (*l_17)), (-7L))) == 7UL), (-1L))))), 7)), 0x6C146DF800085869LL)) & 5L)), (*l_17)))))) < (*p_5)), (*l_17)))))))), (void *)0)), (void *)0)) != &g_10[2]), (*l_17))) | p_6);
  (*p_5) = ((&l_16[1][0] == (g_42 = &l_16[1][0])) == g_10[3]);
  return &g_10[2];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
