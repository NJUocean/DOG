// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint16_t f0;
  int8_t f1;
  volatile int16_t f2;
  volatile int32_t f3;
  const int32_t f4;
};

union U1 {
  volatile uint32_t f0;
  int8_t f1;
  int32_t f2;
  volatile int32_t f3;
  volatile int32_t f4;
};

union U3 {
  volatile signed f0 : 6;
  const uint32_t f1;
};

static const uint32_t g_2[2] = {0UL, 0UL};
static int32_t g_3 = (-6L);
static int32_t g_6 = 0x5A40F2FDL;
static int32_t g_10 = (-3L);
static int32_t *volatile g_9 = &g_10;
static union U1 g_11[1][3] = {{{0x7383CC47L}, {0x7383CC47L}, {0x7383CC47L}}};
static union U3 g_23 = {0x9CF7D164L};
static union U0 g_34 = {6UL};
static union U0 *g_36 = &g_34;
static union U0 **volatile g_35 = &g_36;

static const int8_t func_1(void);
static union U0 *func_12(int64_t p_13, const int32_t *p_14);

static const int8_t func_1(void) {
  const uint8_t l_24 = 255UL;
  g_3 |= g_2[0];
  for (g_3 = (-27); (g_3 != 21); g_3 = safe_add_func_uint16_t_u_u(g_3, 3)) {
    int16_t l_25 = 0L;
    int32_t *l_40 = &g_10;
    int32_t **l_39 = &l_40;
    int32_t ***l_38 = &l_39;
    int32_t ****l_37 = &l_38;
    for (g_6 = 0; (g_6 <= (-1)); g_6 = safe_sub_func_int64_t_s_s(g_6, 9)) {
      (*g_9) &= g_3;
      for (g_10 = 0; (g_10 <= 0); g_10 += 1) {
        const int32_t *l_30 = &g_6;
      }
    }
    (*l_37) = (void *)0;
  }
  return g_3;
}

static union U0 *func_12(int64_t p_13, const int32_t *p_14) {
  int32_t *l_32 = &g_10;
  int32_t **l_31[3];
  union U0 *l_33 = &g_34;
  int i;
  for (i = 0; i < 3; i++)
    l_31[i] = &l_32;
  g_9 = (void *)0;
  return l_33;
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
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_11[i][j].f0, "g_11[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
  transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
