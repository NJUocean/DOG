// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  int32_t f0;
  int64_t f1;
  volatile uint64_t f2;
  uint64_t f3;
};

static int32_t g_2 = 0x0849F845L;
static uint32_t g_40 = 2UL;
static int64_t g_49 = 0xF30385D06F62939CLL;
static int32_t g_51 = (-10L);
static int16_t g_78 = 0x12B1L;
static int32_t g_80 = 7L;
static const volatile struct S1 g_81 = {0x74433F2FL, -5L, 18446744073709551615UL, 18446744073709551614UL};
static volatile struct S1 g_82[2] = {{7L, 0xE0AFDD74211FA8BFLL, 0x0F8590C99E8488E6LL, 0xCAC8A3317083D4BALL}, {7L, 0xE0AFDD74211FA8BFLL, 0x0F8590C99E8488E6LL, 0xCAC8A3317083D4BALL}};
static struct S1 g_83 = {0x8C649887L, 0x33ED7856BCC6B82ELL, 8UL, 0xE3C4023A1BF70E0ELL};

static uint32_t func_1(void);
static struct S1 func_5(uint16_t p_6, uint16_t p_7, uint32_t p_8, int8_t p_9, uint64_t p_10);

static uint32_t func_1(void) {
  int32_t l_11 = 0x1E124DC4L;
  int32_t *l_85 = &g_83.f0;
  for (g_2 = 0; (g_2 >= (-22)); g_2 = safe_sub_func_int32_t_s_s(g_2, 5)) {
    uint8_t l_34[4] = {0x42L, 0x42L, 0x42L, 0x42L};
    uint32_t *l_39 = &g_40;
    int64_t *l_48 = &g_49;
    int32_t *l_50 = &g_51;
    struct S1 *l_84 = &g_83;
    int i;
    (*l_84) = func_5(
        g_2, (l_11 <= ((((safe_sub_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(g_2, (safe_mod_func_uint32_t_u_u(3UL, g_2)))) || (safe_mul_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((((*l_50) = (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_34[2] < (((safe_div_func_int8_t_s_s((((safe_div_func_uint32_t_u_u((--(*l_39)), (safe_mul_func_int64_t_s_s(((*l_48) &= (safe_unary_minus_func_int8_t_s((safe_div_func_int64_t_s_s(g_2, g_2))))), g_2)))) != l_11) && l_34[2]), l_11)) && l_34[2]) & (-3L))), 0x2EC6L)), 4294967295UL))), g_2), g_2)), 0xB4763523L))), 0x3B1067DCC3592E7BLL)), g_2)) && 0x707DL), 14)), (-10L))) > g_2), 0x2BE76DCB0C7B249ELL)), l_11) | 0xD90538E0L) > l_11)),
        g_2, l_11, g_2);
  }
  (*l_85) |= 7L;
  return (*l_85);
}

static struct S1 func_5(uint16_t p_6, uint16_t p_7, uint32_t p_8, int8_t p_9, uint64_t p_10) {
  const int8_t l_53[4] = {0L, 0L, 0L, 0L};
  int32_t *l_60 = &g_51;
  uint32_t *l_66 = (void *)0;
  uint32_t **l_65 = &l_66;
  uint64_t l_73 = 0x11BC31B53A2AD41DLL;
  uint32_t *l_75 = &g_40;
  uint32_t **l_74 = &l_75;
  int16_t l_76 = 0xA1B6L;
  int16_t *l_77 = &g_78;
  int32_t *l_79 = &g_80;
  int i;
  (*l_79) = (((!l_53[0]) && ((*l_77) &= (safe_lshift_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((((((g_40 < ((*l_60) = ((void *)0 == l_60))), ((safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((g_40, ((((*l_65) = l_60) != l_60) ^ (safe_sub_func_int64_t_s_s((((safe_sub_func_int32_t_s_s(5L, (((safe_mod_func_uint16_t_u_u((((((((*l_60), 6L), 65527UL) || p_7) > l_73) > (*l_60)) | p_8), p_10)) & g_49) || p_8))), l_74) != &l_75), (-2L))))), p_7)), l_76), (*l_60))) <= g_49)) > (-5L)), (void *)0) == &g_2), p_7) | g_2), p_10)), p_8)), p_9)))) > g_49);
  g_82[1] = g_81;
  return g_83;
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
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  transparent_crc(g_78, "g_78", print_hash_value);
  transparent_crc(g_80, "g_80", print_hash_value);
  transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
  transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
  transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
  transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_82[i].f0, "g_82[i].f0", print_hash_value);
    transparent_crc(g_82[i].f1, "g_82[i].f1", print_hash_value);
    transparent_crc(g_82[i].f2, "g_82[i].f2", print_hash_value);
    transparent_crc(g_82[i].f3, "g_82[i].f3", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
  transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
  transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
  transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
