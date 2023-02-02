// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static volatile int32_t g_6 = 0x4EBB0CB8L;
static int16_t g_14 = 2L;
static int16_t g_18 = 0L;
static int16_t g_20 = (-6L);
static int64_t g_22 = 8L;
static int32_t g_27 = (-1L);
static uint32_t g_28 = 0x3A34071EL;
static int32_t **g_29 = (void *)0;

static int32_t func_1(void);
static int64_t func_7(const int32_t *p_8, int64_t p_9, int8_t p_10, int32_t *p_11);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int16_t *l_12 = (void *)0;
  int16_t *l_13 = &g_14;
  int16_t *l_17 = &g_18;
  int16_t *l_19 = &g_20;
  int64_t *l_21 = &g_22;
  (*l_2) = 0x4E1A3622L;
  if (((*l_2) = (safe_add_func_int32_t_s_s(((g_6, func_7(((((((((*l_21) = (((*l_19) = ((((((*l_13) ^= 0x13A6L) >= (l_13 != (void *)0)) | (safe_rshift_func_int32_t_s_u((((*l_2) < ((*l_17) = (*l_2))) != (0x1A82E77E815F8425LL | (*l_2))), 26))) && g_3) < (*l_2))) | g_6)) == (*l_2)) == g_3), 0x090AL) & g_3), g_14), l_2), (*l_2), (*l_2), l_2)) < g_28), 5L)))) {
    g_29 = g_29;
  } else {
    for (g_22 = 0; (g_22 == (-16)); g_22 = safe_sub_func_int64_t_s_s(g_22, 2)) {
      return g_18;
    }
  }
  return (*l_2);
}

static int64_t func_7(const int32_t *p_8, int64_t p_9, int8_t p_10, int32_t *p_11) {
  const int64_t l_25 = (-7L);
  int32_t *l_26[3];
  int i;
  for (i = 0; i < 3; i++)
    l_26[i] = &g_27;
  g_6 ^= (g_27 = ((*p_11) = (safe_lshift_func_uint64_t_u_u(p_9, l_25))));
  return p_10;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
