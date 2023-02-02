// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const int8_t g_18 = 0L;
static int16_t g_25 = 8L;
static uint16_t g_28 = 0x6193L;
static int32_t g_54[5] = {1L, 1L, 1L, 1L, 1L};
static int32_t *volatile g_53 = &g_54[4];
static volatile int32_t g_60[1][1][5] = {{{0xFE3B64D7L, 0xFE3B64D7L, 0xFE3B64D7L, 0xFE3B64D7L, 0xFE3B64D7L}}};
static int32_t g_68[3] = {(-7L), (-7L), (-7L)};

static int64_t func_1(void);
static uint8_t func_4(int32_t p_5, int8_t p_6);

static int64_t func_1(void) {
  int32_t l_7[4][4][1] = {{{0x0B963AB1L}, {(-1L)}, {1L}, {(-1L)}}, {{0x0B963AB1L}, {(-1L)}, {1L}, {(-1L)}}, {{0x0B963AB1L}, {(-1L)}, {1L}, {(-1L)}}, {{0x0B963AB1L}, {(-1L)}, {1L}, {(-1L)}}};
  uint16_t *l_26 = (void *)0;
  uint16_t *l_27[5][5] = {{&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}};
  int32_t l_29 = 0xD6C5051DL;
  int32_t l_35 = (-1L);
  int32_t *l_66 = &g_54[0];
  int32_t *l_67 = &g_68[1];
  int i, j, k;
  (*l_67) |= (safe_mul_func_int32_t_s_s(0xA9C4C8D3L, ((*l_66) = ((0L == func_4((l_35 |= ((l_7[1][2][0], (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_mul_func_int32_t_s_s((-1L), (0xEEL == g_18))), (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_7[0][0][0], (g_25 = g_18))), (g_28--))), (+(((safe_mul_func_int32_t_s_s(l_7[0][3][0], 0xFA72D50FL)) < 0xD7L), l_7[1][1][0])))))) == 0x47C914A3L) == g_18), 7)) != l_29) & g_18) & l_7[1][2][0]), 0x01C8L)), 1UL), g_18))) == 0x02L)), l_7[1][2][0])), l_7[2][1][0]))));
  return (*l_67);
}

static uint8_t func_4(int32_t p_5, int8_t p_6) {
  int8_t l_40 = 0L;
  uint32_t l_41 = 0x68D270C1L;
  uint16_t *l_44 = &g_28;
  int32_t l_51 = 0xD37718CEL;
  int32_t *l_52 = (void *)0;
  int32_t l_59[1];
  int i;
  for (i = 0; i < 1; i++)
    l_59[i] = 1L;
  (*g_53) ^= (safe_lshift_func_uint16_t_u_u((p_6 != (((((((0x8991L > (safe_mod_func_uint64_t_u_u(l_40, l_41))) >= ((safe_mul_func_uint32_t_u_u(((void *)0 != l_44), (((safe_rshift_func_uint8_t_u_s((l_51 = (safe_div_func_uint64_t_u_u((g_28 != (l_40 < (safe_div_func_uint16_t_u_u((l_41 <= 0x46L), g_18)))), g_18))), 0)) != g_28) != l_41))) == l_40)) || g_18) >= l_40) > g_28) < g_25) <= g_18)), 10));
  for (g_25 = 29; (g_25 == 4); --g_25) {
    int32_t *l_57 = (void *)0;
    int32_t *l_58[3];
    int32_t l_61 = 0x9AF00AFCL;
    int64_t l_62[2][2] = {{0x6057BAD64B6C7F14LL, 0x6057BAD64B6C7F14LL}, {0x6057BAD64B6C7F14LL, 0x6057BAD64B6C7F14LL}};
    uint32_t l_63 = 0x021D5E08L;
    int i, j;
    for (i = 0; i < 3; i++)
      l_58[i] = &g_54[3];
    l_63--;
    (*g_53) ^= (p_5 = p_5);
  }
  return g_60[0][0][2];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_54[i], "g_54[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_60[i][j][k], "g_60[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 3; i++) {
    transparent_crc(g_68[i], "g_68[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
