// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const int32_t f0;
};

static int32_t g_2 = (-1L);
static union U1 g_9[5] = {{-1L}, {-1L}, {-1L}, {-1L}, {-1L}};
static union U1 *g_8 = &g_9[2];
static volatile int32_t g_12 = 0x5C285CE9L;
static int32_t g_13 = (-1L);
static int32_t g_16 = 0x54DBBE56L;
static int32_t g_20[5][3] = {{(-3L), (-3L), (-3L)}, {1L, 1L, 1L}, {(-3L), (-3L), (-3L)}, {1L, 1L, 1L}, {(-3L), (-3L), (-3L)}};

static int32_t func_1(void);
static const union U1 *func_5(union U1 *p_6, int32_t p_7);

static int32_t func_1(void) {
  int32_t *l_45 = &g_2;
  int32_t **l_46 = &l_45;
  for (g_2 = 0; (g_2 != 5); g_2++) {
    const union U1 *l_43[3][1];
    const union U1 **l_42 = &l_43[2][0];
    int32_t l_44 = 0x36717B38L;
    int i, j;
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 1; j++)
        l_43[i][j] = &g_9[2];
    }
    (*l_42) = func_5(g_8, g_9[2].f0);
    if (l_44)
      continue;
  }
  (*l_46) = l_45;
  return g_16;
}

static const union U1 *func_5(union U1 *p_6, int32_t p_7) {
  int32_t *l_27 = &g_20[4][2];
  int32_t *l_28 = (void *)0;
  int32_t *l_29 = &g_13;
  int32_t *l_30 = &g_13;
  int32_t *l_31 = &g_13;
  int32_t *l_32 = &g_13;
  int32_t *l_33 = &g_20[4][2];
  int32_t *l_34 = (void *)0;
  int32_t *l_35 = &g_16;
  int32_t *l_36 = (void *)0;
  int32_t *l_37 = &g_20[4][2];
  int32_t *l_38 = &g_20[4][2];
  uint16_t l_39 = 0xC4EBL;
  for (p_7 = 0; (p_7 >= 1); p_7 = safe_add_func_uint16_t_u_u(p_7, 3)) {
    uint8_t l_24 = 6UL;
    for (g_13 = 0; (g_13 != 8); g_13 = safe_add_func_uint16_t_u_u(g_13, 8)) {
      for (g_16 = 0; (g_16 < 27); g_16 = safe_add_func_int64_t_s_s(g_16, 1)) {
        int32_t *l_19 = &g_20[4][2];
        int32_t *l_21 = &g_20[0][2];
        int32_t *l_22 = &g_20[4][2];
        int32_t *l_23[1][4];
        int i, j;
        for (i = 0; i < 1; i++) {
          for (j = 0; j < 4; j++)
            l_23[i][j] = &g_20[4][2];
        }
        l_24--;
      }
    }
  }
  --l_39;
  return &g_9[2];
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
  for (i = 0; i < 5; i++) {
    transparent_crc(g_9[i].f0, "g_9[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
