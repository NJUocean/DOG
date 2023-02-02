// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint64_t g_2 = 7UL;
static int32_t g_10 = 0L;
static int32_t *g_13 = (void *)0;
static int32_t *g_15[3] = {&g_10, &g_10, &g_10};
static int32_t **volatile g_14 = &g_15[1];

static uint32_t func_1(void);
static int32_t func_3(uint32_t p_4, uint8_t p_5, uint8_t p_6);

static uint32_t func_1(void) {
  uint16_t l_8 = 65533UL;
  int32_t *l_12 = &g_10;
  int32_t l_19 = 4L;
  if (g_2) {
    int32_t l_7 = (-1L);
    int32_t *l_11 = &g_10;
    if (((*l_11) = func_3(l_7, l_8, l_8))) {
      (*g_14) = (g_13 = l_12);
    } else {
      int32_t *l_18[3];
      int i;
      for (i = 0; i < 3; i++)
        l_18[i] = &l_7;
      l_19 ^= (safe_mul_func_int32_t_s_s(4L, (**g_14)));
    }
  } else {
    int32_t l_23 = 0xB2C41AC3L;
    for (g_10 = 0; (g_10 >= 10); ++g_10) {
      int32_t *l_22 = &l_19;
      l_22 = (void *)0;
    }
    return l_23;
  }
  return g_2;
}

static int32_t func_3(uint32_t p_4, uint8_t p_5, uint8_t p_6) {
  int32_t *l_9 = &g_10;
  (*l_9) &= g_2;
  return p_4;
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
  transparent_crc(g_10, "g_10", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
