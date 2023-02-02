// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  uint32_t f0;
  volatile uint16_t f1;
  int64_t f2;
  const int8_t f3;
};

union U3 {
  unsigned f0 : 13;
};

static volatile int32_t g_2 = 0xA6E6F7FBL;
static int32_t g_3 = 0L;
static uint32_t g_9 = 0x7249AAEDL;
static struct S1 g_13 = {0x52568108L, 3UL, 0x14CD49598AAF0A9BLL, -7L};
static int32_t g_30 = 0L;
static int32_t *volatile g_31 = &g_30;
static uint32_t g_42 = 4294967295UL;
static uint32_t g_57 = 0x4C26B3FAL;

static int32_t func_1(void);
static int32_t func_6(int16_t p_7, union U3 p_8);

static int32_t func_1(void) {
  int32_t l_56 = 0x0CE5FA5BL;
  int32_t *l_60 = &g_3;
  for (g_3 = 0; (g_3 > 19); g_3 = safe_add_func_int16_t_s_s(g_3, 1)) {
    union U3 l_10 = {5UL};
    (*g_31) = func_6(g_9, l_10);
    for (g_13.f0 = 19; (g_13.f0 <= 47); ++g_13.f0) {
      uint32_t l_35 = 0x991F32AFL;
      int32_t *l_40 = &g_30;
      uint32_t *l_41 = &g_42;
      int32_t l_54 = 0x4D864B91L;
      if (((+(((l_35, (void *)0) != &g_2) ^ (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((g_3 & ((((*l_40) = (*g_31)) || ((*l_41)++)) ^ ((((l_10.f0 ^ (safe_div_func_int32_t_s_s((g_13.f3 <= g_13.f2), (safe_div_func_int8_t_s_s((-6L), l_10.f0))))) <= 0x46L) & g_9) == 0xF6D77974L))), 3)), (*l_40)), g_9)))) > l_10.f0)) {
        int32_t *l_49 = (void *)0;
        int32_t *l_50 = &g_30;
        int32_t *l_51 = &g_30;
        int32_t *l_52 = &g_30;
        int32_t *l_53[4][4] = {{&g_3, (void *)0, &g_3, &g_3}, {(void *)0, (void *)0, &g_30, (void *)0}, {(void *)0, &g_3, &g_3, (void *)0}, {&g_3, (void *)0, &g_3, &g_3}};
        int16_t l_55 = (-7L);
        int i, j;
        ++g_57;
      } else {
        return g_13.f1;
      }
    }
  }
  (*l_60) |= (-1L);
  return g_9;
}

static int32_t func_6(int16_t p_7, union U3 p_8) {
  uint8_t l_18 = 250UL;
  int32_t *l_29[3];
  int i;
  for (i = 0; i < 3; i++)
    l_29[i] = &g_30;
  g_2 = ((safe_add_func_int16_t_s_s(p_7, (g_13, ((((safe_mul_func_int16_t_s_s((4294967287UL < 1L), (0xDAB551FA4C821046LL > (0xBA6AL <= (((safe_div_func_int64_t_s_s(l_18, l_18)) | ((safe_lshift_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s((safe_lshift_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(p_7, p_8.f0)) > p_8.f0) & 0L), 7)), l_18)) | p_7), 5)), p_8.f0)), 1UL)), l_18))))) >= 0x53L) <= l_18) > 65531UL)))) & l_18);
  return g_2;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
  transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
  transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
  transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_57, "g_57", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
