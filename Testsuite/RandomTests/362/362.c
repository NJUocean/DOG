// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int64_t f0;
  int64_t f1;
};

static int32_t g_8 = 0x0FA72C25L;
static uint8_t g_21 = 4UL;
static volatile uint8_t g_27 = 1UL;
static volatile uint8_t *g_26 = &g_27;
static uint8_t g_30 = 252UL;
static int32_t g_34 = (-1L);
static struct S0 g_40 = {0x8663C10B42B8FFD0LL, 1L};

static int8_t func_1(void);
static struct S0 func_2(int8_t p_3, uint64_t p_4, uint64_t p_5, int8_t p_6, uint16_t p_7);

static int8_t func_1(void) {
  int16_t l_13 = 5L;
  uint8_t *l_20 = &g_21;
  uint16_t *l_28 = (void *)0;
  uint16_t *l_29[1];
  int i;
  for (i = 0; i < 1; i++)
    l_29[i] = (void *)0;
  g_40 = func_2(g_8, (+g_8), (g_8 && (safe_div_func_int16_t_s_s(0xD783L, (safe_unary_minus_func_uint32_t_u(l_13))))), ((safe_lshift_func_uint32_t_u_u(((g_8 > (safe_sub_func_uint8_t_u_u((l_13 ^ (safe_div_func_uint16_t_u_u(((++(*l_20)) > 0UL), (g_30 |= (((((((safe_div_func_int32_t_s_s((8UL > g_8), (-2L))), g_8) & g_8) ^ l_13), l_20) == g_26) != l_13))))), 0UL))) ^ g_27), g_8)) != 0UL), l_13);
  return l_13;
}

static struct S0 func_2(int8_t p_3, uint64_t p_4, uint64_t p_5, int8_t p_6, uint16_t p_7) {
  uint32_t l_36 = 1UL;
  struct S0 l_39 = {0L, -4L};
  for (p_7 = 0; (p_7 < 30); p_7++) {
    int32_t *l_33 = &g_34;
    int32_t *l_35[2];
    int i;
    for (i = 0; i < 2; i++)
      l_35[i] = (void *)0;
    l_36++;
  }
  return l_39;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
  transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
