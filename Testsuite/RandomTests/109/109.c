// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile uint64_t f0;
};

static volatile int32_t g_2 = 2L;
static volatile int32_t g_3 = 1L;
static volatile int32_t g_4 = 0xCB13638EL;
static volatile int32_t g_5 = 6L;
static int32_t g_6[1] = {1L};
static volatile int32_t g_10[2][3] = {{(-1L), (-1L), (-4L)}, {(-1L), (-1L), (-4L)}};
static volatile int32_t g_11[3] = {(-1L), (-1L), (-1L)};
static int32_t g_12 = 0L;
static int32_t g_13 = 0x84BC9C3DL;
static union U0 g_31 = {0x04353EA3A7221EBCLL};
static uint16_t g_35 = 1UL;
static int32_t *g_37 = (void *)0;
static int32_t **g_36 = &g_37;
static int8_t g_39 = 0L;
static uint64_t g_41 = 0xFE96F77D900D2964LL;
static uint8_t g_44 = 0x17L;
static int32_t g_45 = 0x040C8E82L;

static uint64_t func_1(void);
static uint8_t func_19(int32_t *const p_20, uint32_t p_21);

static uint64_t func_1(void) {
  int32_t l_9[1][1][2];
  int32_t *l_14 = &l_9[0][0][1];
  int32_t **l_32 = &l_14;
  uint16_t *l_33 = (void *)0;
  uint16_t *l_34 = &g_35;
  int8_t *l_38 = &g_39;
  uint64_t *l_40 = &g_41;
  uint8_t *l_42 = (void *)0;
  uint8_t *l_43 = &g_44;
  int32_t l_46[1];
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 2; k++)
        l_9[i][j][k] = 0x6FF23B1AL;
    }
  }
  for (i = 0; i < 1; i++)
    l_46[i] = 0x833AED5EL;
  for (g_6[0] = 0; (g_6[0] < 13); g_6[0]++) {
    for (g_12 = 0; (g_12 >= 0); g_12 -= 1) {
      for (g_13 = 0; (g_13 >= 0); g_13 -= 1) {
        l_14 = (void *)0;
      }
      for (g_13 = 0; (g_13 >= 0); g_13 -= 1) {
        int i, j, k;
        l_9[g_12][g_12][(g_13 + 1)] = (0x5589B58331C587C7LL && (safe_div_func_int64_t_s_s(0x0B168F928D9BA5F2LL, (safe_mod_func_uint8_t_u_u(g_6[0], func_19(&g_6[0], ((-1L) | (g_12 && g_2))))))));
      }
    }
  }
  l_46[0] |= (g_2, (safe_add_func_uint16_t_u_u((((g_45 = ((*l_43) = (safe_mod_func_uint64_t_u_u(((*l_40) &= (1UL | (+(safe_rshift_func_int8_t_s_u(((*l_38) = ((l_9[0][0][0] || ((*l_34) = (safe_rshift_func_int8_t_s_s(((g_31, &g_5) != (void *)0), (((*l_32) = &g_6[0]) != &g_6[0]))))) < (l_32 == g_36))), l_9[0][0][1]))))), 0x1C19CD890F6DAE1DLL)))) >= 1L), 0xDC4DL), 9L)));
  return g_6[0];
}

static uint8_t func_19(int32_t *const p_20, uint32_t p_21) { return p_21; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 3; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
