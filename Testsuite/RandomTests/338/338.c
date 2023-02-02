// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  int64_t f0;
};

static int32_t g_3 = 7L;
static union U0 g_14[3] = {{0x6EC7516A205B2906LL}, {0x6EC7516A205B2906LL}, {0x6EC7516A205B2906LL}};
static int8_t g_19 = (-10L);
static int16_t g_20 = 0x1C58L;
static int32_t g_21 = 7L;
static uint32_t g_22 = 0x0477AE27L;
static int32_t *g_37 = (void *)0;

static int16_t func_1(void);
static union U0 *func_10(union U0 *p_11, int8_t p_12);

static int16_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t l_4 = 0L;
  uint16_t l_5 = 7UL;
  union U0 *l_30 = &g_14[1];
  l_5--;
  for (l_5 = 0; (l_5 < 15); l_5++) {
    union U0 *l_13 = &g_14[1];
    int32_t l_15 = (-2L);
    l_30 = func_10(l_13, (l_15, (-1L)));
    for (l_4 = (-3); (l_4 >= (-25)); --l_4) {
      const uint32_t l_38 = 4UL;
      for (l_15 = 25; (l_15 == (-3)); l_15--) {
        int32_t **l_35 = (void *)0;
        int32_t **l_36[4][1] = {{&l_2}, {&l_2}, {&l_2}, {&l_2}};
        int i, j;
        (*l_2) = 3L;
        g_37 = &g_3;
      }
      (*l_2) = (l_38 != g_21);
    }
  }
  return (*l_2);
}

static union U0 *func_10(union U0 *p_11, int8_t p_12) {
  int32_t *l_16 = &g_3;
  int32_t l_17 = 1L;
  int32_t *l_18[2];
  int i;
  for (i = 0; i < 2; i++)
    l_18[i] = &g_3;
  g_22++;
  for (l_17 = (-12); (l_17 == 29); l_17++) {
    for (g_20 = 0; (g_20 >= (-10)); g_20 = safe_sub_func_int16_t_s_s(g_20, 1)) {
      int32_t *l_29 = (void *)0;
      l_29 = &g_3;
    }
  }
  return &g_14[1];
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
  for (i = 0; i < 3; i++) {
    transparent_crc(g_14[i].f0, "g_14[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
