// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S2 {
  unsigned f0 : 13;
  signed f1 : 5;
  signed f2 : 15;
  const signed f3 : 9;
  unsigned f4 : 22;
};

static int32_t g_2 = 0x9A695768L;
static int32_t g_16 = 6L;
static uint8_t g_34 = 1UL;

static int8_t func_1(void);
static uint32_t func_11(uint8_t p_12, struct S2 p_13);

static int8_t func_1(void) {
  int8_t l_8 = 0x72L;
  struct S2 l_14 = {50, -0, 25, -4, 327};
  for (g_2 = (-21); (g_2 <= (-21)); g_2 = safe_add_func_uint8_t_u_u(g_2, 1)) {
    int64_t l_7 = (-1L);
    int32_t *l_37 = &g_16;
    if (g_2)
      break;
    (*l_37) &= ((g_2 ^ ((safe_mod_func_int16_t_s_s(l_7, l_8)), (safe_rshift_func_uint32_t_u_s(func_11(g_2, l_14), 16)))) > l_7);
  }
  return l_14.f1;
}

static uint32_t func_11(uint8_t p_12, struct S2 p_13) {
  int32_t *l_15 = &g_16;
  int32_t l_17[4][4] = {{4L, 4L, 4L, 4L}, {4L, 4L, 4L, 4L}, {4L, 4L, 4L, 4L}, {4L, 4L, 4L, 4L}};
  int32_t *l_18 = &g_16;
  int32_t *l_19 = &l_17[0][0];
  int32_t *l_20 = &l_17[3][1];
  int32_t *l_21 = &g_16;
  int32_t *l_22 = &l_17[3][1];
  int32_t *l_23 = &l_17[3][1];
  int32_t *l_24 = &l_17[2][2];
  int32_t *l_25 = &l_17[3][1];
  int32_t *l_26 = (void *)0;
  int32_t *l_27 = &l_17[1][2];
  int32_t *l_28 = &l_17[3][1];
  int32_t *l_29 = &l_17[0][3];
  int32_t *l_30 = &l_17[3][2];
  int32_t *l_31 = &g_16;
  int32_t *l_32 = &g_16;
  int32_t *l_33[5][1];
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++)
      l_33[i][j] = &g_16;
  }
  ++g_34;
  return g_34;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
