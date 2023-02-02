// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = (-7L);
static int32_t g_6[4] = {0xC3EEE2FDL, 0xC3EEE2FDL, 0xC3EEE2FDL, 0xC3EEE2FDL};
static int32_t *g_26 = &g_6[3];
static int32_t **g_25 = &g_26;

static uint8_t func_1(void);
static uint16_t func_17(int32_t **p_18, int8_t p_19, int32_t *p_20, int32_t **p_21);

static uint8_t func_1(void) {
  uint8_t l_14 = 7UL;
  int32_t *l_23[3][4] = {{(void *)0, (void *)0, (void *)0, (void *)0}, {(void *)0, (void *)0, (void *)0, (void *)0}, {(void *)0, (void *)0, (void *)0, (void *)0}};
  int32_t **l_22[2][5][4] = {{{&l_23[0][3], (void *)0, &l_23[2][3], &l_23[0][3]}, {&l_23[0][2], &l_23[0][3], (void *)0, &l_23[0][3]}, {&l_23[0][3], &l_23[0][3], &l_23[2][2], &l_23[0][3]}, {(void *)0, &l_23[0][3], &l_23[0][3], &l_23[0][3]}, {(void *)0, (void *)0, (void *)0, &l_23[2][3]}}, {{&l_23[2][2], &l_23[1][1], (void *)0, &l_23[0][3]}, {&l_23[0][3], (void *)0, &l_23[0][3], &l_23[1][1]}, {&l_23[2][1], &l_23[1][1], (void *)0, (void *)0}, {&l_23[0][3], &l_23[0][3], &l_23[2][3], &l_23[2][3]}, {&l_23[0][3], &l_23[0][3], &l_23[0][3], &l_23[1][1]}}};
  int i, j, k;
  for (g_2 = 0; (g_2 == (-8)); g_2--) {
    uint8_t l_9 = 0x1FL;
    if (g_2) {
      int32_t *l_5 = &g_6[1];
      int32_t *l_7 = (void *)0;
      int32_t *l_8 = &g_6[3];
      const int32_t *l_13 = &g_6[1];
      const int32_t **l_12 = &l_13;
      l_9--;
      (*l_12) = (void *)0;
    } else {
      uint32_t l_16 = 1UL;
      const int64_t l_24[4] = {0x4B2E809B4AF7BDD4LL, 0x4B2E809B4AF7BDD4LL, 0x4B2E809B4AF7BDD4LL, 0x4B2E809B4AF7BDD4LL};
      int i;
      if ((l_14 & ((safe_unary_minus_func_uint8_t_u((g_2 || l_16))) & func_17(l_22[0][4][2], (g_6[1] >= l_24[3]), &g_6[0], g_25)))) {
        int32_t *l_27 = &g_6[1];
        (*g_25) = l_27;
        (*g_26) = l_24[3];
      } else {
        if ((**g_25))
          break;
      }
    }
  }
  return g_6[1];
}

static uint16_t func_17(int32_t **p_18, int8_t p_19, int32_t *p_20, int32_t **p_21) {
  (*p_20) ^= 0xDA8DB884L;
  return p_19;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
