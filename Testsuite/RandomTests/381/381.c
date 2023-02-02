// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint64_t g_15 = 0xA1245C8100C4307ELL;
static uint32_t g_16 = 0xC383C67EL;
static int8_t g_20[1][3] = {{(-1L), (-1L), (-1L)}};
static int32_t *volatile g_24 = (void *)0;
static int32_t g_26 = 0L;
static int32_t *volatile g_25 = &g_26;
static int64_t g_41[2] = {0x885A1EC8F9491450LL, 0x885A1EC8F9491450LL};
static uint32_t g_43 = 0xF88DD0BBL;
static uint32_t g_46 = 0x39C1D55EL;
static int32_t *volatile g_47 = &g_26;
static volatile uint32_t g_51 = 0UL;
static volatile uint32_t *g_50 = &g_51;
static volatile uint32_t **g_49 = &g_50;

static uint16_t func_1(void);
static int64_t func_2(int64_t p_3, uint8_t p_4, uint16_t p_5, int8_t p_6, int64_t p_7);

static uint16_t func_1(void) {
  int64_t l_8 = (-7L);
  int8_t *l_19 = &g_20[0][0];
  int32_t l_48 = 1L;
  volatile uint32_t **l_52 = &g_50;
  l_48 &= (((((func_2((l_8 != ((((l_8, l_8), l_8) >= (safe_add_func_int8_t_s_s(((*l_19) ^= (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(0L, g_15)), (g_16++)))), (safe_rshift_func_int8_t_s_s((0x94L ^ (g_15 != g_15)), 7))))) | 0x39E0L)), l_8, l_8, g_15, l_8) <= 0x2FAFECEB2CFB1158LL) >= g_15) >= g_15) > 0x45435D7DL) & 0UL);
  l_52 = ((l_48 | ((void *)0 != &g_41[0])), g_49);
  return l_48;
}

static int64_t func_2(int64_t p_3, uint8_t p_4, uint16_t p_5, int8_t p_6, int64_t p_7) {
  uint8_t l_23 = 2UL;
  int64_t *l_40 = &g_41[0];
  uint32_t *l_42 = &g_43;
  uint32_t *l_44 = (void *)0;
  uint32_t *l_45 = &g_46;
  for (p_6 = 0; (p_6 <= 0); p_6 += 1) {
    if (l_23)
      break;
    for (l_23 = 0; (l_23 <= 0); l_23 += 1) {
      int i, j;
      for (p_3 = 0; (p_3 >= 0); p_3 -= 1) {
        int i, j;
        (*g_25) = g_20[l_23][l_23];
      }
      if (g_20[l_23][l_23])
        break;
    }
  }
  (*g_47) = (((+g_16) >= (4L != ((*l_45) ^= ((*l_42) &= ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(65534UL, ((0xAFFAL || 0x8CBDL) >= ((safe_div_func_int64_t_s_s((g_15 & p_7), (safe_lshift_func_int8_t_s_s((((*l_40) = (safe_mod_func_uint8_t_u_u(g_20[0][0], ((safe_add_func_uint8_t_u_u(((((l_23, g_20[0][0]) == 0x09L) ^ l_23) == (-5L)), l_23)), l_23)))) | p_3), l_23)))) > 0x520A048CL)))), l_23)) ^ 0xB54C5F6BL))))) <= p_5);
  return g_20[0][0];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_26, "g_26", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_41[i], "g_41[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_43, "g_43", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
