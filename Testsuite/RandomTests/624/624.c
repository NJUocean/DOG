// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_8 = 0xF76EC751L;
static int32_t *g_15 = &g_8;
static int16_t g_17 = 0x9A01L;
static int32_t **volatile g_20 = &g_15;

static uint32_t func_1(void);
static int32_t *const func_2(int32_t *p_3, int32_t *p_4, int32_t *p_5, uint32_t p_6);

static uint32_t func_1(void) {
  int32_t *l_7 = &g_8;
  int32_t **l_19[1][2][2];
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++)
        l_19[i][j][k] = &g_15;
    }
  }
  (*g_20) = func_2(l_7, l_7, l_7, (safe_sub_func_uint16_t_u_u(1UL, g_8)));
  return g_17;
}

static int32_t *const func_2(int32_t *p_3, int32_t *p_4, int32_t *p_5, uint32_t p_6) {
  int32_t *l_13 = &g_8;
  int16_t *l_16 = &g_17;
  int32_t l_18 = (-7L);
  for (p_6 = 0; (p_6 == 38); ++p_6) {
    int32_t **l_14[4];
    int i;
    for (i = 0; i < 4; i++)
      l_14[i] = &l_13;
    p_5 = (g_15 = l_13);
    return p_4;
  }
  l_18 = ((*l_13) = ((*p_3) <= ((p_6 == ((*l_16) = g_8)) == (*l_13))));
  return &g_8;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
