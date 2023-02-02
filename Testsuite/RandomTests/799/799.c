// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_3 = 0x2C29A3DFL;
static volatile int32_t g_4 = 4L;
static volatile int32_t g_5[5] = {0L, 0L, 0L, 0L, 0L};
static volatile int32_t g_6[1] = {7L};
static volatile int32_t g_7 = 0x21591249L;
static int32_t g_8 = 1L;
static int32_t g_11 = (-1L);
static int32_t *volatile g_10 = &g_11;
static volatile int32_t g_12[5] = {0x312FBB6BL, 0x312FBB6BL, 0x312FBB6BL, 0x312FBB6BL, 0x312FBB6BL};
static int32_t g_13 = 0xE703026DL;

static uint8_t func_1(void);
static int32_t *func_14(int32_t *p_15, int8_t p_16, uint16_t p_17);

static uint8_t func_1(void) {
  int16_t l_2[3];
  int i;
  for (i = 0; i < 3; i++)
    l_2[i] = 0x124FL;
  for (g_8 = 2; (g_8 >= 0); g_8 -= 1) {
    int i;
    (*g_10) |= (+l_2[g_8]);
    for (g_11 = 4; (g_11 >= 0); g_11 -= 1) {
      int32_t *l_18 = (void *)0;
      int8_t l_32[2][2][1] = {{{4L}, {0L}}, {{4L}, {0L}}};
      int i, j, k;
      for (g_13 = 0; (g_13 <= 2); g_13 += 1) {
        int32_t **l_36 = &l_18;
        int i;
        g_10 = func_14(l_18, ((safe_add_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(l_2[g_13])), 0xAEBA4D3EL)), (safe_rshift_func_uint16_t_u_u(l_2[g_13], (safe_lshift_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u(((void *)0 != &g_13), ((safe_mul_func_uint8_t_u_u(g_12[3], (g_11, (((&g_13 != (void *)0), g_13) ^ (-4L))))), l_32[0][0][0]))) < g_11), 34)))))) == 0x26D5D64F68993DD6LL), g_13);
        (*l_36) = (void *)0;
      }
      if ((*g_10))
        break;
    }
  }
  return g_5[0];
}

static int32_t *func_14(int32_t *p_15, int8_t p_16, uint16_t p_17) {
  int32_t *volatile *l_34 = (void *)0;
  int32_t *volatile **l_33 = &l_34;
  int32_t *l_35 = &g_13;
  (*l_33) = &g_10;
  return l_35;
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
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_12[i], "g_12[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_13, "g_13", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
