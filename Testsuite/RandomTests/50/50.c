// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_11 = (-2L);
static volatile int32_t *const *volatile g_18 = (void *)0;
static int32_t *volatile g_20 = &g_11;
static int32_t *volatile *g_19 = &g_20;
static int64_t g_28 = 0L;
static int32_t g_31 = 0xB9628EAFL;
static int8_t g_32 = (-5L);
static int64_t g_33 = 1L;

static int64_t func_1(void);
static int32_t *func_2(const uint32_t p_3, int32_t *p_4, int32_t p_5, uint16_t p_6, int8_t p_7);

static int64_t func_1(void) {
  const uint16_t l_8 = 1UL;
  int32_t *l_10 = &g_11;
  int32_t **l_9 = &l_10;
  int32_t l_29 = 0x3423637BL;
  int32_t *l_30[5][1];
  int32_t l_34 = 0L;
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++)
      l_30[i][j] = &g_31;
  }
  (*l_9) = func_2(l_8, ((*l_9) = (void *)0), g_11, (((safe_lshift_func_int64_t_s_s((-1L), ((safe_sub_func_int64_t_s_s(((safe_mul_func_int32_t_s_s((l_34 = (g_33 |= (g_32 ^= (g_31 = ((g_18 == g_19) || (((safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((**g_19) & (!(safe_lshift_func_uint8_t_u_u(l_8, 5)))), (((((((g_11 != (-1L)) < g_11) >= g_11) == l_8) >= g_28) != g_28), g_11))), g_28), (-10L))), g_28) >= l_29)))))), g_28)), g_33), g_28)) != g_11))), g_33), g_28), g_11);
  return g_11;
}

static int32_t *func_2(const uint32_t p_3, int32_t *p_4, int32_t p_5, uint16_t p_6, int8_t p_7) { return &g_11; }

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
