// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const int32_t f0;
  uint16_t f1;
  const volatile uint32_t f2;
  uint32_t f3;
};

static const uint16_t g_6 = 0x4555L;
static int8_t g_12 = 0x77L;
static volatile int8_t g_25[2][2] = {{(-1L), (-1L)}, {(-1L), (-1L)}};
static volatile int8_t *g_24 = &g_25[0][1];
static int32_t g_27 = (-6L);
static uint16_t g_30 = 65535UL;
static int32_t g_34 = 0L;
static int32_t *g_33 = &g_34;
static int32_t **volatile g_32 = &g_33;
static int64_t g_35 = 0L;
static int32_t g_38[1][1] = {{0L}};
static uint8_t g_40 = 0x1EL;
static volatile union U1 g_45 = {0xF6B4AB19L};
static int32_t **volatile *g_52 = &g_32;
static int32_t **volatile **volatile g_51[4][5][3] = {{{&g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52}, {&g_52, &g_52, (void *)0}, {&g_52, &g_52, &g_52}}, {{&g_52, &g_52, (void *)0}, {&g_52, &g_52, &g_52}, {&g_52, &g_52, (void *)0}, {&g_52, &g_52, &g_52}, {&g_52, &g_52, &g_52}}, {{&g_52, &g_52, &g_52}, {&g_52, (void *)0, &g_52}, {&g_52, &g_52, &g_52}, {&g_52, (void *)0, &g_52}, {&g_52, &g_52, &g_52}}, {{&g_52, &g_52, &g_52}, {&g_52, (void *)0, (void *)0}, {(void *)0, &g_52, (void *)0}, {&g_52, &g_52, &g_52}, {&g_52, (void *)0, &g_52}}};

static uint8_t func_1(void);
static int64_t func_7(uint8_t p_8);

static uint8_t func_1(void) {
  uint32_t *l_36[1];
  int32_t l_37 = 0xBDB62B2FL;
  int8_t l_39[2][5] = {{0L, 0xF1L, 0xF1L, 0L, 0xF1L}, {0L, 0L, 0xC0L, 0L, 0L}};
  const uint64_t l_50 = 0x458230B545435D7DLL;
  int32_t *l_54 = &g_38[0][0];
  int i, j;
  for (i = 0; i < 1; i++)
    l_36[i] = (void *)0;
  if (((safe_sub_func_uint64_t_u_u((((((safe_lshift_func_int16_t_s_s(g_6, 5)) | (g_35 = func_7(g_6))) == (g_40++)), l_37), ((((*g_24) & 251UL), ((safe_mul_func_int8_t_s_s(((g_45, (((safe_add_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s(l_39[1][0], (g_35 |= l_39[1][0]))) | l_37), l_50)) != g_27), g_38[0][0])) || (-1L)), g_6)), l_39[1][4])) > g_38[0][0])), 0xDAF8D98C6833686ALL)) != 0x7AL)) {
    return l_50;
  } else {
    int32_t **volatile **l_53 = &g_52;
    (*l_53) = &g_32;
  }
  (*l_54) |= l_37;
  return g_35;
}

static int64_t func_7(uint8_t p_8) {
  int8_t *l_11 = &g_12;
  int32_t l_17 = 0xFAA32F3FL;
  int32_t *l_26 = &g_27;
  int32_t l_28 = (-6L);
  int32_t *l_29[2][5][5] = {{{&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}}, {{&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}, {&l_17, &l_17, &l_17, &l_17, &l_17}}};
  int32_t **l_31 = (void *)0;
  int i, j, k;
  g_30 = ((g_6 > (l_28 |= ((((*l_11) ^= p_8) >= ((((safe_mod_func_uint64_t_u_u(l_17, g_6)) > ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int64_t_s_s((safe_div_func_uint64_t_u_u(l_17, l_17)), (((*l_26) &= ((void *)0 == g_24)), l_17))), 5)) != (*g_24))) || 0L) & (-10L))) > 0L))) & 1UL);
  (*g_32) = &l_17;
  return p_8;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_38[i][j], "g_38[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
