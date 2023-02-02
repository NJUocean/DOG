// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x540D7F82L;
static volatile int32_t g_15 = 0xE135E1F6L;
static const volatile int32_t *g_14 = &g_15;
static const volatile int32_t **volatile g_13 = &g_14;
static const volatile int32_t **volatile *volatile g_16 = &g_13;
static int32_t *g_18 = &g_2;
static int32_t **volatile g_17 = &g_18;
static int16_t g_27 = (-1L);
static uint32_t g_28 = 0x4D91F06EL;
static uint8_t g_31 = 1UL;
static int16_t g_33[1] = {(-1L)};
static volatile int32_t *volatile g_35 = (void *)0;

static const uint32_t func_1(void);
static int32_t *func_5(uint64_t p_6, int8_t p_7, int32_t *p_8, const int32_t *p_9);

static const uint32_t func_1(void) {
  uint64_t l_10 = 1UL;
  const int32_t *l_12[1];
  int32_t l_25 = 0x4E2B79DCL;
  int32_t l_30[1][4][1] = {{{(-1L)}, {0x49EF57A5L}, {(-1L)}, {0x49EF57A5L}}};
  int32_t l_34 = 0L;
  volatile int32_t *l_36 = &g_15;
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_12[i] = &g_2;
  for (g_2 = (-16); (g_2 > 29); g_2 = safe_add_func_int8_t_s_s(g_2, 6)) {
    int32_t *l_11[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
    int16_t *l_26 = &g_27;
    uint8_t l_29 = 1UL;
    int16_t *l_32 = &g_33[0];
    int i;
    (*g_17) = func_5(g_2, l_10, l_11[2], l_12[0]);
    l_34 = (g_15 ^ ((g_2 ^ (g_2 | (((safe_mod_func_int16_t_s_s(((*l_32) = (((g_2, (((l_30[0][3][0] |= (((0xA52BL >= (safe_mul_func_int32_t_s_s(((void *)0 != &g_18), ((g_28 ^= ((*l_26) &= (l_25 ^= g_2))) || (((l_29 & g_28) ^ 0x67E784B52DD8607FLL) & g_2))))), 0x3CL) ^ 255UL)) >= 0xEAC8E4C1L) < g_2)) <= g_31) > g_2)), g_2)) == 8UL) >= 0x6E9F81A7L))) > 255UL));
  }
  (*l_36) = (*g_14);
  return g_33[0];
}

static int32_t *func_5(uint64_t p_6, int8_t p_7, int32_t *p_8, const int32_t *p_9) {
  (*g_16) = g_13;
  return p_8;
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
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_33[i], "g_33[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
