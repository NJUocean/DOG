// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0xDE0B4074L;
static int8_t g_6 = 0x90L;
static uint32_t g_7[3] = {0UL, 0UL, 0UL};
static int32_t *g_30[5] = {&g_3, &g_3, &g_3, &g_3, &g_3};
static int32_t **volatile g_34 = (void *)0;
static int32_t **volatile g_35 = &g_30[0];

static const uint32_t func_1(void);
static int32_t *func_10(int32_t p_11, uint16_t p_12, int32_t p_13, int32_t *p_14, uint64_t p_15);

static const uint32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5[2];
  int32_t *l_29 = &g_3;
  int i;
  for (i = 0; i < 2; i++)
    l_5[i] = &g_3;
  g_7[0]++;
  (*g_35) = func_10((*l_4), ((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((void *)0 != &g_3), (safe_lshift_func_int32_t_s_u((safe_mod_func_int16_t_s_s(((g_3 > g_7[0]), ((safe_mod_func_int8_t_s_s(g_7[0], g_7[0])) == ((!((void *)0 != l_29)), 0xFA4C82104667120DLL))), (*l_2))), 13)))), g_7[0])), 0UL), g_7[0])), g_6), g_7[1], &g_3, (*l_29));
  return g_6;
}

static int32_t *func_10(int32_t p_11, uint16_t p_12, int32_t p_13, int32_t *p_14, uint64_t p_15) {
  g_30[0] = &g_3;
  for (p_11 = (-26); (p_11 == 19); p_11 = safe_add_func_int16_t_s_s(p_11, 2)) {
    int32_t *l_33[4];
    int i;
    for (i = 0; i < 4; i++)
      l_33[i] = &g_3;
    return l_33[3];
  }
  return &g_3;
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
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
