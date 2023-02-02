// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  volatile uint8_t f0;
  int16_t f1;
};

union U4 {
  const uint64_t f0;
  volatile uint32_t f1;
  uint32_t f2;
};

union U5 {
  int16_t f0;
};

static uint32_t g_2 = 18446744073709551615UL;
static union U1 g_8 = {0x3DL};
static int64_t g_13 = 0xAB653B1DAB551FA4LL;
static int64_t g_20 = 0x50FA8FAD7494DFD9LL;
static int64_t *g_19 = &g_20;
static union U5 g_25[2][2] = {{{0x0BADL}, {0x0BADL}}, {{0x0BADL}, {0x0BADL}}};
static union U5 *g_27 = &g_25[0][0];
static union U5 **volatile g_26 = &g_27;
static int32_t g_31[1][2][4] = {{{0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L}}};
static union U4 g_32[3][2][3] = {{{{1UL}, {18446744073709551615UL}, {18446744073709551615UL}}, {{18446744073709551615UL}, {18446744073709551606UL}, {0x9BEBB6F2BA10F40BLL}}}, {{{1UL}, {18446744073709551606UL}, {1UL}}, {{1UL}, {18446744073709551615UL}, {0x9BEBB6F2BA10F40BLL}}}, {{{1UL}, {1UL}, {18446744073709551615UL}}, {{1UL}, {18446744073709551615UL}, {18446744073709551615UL}}}};
static int32_t g_34 = 4L;

static union U1 func_1(void);
static union U4 func_4(uint64_t p_5);

static union U1 func_1(void) {
  uint64_t l_11 = 0x5CF1C946B43D2717LL;
  int64_t *l_12 = &g_13;
  int32_t l_21 = 0x7D04549CL;
  uint16_t *l_22 = (void *)0;
  int16_t l_23[3];
  int32_t *l_33[3][2] = {{&g_34, &g_34}, {&g_34, &g_34}, {&g_34, &g_34}};
  int i, j;
  for (i = 0; i < 3; i++)
    l_23[i] = 1L;
  g_34 |= (g_2 != (safe_unary_minus_func_int16_t_s((func_4((safe_div_func_uint16_t_u_u((g_8, (safe_sub_func_uint16_t_u_u(l_11, ((((*l_12) ^= 1L) > (4294967295UL >= (safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((l_23[0] = (g_8.f0 || (safe_mod_func_uint64_t_u_u((0x4137D6C5L <= (((-10L) <= (l_12 != g_19)) >= 4294967295UL)), l_21)))), 0x535DL)))))) >= g_20)))), g_20))), 0x1D49L))));
  return g_8;
}

static union U4 func_4(uint64_t p_5) {
  union U5 *l_24 = &g_25[0][0];
  int32_t *l_28 = (void *)0;
  int32_t *l_29 = (void *)0;
  int32_t *l_30 = &g_31[0][1][0];
  (*g_26) = l_24;
  (*l_30) &= (((*g_26) = l_24) == l_24);
  return g_32[2][0][2];
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
  transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_25[i][j].f0, "g_25[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_31[i][j][k], "g_31[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_32[i][j][k].f0, "g_32[i][j][k].f0", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
