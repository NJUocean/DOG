// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint64_t f0;
  const volatile int16_t f1;
  unsigned f2 : 23;
};

static int32_t g_2 = 0xA4A12B57L;
static union U0 g_29 = {1UL};
static int32_t g_37 = 0x92657CF7L;
static int32_t g_40 = 6L;
static int64_t g_41[2][2] = {{0xA514227F44FB66C1LL, 0xA514227F44FB66C1LL}, {0xA514227F44FB66C1LL, 0xA514227F44FB66C1LL}};
static int8_t g_43 = 4L;
static volatile int8_t g_46 = 0L;
static uint64_t g_47 = 0xD3F5771BF39352A5LL;
static int32_t g_51 = (-4L);

static int32_t func_1(void);
static int32_t func_5(uint32_t p_6, uint64_t p_7, uint32_t p_8);

static int32_t func_1(void) {
  int16_t l_22[3][2] = {{6L, 6L}, {6L, 6L}, {6L, 6L}};
  int32_t *l_39 = &g_2;
  uint8_t l_52 = 0xCFL;
  int i, j;
  for (g_2 = 6; (g_2 >= 17); g_2 = safe_add_func_uint32_t_u_u(g_2, 1)) {
    uint8_t l_13 = 0x68L;
    int32_t *l_36 = &g_37;
    int8_t *l_42 = &g_43;
    int32_t *l_50 = &g_51;
        (*l_50) |= func_5(((safe_div_func_uint64_t_u_u((g_2 <= (safe_mul_func_int8_t_s_s(l_13, (((((safe_lshift_func_int8_t_s_u(((*l_42) |= (g_2 , (safe_add_func_int16_t_s_s(((l_13 == (safe_rshift_func_int64_t_s_s(((((safe_sub_func_int8_t_s_s((((((l_22[1][1] >= (((((safe_mul_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((g_29 , (safe_sub_func_uint8_t_u_u(((g_41[1][0] = ((safe_mul_func_uint16_t_u_u(((0xE011B55EL == ((safe_lshift_func_int32_t_s_s((((g_40 |= (((*l_36) &= g_29.f0) & (!(l_39 == &g_2)))) || 0x30971CF7L) , g_29.f0), 17)) | 0xD748L)) & g_29.f0), 0x3CA3L)) & 1L)) < (*l_39)), g_29.f0))), g_2)) ^ (*l_39)), g_29.f0)), g_29.f0)) , g_2) | 8UL) < g_2) < (*l_39))) || (*l_36)) > g_2) || g_37) == g_29.f0), g_2)) < 1L) || 0x257DL) | g_29.f0), 14))) < (*l_39)), g_2)))), 0)) <= g_29.f0) & 252UL) , (*l_36)) == g_29.f0)))), (*l_39))) == g_2), g_29.f0, g_29.f0);
  }
  return l_52;
}

static int32_t func_5(uint32_t p_6, uint64_t p_7, uint32_t p_8) {
  int32_t *l_44 = &g_37;
  int32_t *l_45[5][2][4] = {{{&g_37, &g_37, &g_37, &g_37}, {&g_37, &g_37, &g_37, &g_37}}, {{&g_37, &g_37, &g_37, &g_37}, {&g_37, &g_37, &g_37, &g_37}}, {{&g_37, &g_37, &g_37, &g_37}, {&g_37, &g_37, &g_37, &g_37}}, {{&g_37, &g_37, &g_37, &g_37}, {&g_37, &g_37, &g_37, &g_37}}, {{&g_37, &g_37, &g_37, &g_37}, {&g_37, &g_37, &g_37, &g_37}}};
  int i, j, k;
  g_47--;
  return g_41[1][1];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_43, "g_43", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
