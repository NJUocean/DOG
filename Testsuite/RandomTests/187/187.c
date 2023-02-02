// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  const int64_t f0;
  int64_t f1;
  const uint16_t f2;
  const uint32_t f3;
};

static volatile int16_t g_10 = 9L;
static int16_t g_11[5] = {0L, 0L, 0L, 0L, 0L};
static uint8_t g_19[2][4][2] = {{{0x89L, 255UL}, {0x89L, 0x24L}, {0x9AL, 0x9AL}, {0x24L, 0x89L}}, {{255UL, 0x89L}, {0x24L, 0x9AL}, {0x9AL, 0x24L}, {0x89L, 255UL}}};
static int64_t g_21[3][4][3] = {{{0xAD8BE776E9F81A77LL, 0L, 0xF57A55752783DE76LL}, {0xAD8BE776E9F81A77LL, 0xA4716037280DDA25LL, (-1L)}, {0xE1D67A3D58E56A96LL, 0x3DEE6EE3E4F6F484LL, 0L}, {(-1L), 0xAD8BE776E9F81A77LL, (-1L)}}, {{(-2L), (-1L), 0xF57A55752783DE76LL}, {(-6L), (-1L), (-1L)}, {0x3DEE6EE3E4F6F484LL, 0xAD8BE776E9F81A77LL, 0L}, {0xFEAC8E4C12F69A01LL, 0x3DEE6EE3E4F6F484LL, 0x3DEE6EE3E4F6F484LL}}, {{0x3DEE6EE3E4F6F484LL, 0xF57A55752783DE76LL, (-1L)}, {(-1L), 0x3DEE6EE3E4F6F484LL, (-1L)}, {(-1L), (-1L), 0xFEAC8E4C12F69A01LL}, {0L, 0xAD8BE776E9F81A77LL, (-6L)}}};
static int32_t g_23 = 1L;
static int32_t g_37 = 6L;
static int32_t *volatile g_42[4] = {&g_23, &g_23, &g_23, &g_23};
static int32_t *volatile g_43 = (void *)0;

static int16_t func_1(void);
static int32_t func_2(union U0 p_3, int64_t p_4);

static int16_t func_1(void) {
  union U0 l_5 = {0x5B3B9DA4D073FF82LL};
  uint8_t *l_18[2];
  int64_t *l_20 = &g_21[1][0][0];
  int32_t *l_41 = (void *)0;
  int32_t *l_44 = &g_23;
  int i;
  for (i = 0; i < 2; i++)
    l_18[i] = &g_19[1][2][1];
  (*l_44) = func_2(l_5, ((*l_20) = ((((safe_div_func_uint8_t_u_u(l_5.f0, ((g_19[1][0][1] = (((l_5.f0 >= ((safe_add_func_int32_t_s_s(g_10, g_11[2])) >= (((0x80L <= (0L < (+((((((!(safe_lshift_func_int16_t_s_u(l_5.f0, (safe_mod_func_uint64_t_u_u(18446744073709551615UL, g_11[2]))))) && 1UL), l_5.f0) < g_11[4]), 0L) > l_5.f0)))) < l_5.f0) <= 0UL))) == 0x4E7F13BCF59F89F2LL) & g_11[2])) || g_10))) & g_11[0]) <= l_5.f0) <= g_11[0])));
  return (*l_44);
}

static int32_t func_2(union U0 p_3, int64_t p_4) {
  int32_t *l_22 = &g_23;
  int32_t *l_24 = &g_23;
  int32_t *l_25 = &g_23;
  int32_t *l_26 = (void *)0;
  int32_t l_27 = 0x65C8BB6AL;
  int32_t *l_28 = &g_23;
  int32_t *l_29 = &l_27;
  int32_t *l_30 = (void *)0;
  int32_t *l_31 = &g_23;
  int32_t *l_32 = (void *)0;
  int32_t l_33 = 0x3DB47DC4L;
  int32_t *l_34[3];
  int16_t l_35[2];
  int16_t l_36 = 0xBC12L;
  uint16_t l_38 = 0UL;
  int i;
  for (i = 0; i < 3; i++)
    l_34[i] = &l_33;
  for (i = 0; i < 2; i++)
    l_35[i] = 0x6722L;
  --l_38;
  return (*l_28);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_10, "g_10", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_19[i][j][k], "g_19[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
