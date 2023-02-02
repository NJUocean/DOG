// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int32_t f0;
  uint64_t f1;
  uint32_t f2;
  uint64_t f3;
  uint8_t f4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
  signed f0 : 15;
  const uint64_t f1;
  int16_t f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
  int16_t f0;
};
#pragma pack(pop)

static uint32_t g_11[2][1][5] = {{{0x25B054DBL, 0x25B054DBL, 0x25B054DBL, 0x25B054DBL, 0x25B054DBL}}, {{0xF07C70ABL, 0x0C544087L, 0xF07C70ABL, 0x0C544087L, 0xF07C70ABL}}};
static int8_t g_29 = 0x3EL;
static struct S2 g_30 = {0L};
static struct S1 g_31 = {108, 18446744073709551609UL, 0xFC7DL};
static volatile struct S0 g_43 = {0x42039CE8L, 0x662B132DC1B2D863LL, 18446744073709551615UL, 1UL, 0x03L};
static uint16_t g_45 = 1UL;
static int32_t g_50 = (-9L);
static int32_t g_52 = 0x8B058B50L;
static int32_t *volatile g_51 = &g_52;

static const struct S1 func_1(void);
static int32_t func_2(int32_t p_3, int32_t p_4, struct S2 p_5, int32_t p_6, struct S1 p_7);

static const struct S1 func_1(void) {
  uint64_t l_14 = 0UL;
  int16_t l_27 = 5L;
  int8_t *l_28 = &g_29;
  uint16_t l_48 = 0x0421L;
  int32_t l_55 = (-3L);
  const int32_t l_58 = 0x1D86E6AFL;
  const struct S1 l_67 = {121, 0x8D27FD735AE52E9ALL, 0x701FL};
  if (func_2((safe_div_func_uint8_t_u_u((+g_11[0][0][1]), ((*l_28) &= (((safe_lshift_func_uint16_t_u_s(l_14, (safe_mul_func_int16_t_s_s(g_11[0][0][1], ((((safe_sub_func_int64_t_s_s((l_14 <= ((l_14 ^ (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((0L != l_14), (l_27 != l_14))), 5)), l_14)), 6))) ^ 7UL)), l_14)) != g_11[1][0][1]) & 1UL) ^ l_14))))) | g_11[1][0][1]), 0xE5L)))), g_11[0][0][1], g_30, l_27, g_31)) {
    for (l_14 = 0; l_14 < 2; l_14 += 1) {
      for (g_30.f0 = 0; g_30.f0 < 1; g_30.f0 += 1) {
        for (g_31.f2 = 0; g_31.f2 < 5; g_31.f2 += 1) {
          g_11[l_14][g_30.f0][g_31.f2] = 18446744073709551606UL;
        }
      }
    }
  } else {
    uint32_t l_42 = 4UL;
    uint16_t *l_44 = &g_45;
    int32_t *l_49 = &g_50;
    int16_t *l_61 = &g_30.f0;
    int16_t *l_62 = &g_31.f2;
    (*g_51) = ((*l_49) |= ((l_42, ((l_27 < (((l_28 == (g_43, (void *)0)) && (l_14, (((*l_44) = g_31.f0) >= (g_31.f0 ^ (safe_sub_func_uint8_t_u_u((1UL <= l_14), l_48)))))) && g_31.f2)) <= g_11[1][0][0])) | 0xBD97C292L));
    (*l_49) = (safe_sub_func_int32_t_s_s(l_55, (safe_rshift_func_int64_t_s_s(((void *)0 != &l_55), (l_58 || ((*l_49) < ((((safe_div_func_uint16_t_u_u((((*l_62) = ((*l_61) ^= (&g_52 != &g_52))) && ((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((void *)0 == l_44), g_30.f0)), 0L)) > 0xC8559CE7L)), 0x3388L)), g_31.f0) < 0x310705E7L), g_43.f0)))))));
  }
  return l_67;
}

static int32_t func_2(int32_t p_3, int32_t p_4, struct S2 p_5, int32_t p_6, struct S1 p_7) {
  for (g_31.f2 = 25; (g_31.f2 < 16); g_31.f2 = safe_sub_func_int16_t_s_s(g_31.f2, 4)) {
    for (g_29 = 4; (g_29 == (-24)); g_29--) {
      for (p_6 = 0; (p_6 < (-27)); p_6--) {
        return g_31.f1;
      }
    }
    for (p_7.f2 = 0; (p_7.f2 <= 17); p_7.f2 = safe_add_func_int16_t_s_s(p_7.f2, 4)) {
      for (p_3 = (-18); (p_3 >= (-13)); p_3 = safe_add_func_uint32_t_u_u(p_3, 7)) {
        return p_7.f2;
      }
    }
  }
  return p_6;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_11[i][j][k], "g_11[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
  transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
  transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
  transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
  transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
  transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
  transparent_crc(g_43.f3, "g_43.f3", print_hash_value);
  transparent_crc(g_43.f4, "g_43.f4", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
