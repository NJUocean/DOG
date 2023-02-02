// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[1] = {(-1L)};
static volatile int32_t g_3 = 0xD6F2EE76L;
static int32_t g_4[1][1] = {{0x20F89B54L}};
static volatile int32_t g_7 = (-1L);
static volatile int32_t g_8 = 0x770A77C8L;
static volatile int32_t g_9[2] = {0xAFA2FAFDL, 0xAFA2FAFDL};
static int32_t g_10 = 8L;
static int32_t g_16 = 0xE843631EL;
static int32_t *g_15 = &g_16;
static uint32_t g_35 = 7UL;
static uint32_t g_36 = 18446744073709551614UL;
static uint32_t g_38 = 4294967290UL;
static int64_t g_40 = 0x85A06C0F1A0197CBLL;
static int32_t **volatile g_41 = (void *)0;

static const int16_t func_1(void);
static int32_t *func_18(int32_t *p_19, uint16_t p_20, int64_t p_21);

static const int16_t func_1(void) {
  const int8_t l_17 = (-6L);
  uint16_t l_24[1][2];
  uint64_t l_32 = 18446744073709551615UL;
  int32_t *l_33 = &g_10;
  uint32_t *l_34 = &g_35;
  uint32_t *l_37 = &g_38;
  int64_t *l_39 = &g_40;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_24[i][j] = 0x6364L;
  }
  for (g_4[0][0] = 0; (g_4[0][0] <= 8); g_4[0][0] = safe_add_func_uint64_t_u_u(g_4[0][0], 8)) {
    for (g_10 = 0; (g_10 <= (-30)); g_10 = safe_sub_func_int32_t_s_s(g_10, 4)) {
      int32_t *l_13 = &g_10;
      int32_t **l_14[3][4][4] = {{{&l_13, &l_13, &l_13, &l_13}, {&l_13, (void *)0, &l_13, &l_13}, {&l_13, &l_13, &l_13, &l_13}, {&l_13, &l_13, &l_13, &l_13}}, {{&l_13, (void *)0, &l_13, &l_13}, {&l_13, &l_13, &l_13, &l_13}, {&l_13, &l_13, &l_13, &l_13}, {&l_13, &l_13, &l_13, &l_13}}, {{&l_13, &l_13, &l_13, &l_13}, {&l_13, &l_13, &l_13, &l_13}, {&l_13, &l_13, &l_13, (void *)0}, {&l_13, &l_13, &l_13, &l_13}}};
      int i, j, k;
      g_15 = l_13;
    }
    return l_17;
  }
  l_33 = func_18(&g_4[0][0], g_16, ((*l_39) ^= (safe_mod_func_uint32_t_u_u(((*l_37) = (g_36 = ((*l_34) = ((l_17 >= ((g_10 <= l_24[0][1]), g_9[1])), ((safe_div_func_int16_t_s_s(((!(g_16, ((*l_33) |= (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int64_t_s_s(((g_3 > (l_24[0][1] > l_17)), g_4[0][0]), l_32)), l_17), 0x7AL))))), 0x0CBEL), g_4[0][0])), g_9[0]))))), (*g_15)))));
  return (*l_33);
}

static int32_t *func_18(int32_t *p_19, uint16_t p_20, int64_t p_21) { return p_19; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_9[i], "g_9[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
