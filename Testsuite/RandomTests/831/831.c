// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile int64_t f0;
  int8_t f1;
  volatile uint16_t f2;
  const int32_t f3;
  int32_t f4;
};

static volatile int32_t g_2 = (-1L);
static volatile int32_t g_3[3][1] = {{(-6L)}, {(-6L)}, {(-6L)}};
static int32_t g_4 = 0x0C170CD5L;
static volatile union U0 g_7[1] = {{5L}};
static uint8_t g_36[3][5] = {{0x48L, 0x48L, 0xA4L, 0x48L, 0x48L}, {0xB6L, 0x48L, 0xB6L, 0xB6L, 0x48L}, {0x48L, 0xB6L, 0xB6L, 0x48L, 0xB6L}};

static const int64_t func_1(void);
static int32_t *func_9(int32_t *p_10, int8_t p_11);

static const int64_t func_1(void) {
  int64_t l_12 = 1L;
  int32_t *l_40[2][4];
  int32_t **l_39 = &l_40[1][3];
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++)
      l_40[i][j] = &g_4;
  }
  for (g_4 = 0; (g_4 <= (-9)); --g_4) {
    volatile int32_t *l_8 = &g_3[2][0];
    (*l_8) = (g_7[0], g_7[0].f0);
  }
  (*l_39) = func_9(&g_4, l_12);
  return g_4;
}

static int32_t *func_9(int32_t *p_10, int8_t p_11) {
  int32_t *l_13 = (void *)0;
  int32_t l_24 = (-2L);
  int32_t l_29 = 0L;
  int32_t l_30 = 0x498A597FL;
  int32_t l_31 = 0L;
  int32_t l_32 = 1L;
  int32_t l_34[3];
  int i;
  for (i = 0; i < 3; i++)
    l_34[i] = (-3L);
  if ((*p_10)) {
    return l_13;
  } else {
    int32_t l_25 = (-1L);
    int32_t l_26 = 4L;
    int32_t l_33[3];
    int i;
    for (i = 0; i < 3; i++)
      l_33[i] = 0xC5815DA7L;
    for (p_11 = (-17); (p_11 <= (-28)); p_11 = safe_sub_func_int16_t_s_s(p_11, 1)) {
      int16_t l_22[3][5] = {{(-1L), 1L, (-1L), (-1L), 1L}, {5L, 0x237FL, (-1L), 1L, 1L}, {0x237FL, 5L, 0x237FL, (-1L), 1L}};
      int32_t l_23 = (-1L);
      int32_t l_27 = (-1L);
      int32_t l_28[3][3][1];
      int16_t l_35 = 0xB7CAL;
      int i, j, k;
      for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
          for (k = 0; k < 1; k++)
            l_28[i][j][k] = 0x36FE5438L;
        }
      }
      for (g_4 = 0; (g_4 != 22); g_4++) {
        int32_t l_18 = 0x6B3E713EL;
        int32_t l_19 = 0L;
        int32_t *l_20 = &l_19;
        int32_t *l_21[5][5][2] = {{{&g_4, &g_4}, {&l_19, (void *)0}, {(void *)0, &l_19}, {&g_4, &g_4}, {&g_4, &l_19}}, {{(void *)0, (void *)0}, {&g_4, &l_19}, {&l_19, &l_19}, {&g_4, &g_4}, {&g_4, &g_4}}, {{&l_19, &l_19}, {&l_19, &g_4}, {&g_4, &g_4}, {&g_4, &l_19}, {&l_19, &l_19}}, {{&g_4, &g_4}, {&g_4, &g_4}, {&l_19, &l_19}, {&l_19, &g_4}, {&g_4, &g_4}}, {{&g_4, &l_19}, {&l_19, &l_19}, {&g_4, &g_4}, {&g_4, &g_4}, {&l_19, &l_19}}};
        int i, j, k;
        ++g_36[0][0];
        l_23 = 0x200A2DC1L;
      }
    }
  }
  (*p_10) = ((void *)0 == &l_34[0]);
  return p_10;
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
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_7[i].f0, "g_7[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_36[i][j], "g_36[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
