// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[1] = {1L};
static volatile int32_t g_3 = 0xAA39ED08L;
static volatile int32_t g_4 = 0L;
static volatile int32_t g_5 = 0x09978F3CL;
static int32_t g_6 = 1L;
static uint16_t g_24 = 0xE19FL;
static uint16_t g_26 = 0xEDF0L;
static uint32_t g_30 = 8UL;
static int32_t g_33 = 1L;
static uint16_t *g_34 = &g_26;
static int32_t g_50 = 1L;

static int32_t func_1(void);
static int32_t func_9(uint32_t p_10, uint16_t p_11, const int32_t p_12, const int16_t p_13, uint16_t p_14);

static int32_t func_1(void) {
  int16_t l_15 = 0x21AFL;
  for (g_6 = (-20); (g_6 != (-15)); g_6++) {
    int32_t l_22 = 9L;
    uint16_t *l_23 = &g_24;
    const uint16_t *l_25 = &g_26;
    int32_t *l_31 = (void *)0;
    int32_t *l_32 = &g_33;
    uint8_t l_35 = 251UL;
    int32_t *l_52 = &g_50;
    int32_t *l_53 = &l_22;
    (*l_53) = ((*l_52) |= func_9(l_15, (safe_add_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(g_3, (l_15 | ((((((*l_23) = l_22) ^ (l_25 == (g_34 = ((((*l_32) = (+((g_26 <= (safe_rshift_func_uint32_t_u_s(l_22, 11))), (g_30 = g_26)))), (&g_26 != &g_26)), (void *)0)))) | l_15), l_15) != 0x857BL)))) > g_6), l_22)), l_22, l_15, l_35));
  }
  return g_2[0];
}

static int32_t func_9(uint32_t p_10, uint16_t p_11, const int32_t p_12, const int16_t p_13, uint16_t p_14) {
  uint16_t *l_42 = &g_24;
  uint32_t l_48 = 4UL;
  int32_t l_51 = 0x3D47EBDCL;
  for (g_26 = 0; (g_26 < 7); g_26 = safe_add_func_int64_t_s_s(g_26, 1)) {
    uint32_t l_47 = 0x6E30F4AEL;
    int32_t *l_49[2][4] = {{&g_6, &g_50, &g_6, &g_50}, {&g_6, &g_50, &g_6, &g_50}};
    int i, j;
    l_51 &= ((((-5L) || (((0x8FL & g_24) != (~((+(safe_sub_func_uint64_t_u_u(((((void *)0 != l_42) | (safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((&g_26 == &g_26), (1L | (l_47 >= g_30)))) <= 0xFE54384F3AC16B40LL), l_48))) == p_14), (-1L)))) | g_2[0]))) > l_48)) && 0xDC9A81FFDE63B691LL), l_47);
  }
  return g_26;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
