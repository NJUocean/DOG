// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U4 {
  const uint32_t f0;
};

static int32_t g_3 = (-8L);
static const int32_t *volatile g_2 = &g_3;
static int32_t *g_9 = &g_3;
static int32_t **g_8 = &g_9;
static uint32_t g_10[4] = {4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL};
static volatile int32_t g_11 = (-1L);
static volatile int32_t g_12 = 2L;
static volatile int32_t g_13 = 0x92F20920L;
static int32_t g_14 = (-1L);
static int64_t g_25[2] = {0xDEDC87A9B65CAB43LL, 0xDEDC87A9B65CAB43LL};
static uint64_t g_45 = 1UL;

static int64_t func_1(void);
static int32_t ***func_6(int32_t **p_7);

static int64_t func_1(void) {
  const int32_t *volatile *l_4 = (void *)0;
  const int32_t *volatile *l_5[4] = {&g_2, &g_2, &g_2, &g_2};
  int i;
  g_2 = g_2;
  for (g_3 = 3; (g_3 >= 0); g_3 -= 1) {
    int32_t ***l_47 = (void *)0;
    int32_t ****l_46 = &l_47;
    (*l_46) = func_6(g_8);
  }
  return g_45;
}

static int32_t ***func_6(int32_t **p_7) {
  union U4 l_15 = {18446744073709551614UL};
  int32_t ***l_18[2];
  int i;
  for (i = 0; i < 2; i++)
    l_18[i] = &g_8;
  for (g_14 = 3; (g_14 >= 0); g_14 -= 1) {
    int32_t ***l_20 = &g_8;
    int32_t ****l_19 = &l_20;
    int64_t *l_23 = (void *)0;
    int64_t *l_24[4][3][5] = {{{&g_25[1], &g_25[0], &g_25[0], &g_25[0], &g_25[0]}, {(void *)0, &g_25[0], &g_25[0], (void *)0, &g_25[0]}, {&g_25[0], &g_25[0], &g_25[1], &g_25[0], &g_25[1]}}, {{&g_25[0], &g_25[1], &g_25[1], &g_25[0], &g_25[0]}, {(void *)0, &g_25[1], &g_25[0], &g_25[0], &g_25[0]}, {&g_25[1], &g_25[1], &g_25[1], &g_25[1], &g_25[0]}}, {{&g_25[0], &g_25[0], &g_25[1], &g_25[1], &g_25[0]}, {&g_25[1], &g_25[0], &g_25[0], (void *)0, &g_25[0]}, {&g_25[0], &g_25[1], &g_25[0], &g_25[0], &g_25[1]}}, {{&g_25[0], &g_25[1], &g_25[0], &g_25[0], &g_25[1]}, {&g_25[0], &g_25[0], (void *)0, &g_25[1], &g_25[0]}, {&g_25[1], &g_25[1], &g_25[0], &g_25[1], &g_25[1]}}};
    uint32_t l_30 = 0x111919B1L;
    int32_t l_31[4];
    uint8_t l_44 = 255UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
      l_31[i] = 1L;
    g_12 = (l_15, (safe_lshift_func_int64_t_s_s((l_18[0] != ((*l_19) = &p_7)), ((-4L) <= (l_31[2] = (safe_mod_func_uint16_t_u_u(((((g_25[0] = g_10[g_14]) == 0x47B6C411E69D0863LL) != ((*g_2) == g_3)) > ((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_30 != g_3), g_14)) ^ g_3), g_10[2])) < g_10[2])), 1L)))))));
    g_45 &= (safe_mod_func_int32_t_s_s(0x4F7D9FD5L, (safe_mul_func_uint32_t_u_u(((**p_7) ^ g_25[1]), ((safe_div_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(((((g_12 < ((safe_rshift_func_int8_t_s_u((safe_mul_func_int32_t_s_s((g_25[0], (g_25[0], (-9L))), (**g_8))), 1)) ^ (g_25[0] | g_3))) > l_44) > g_25[0]) && g_25[1]), g_14)), g_12), 9UL)), (-2L))))));
  }
  return l_18[0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_25[i], "g_25[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_45, "g_45", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
