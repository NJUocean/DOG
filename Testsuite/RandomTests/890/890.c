// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2[5] = {0x5CDBE8E5L, 0x5CDBE8E5L, 0x5CDBE8E5L, 0x5CDBE8E5L, 0x5CDBE8E5L};
static const int32_t g_18 = 0xD60A2215L;
static int8_t g_27 = 0xDBL;
static int32_t g_32 = 4L;
static uint64_t g_44 = 0x9B12DB22C08F497CLL;
static int32_t g_49 = 0x3830386BL;
static uint32_t g_52 = 0x9EFA4ED9L;
static int32_t *volatile g_54 = &g_32;

static int64_t func_1(void);
static int32_t *func_5(uint16_t p_6, uint8_t p_7);

static int64_t func_1(void) {
  int32_t *l_15 = (void *)0;
  const int32_t *l_17 = &g_18;
  int32_t l_25[4];
  int32_t l_28 = 0L;
  int i;
  for (i = 0; i < 4; i++)
    l_25[i] = 0x5A12A2EFL;
  for (g_2[4] = 24; (g_2[4] >= (-15)); g_2[4]--) {
    int32_t **l_16 = &l_15;
    int8_t *l_26[1];
    int i;
    for (i = 0; i < 1; i++)
      l_26[i] = &g_27;
    (*l_16) = func_5(g_2[4], (safe_div_func_uint8_t_u_u((g_2[4] > (+((g_2[4], ((safe_mul_func_int8_t_s_s((l_28 &= ((safe_add_func_int8_t_s_s(((((*l_16) = l_15) != (l_17 = &g_2[2])), (safe_add_func_uint64_t_u_u(((g_2[4], (((((*l_17) != (g_18, (safe_mul_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((void *)0 == &l_17) && g_18), 0x2B8EL)), 0x9D5B611FL)))) && (*l_17)) || g_2[1]) != 0x015FB26CL)), g_2[0]), g_2[3]))), l_25[1])) | l_25[1])), l_25[1])) || g_2[4])) <= l_25[1]))), l_25[1])));
    if ((*l_17))
      continue;
  }
  return g_2[4];
}

static int32_t *func_5(uint16_t p_6, uint8_t p_7) {
  uint32_t l_29[5];
  int32_t *const l_30 = &g_2[4];
  int64_t l_41 = 0xC8C9F13A4B1F0599LL;
  uint64_t *l_42 = (void *)0;
  uint64_t *l_43 = &g_44;
  uint32_t *l_51 = &g_52;
  int i;
  for (i = 0; i < 5; i++)
    l_29[i] = 18446744073709551608UL;
  for (p_7 = 0; (p_7 <= 4); p_7 += 1) {
    int32_t *l_31 = &g_32;
    for (g_27 = 4; (g_27 >= 0); g_27 -= 1) {
      int i;
      if (l_29[g_27])
        break;
    }
    l_31 = l_30;
  }
  if ((g_27 < (safe_lshift_func_uint32_t_u_u(((*l_51) |= ((((((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(0xF05DE082ADE89B93LL, 0xBBBB531EAA473ECFLL)), (*l_30))) || (*l_30)) && (safe_add_func_uint64_t_u_u(((*l_43) ^= (l_41 == p_6)), ((safe_rshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s(((g_49, (((!(9UL ^ g_2[4])) < g_18) == (*l_30))) & (*l_30)), 18446744073709551614UL)) != g_49), 1)) ^ (*l_30))))), 0xBF04L) <= (*l_30)) != 0xA0L)), (*l_30))))) {
    uint64_t *l_53[2];
    int i;
    for (i = 0; i < 2; i++)
      l_53[i] = (void *)0;
    (*g_54) = (l_53[1] != l_53[1]);
  } else {
    uint16_t l_56 = 65529UL;
    for (g_32 = 3; (g_32 >= 0); g_32 -= 1) {
      int32_t *l_55 = &g_49;
      int i;
      l_56 = ((*l_55) = l_29[g_32]);
    }
  }
  return l_51;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
