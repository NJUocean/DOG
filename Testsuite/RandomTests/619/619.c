// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  volatile signed f0 : 2;
  volatile uint64_t f1;
  uint32_t f2;
};

static volatile int32_t g_2 = 0x38ECF54CL;
static int32_t g_3 = 0x9AED23B6L;
static volatile int32_t g_7 = 0xD8F8F576L;
static volatile int32_t g_8 = 0L;
static int32_t g_9[1][2][5] = {{{1L, 1L, 1L, 1L, 1L}, {0x6A205B29L, 0x6A205B29L, 0x6A205B29L, 0x6A205B29L, 0x6A205B29L}}};
static volatile union U1 g_10 = {0x9ACD4098L};
static int32_t g_33 = 0xEBAE88B1L;
static uint64_t g_48 = 18446744073709551613UL;
static uint16_t g_62 = 1UL;
static uint16_t g_65 = 0x444CL;
static int32_t g_69 = 1L;

static uint8_t func_1(void);
static int64_t func_13(uint32_t p_14, int64_t p_15, int16_t p_16);

static uint8_t func_1(void) {
  int8_t l_21[2];
  int i;
  for (i = 0; i < 2; i++)
    l_21[i] = 1L;
  for (g_3 = 0; (g_3 > (-10)); g_3 = safe_sub_func_int32_t_s_s(g_3, 8)) {
    int32_t l_6[4];
    int32_t l_49 = 0xDD038CF4L;
    int8_t *l_50 = &l_21[0];
    int i;
    for (i = 0; i < 4; i++)
      l_6[i] = 0x1A9565E0L;
    for (g_9[0][0][0] = 3; (g_9[0][0][0] >= 0); g_9[0][0][0] -= 1) {
      int8_t *l_51 = (void *)0;
      int i;
      if (((g_10, (4L != l_6[g_9[0][0][0]])) < ((l_6[3] > (((safe_lshift_func_int8_t_s_s((l_6[g_9[0][0][0]], (0x168F928D9BA5F27ALL >= func_13(((safe_sub_func_uint32_t_u_u((g_3 ^ (g_9[0][0][0] < (l_6[3] < 8UL))), l_6[g_9[0][0][0]])) > 0x1EC1L), l_21[0], g_9[0][0][0]))), g_9[0][0][0])) >= 1L) < 0L)) == 0x276463A47399D012LL))) {
        int32_t *l_36 = &g_33;
        (*l_36) ^= (safe_lshift_func_uint16_t_u_u(g_9[0][0][0], 11));
      } else {
        uint64_t *l_47[2];
        int64_t l_60[5] = {(-1L), (-1L), (-1L), (-1L), (-1L)};
        uint16_t *l_61 = &g_62;
        int32_t *l_63 = &l_6[g_9[0][0][0]];
        uint16_t *l_64 = &g_65;
        int32_t *l_66 = (void *)0;
        int32_t *l_67 = &g_33;
        int32_t *l_68 = &g_69;
        int i;
        for (i = 0; i < 2; i++)
          l_47[i] = &g_48;
        (*l_68) &= ((*l_67) = (safe_div_func_uint32_t_u_u((0xD45CL && ((*l_64) = (safe_mul_func_int32_t_s_s(((*l_63) = (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(l_6[g_9[0][0][0]], ((safe_add_func_uint32_t_u_u((((l_49 ^= g_9[0][1][1]), l_50) == l_51), 0xF7713567L)) >= ((*l_61) &= (((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s(8L, 0xBF6251CAL)), (safe_div_func_int16_t_s_s((((safe_rshift_func_uint32_t_u_u((l_6[1] <= 0x78915D48947DE68BLL), 5)), l_21[0]) && 1L), l_60[4])))) <= g_2) ^ l_60[4]))))), 3))), l_21[1])))), 0x50754B49L)));
      }
    }
  }
  return l_21[1];
}

static int64_t func_13(uint32_t p_14, int64_t p_15, int16_t p_16) {
  int8_t l_22[5][2][1] = {{{1L}, {0xB1L}}, {{1L}, {0xB1L}}, {{1L}, {0xB1L}}, {{1L}, {0xB1L}}, {{1L}, {0xB1L}}};
  int8_t *l_30 = &l_22[3][0][0];
  int32_t l_31 = (-5L);
  int32_t *l_32 = &g_33;
  int i, j, k;
  (*l_32) &= ((((((g_9[0][0][0] >= (0x20104353L == (g_9[0][0][0], 0UL))) <= ((l_22[3][0][0], (-2L)) && (safe_add_func_int32_t_s_s(((~((((safe_div_func_uint8_t_u_u(g_9[0][0][0], ((*l_30) = (safe_add_func_int8_t_s_s(p_16, ((l_22[3][0][0] ^ p_16) > l_22[3][0][0])))))) | l_31) ^ l_31) == p_14)) < l_31), 0x7DA828C0L)))) < p_15) == g_3) >= g_9[0][1][2]) < 0x91700558L);
  return (*l_32);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  transparent_crc(g_62, "g_62", print_hash_value);
  transparent_crc(g_65, "g_65", print_hash_value);
  transparent_crc(g_69, "g_69", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
