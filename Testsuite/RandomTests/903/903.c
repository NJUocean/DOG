// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U4 {
  uint32_t f0;
  volatile uint32_t f1;
};

static int32_t g_3[2][1] = {{0x86F8C7B5L}, {0x86F8C7B5L}};
static int32_t *g_2 = &g_3[1][0];
static int32_t **volatile g_4 = &g_2;
static int16_t g_12 = 0xBDFAL;
static const int32_t *g_16 = (void *)0;
static union U4 g_17 = {0UL};

static union U4 func_1(void);
static const int32_t *func_5(int16_t p_6, int32_t *const p_7, int32_t p_8, int32_t *p_9, int8_t p_10);

static union U4 func_1(void) {
  int16_t *l_11 = &g_12;
  int32_t *const l_13 = &g_3[1][0];
  int32_t *l_14 = &g_3[0][0];
  (*g_4) = g_2;
  g_16 = func_5(((*l_11) = g_3[1][0]), l_13, (*l_13), l_14, g_3[1][0]);
  return g_17;
}

static const int32_t *func_5(int16_t p_6, int32_t *const p_7, int32_t p_8, int32_t *p_9, int8_t p_10) {
  int32_t *const *l_15 = &g_2;
  l_15 = &p_7;
  return (*g_4);
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
    for (j = 0; j < 1; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
