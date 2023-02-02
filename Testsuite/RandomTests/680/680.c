// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  volatile unsigned f0 : 4;
};

union U1 {
  signed f0 : 1;
  const uint8_t f1;
  uint32_t f2;
  const volatile int32_t f3;
  const volatile uint16_t f4;
};

static int64_t g_7 = 0x0566A927213EC752LL;
static volatile struct S0 g_20 = {1};
static int16_t g_23 = 1L;
static int64_t g_27 = 1L;
static int32_t g_29 = 0x0538E0EAL;
static union U1 g_30[2][1][3] = {{{{0L}, {0L}, {0L}}}, {{{0L}, {0L}, {0L}}}};
static volatile union U1 g_33 = {-8L};
static uint64_t g_35 = 0xDB5CF63547A0585CLL;
static int32_t g_37 = 0x8161DBFAL;

static int32_t func_1(void);
static union U1 func_8(int64_t p_9);

static int32_t func_1(void) {
  int8_t l_10 = 0x1EL;
  uint64_t *l_34[2][3][2] = {{{&g_35, &g_35}, {&g_35, &g_35}, {&g_35, &g_35}}, {{&g_35, &g_35}, {&g_35, &g_35}, {&g_35, &g_35}}};
  int32_t *l_36 = &g_37;
  int i, j, k;
  (*l_36) ^= (safe_mod_func_uint16_t_u_u(((((safe_div_func_uint8_t_u_u((0xBC662A2B3B7BEDEDLL && ((safe_unary_minus_func_uint8_t_u((((g_7 < g_7) < g_7), ((func_8(l_10), (safe_sub_func_int16_t_s_s((((g_33, (l_10 & (g_35 = l_10))) > 0x8169B2B29335309FLL), g_7), 0x28C5L))) < g_7)))) >= 0x456BBB30732BAB2BLL)), l_10)), l_10) || 0x624E194E4064544ALL), 0x4792L), g_7));
  return g_30[0][0][2].f0;
}

static union U1 func_8(int64_t p_9) {
  int16_t *l_21 = (void *)0;
  int16_t *l_22 = &g_23;
  int32_t l_24 = 0L;
  int16_t l_25 = (-9L);
  int64_t *l_26 = &g_27;
  int32_t *l_28 = &g_29;
  (*l_28) &= (((((safe_rshift_func_uint64_t_u_s(((((g_7 <= ((((((((*l_26) = (g_7 && (((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((((g_7 > ((safe_rshift_func_int16_t_s_s(p_9, (safe_unary_minus_func_uint16_t_u(p_9)))) > 0xA5D840DFL)) ^ ((+1UL), (((g_7 > ((*l_22) = (g_20, 0x5D06L))) < l_24) != l_25))) < p_9))), 1)) < 0xF9L) ^ 7UL))) <= g_7) == l_25) | 0xB4763523L) || p_9) | p_9) > 0xE7L)) | g_7), g_20.f0) && g_20.f0), 37)) < l_24) ^ g_7) >= 0L), g_7);
  return g_30[0][0][2];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_30[i][j][k].f0, "g_30[i][j][k].f0", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
