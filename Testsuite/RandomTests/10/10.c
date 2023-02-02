// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0L;
static int64_t g_6 = 4L;
static uint8_t g_30 = 0x94L;
static int32_t g_37 = (-1L);

static int64_t func_1(void);
static int32_t *func_9(int32_t *p_10);

static int64_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t **l_35 = &l_2;
  int32_t *l_36 = &g_37;
  (*l_2) = 0L;
  (*l_36) = (g_3, ((safe_mod_func_uint8_t_u_u(0UL, ((g_3, (*l_2)), (g_6 = g_3)))), (safe_mul_func_uint16_t_u_u(g_6, (0x8E1B8814L & ((((*l_35) = func_9(&g_3)) != l_36) <= g_37))))));
  return (*l_2);
}

static int32_t *func_9(int32_t *p_10) {
  int64_t l_11 = (-1L);
  const int32_t *l_24[5];
  int32_t l_32 = 0x2A74DB50L;
  int i;
  for (i = 0; i < 5; i++)
    l_24[i] = (void *)0;
  if ((1L == (l_11 || (safe_unary_minus_func_int16_t_s(l_11))))) {
    int32_t *l_26 = (void *)0;
    int32_t *l_28 = &g_3;
    int32_t **l_27 = &l_28;
    uint8_t *l_29 = &g_30;
    int32_t l_31 = 0x8642E5F0L;
    const int32_t l_33 = 0x1B8CE229L;
    (*p_10) = (65535UL | ((p_10 != ((safe_mul_func_int64_t_s_s((+((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((l_32 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((*l_29) = ((&g_3 != l_24[3]) <= (~(((4UL == (l_26 != (void *)0)) == (((*l_27) = p_10) == ((((g_6 > g_6) || 4294967291UL), g_3), (void *)0))) | g_3)))), 5)) >= l_31), 0x9AE86A67L))), g_6)), l_33)) <= g_3)), g_3)), p_10)), g_3));
  } else {
    int32_t *l_34 = &g_3;
    return l_34;
  }
  return &g_3;
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
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
