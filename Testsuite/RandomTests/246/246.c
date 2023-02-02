// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 8L;
static volatile uint32_t g_7 = 0xBDA7FE64L;
static int32_t *g_28 = &g_3;
static uint32_t g_32 = 4294967295UL;
static int32_t g_34 = 1L;
static int16_t g_40 = 0xB2FAL;
static int8_t g_51 = (-1L);

static int64_t func_1(void);
static int32_t **func_12(uint8_t p_13, uint32_t p_14, int32_t **p_15, int32_t *p_16, int32_t p_17);

static int64_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = (void *)0;
  int32_t l_5 = (-1L);
  int32_t *l_6[2];
  int i;
  for (i = 0; i < 2; i++)
    l_6[i] = &l_5;
  --g_7;
  for (g_3 = 0; (g_3 > 20); g_3 = safe_add_func_int8_t_s_s(g_3, 5)) {
    int32_t l_22 = 0x0DD013D0L;
    const int32_t *const *l_25 = (void *)0;
    uint32_t *l_31 = &g_32;
    int32_t **l_56 = &l_2;
    int32_t ***l_55 = &l_56;
    (*l_55) = func_12(g_3, (safe_div_func_uint8_t_u_u(g_7, (safe_mul_func_int16_t_s_s((l_22 < (safe_mul_func_int64_t_s_s(0L, (((l_25 == ((safe_rshift_func_int16_t_s_s((((void *)0 == g_28) < (safe_add_func_uint32_t_u_u(g_3, ((*l_31) |= (*l_2))))), 14)), l_25)) > g_3) ^ 0xC44D996497440271LL)))), 5L)))), &g_28, &g_3, g_3);
  }
  return g_40;
}

static int32_t **func_12(uint8_t p_13, uint32_t p_14, int32_t **p_15, int32_t *p_16, int32_t p_17) {
  int32_t *l_33 = &g_34;
  int32_t *l_35 = &g_34;
  int32_t l_36 = 0L;
  int32_t *l_37 = &l_36;
  int32_t *l_38 = &g_34;
  int32_t *l_39 = (void *)0;
  int32_t *l_41 = &l_36;
  int32_t *l_42 = &l_36;
  int32_t *l_43 = &l_36;
  int32_t *l_44 = &l_36;
  int32_t *l_45 = &g_34;
  int32_t *l_46 = (void *)0;
  int32_t l_47 = 1L;
  int32_t *l_48 = &l_47;
  int32_t *l_49 = (void *)0;
  int32_t *l_50[1];
  uint8_t l_52 = 255UL;
  int i;
  for (i = 0; i < 1; i++)
    l_50[i] = &l_47;
  --l_52;
  return &g_28;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
