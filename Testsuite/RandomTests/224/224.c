// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_3 = 6L;
static uint8_t g_20[4] = {255UL, 255UL, 255UL, 255UL};
static int64_t g_23[5][4] = {{0xD816F93BD5DE1FC6LL, 0xD816F93BD5DE1FC6LL, 0x718BD850270F9E3DLL, 0xD816F93BD5DE1FC6LL}, {0xD816F93BD5DE1FC6LL, (-2L), (-2L), 0xD816F93BD5DE1FC6LL}, {(-2L), 0xD816F93BD5DE1FC6LL, (-2L), (-2L)}, {0xD816F93BD5DE1FC6LL, 0xD816F93BD5DE1FC6LL, 0x718BD850270F9E3DLL, 0xD816F93BD5DE1FC6LL}, {0xD816F93BD5DE1FC6LL, (-2L), (-2L), 0xD816F93BD5DE1FC6LL}};
static int64_t g_27[2][3][2] = {{{0xDB6084EDC0223DECLL, 0xDB6084EDC0223DECLL}, {0xDB6084EDC0223DECLL, 0xDB6084EDC0223DECLL}, {0xDB6084EDC0223DECLL, 0xDB6084EDC0223DECLL}}, {{0xDB6084EDC0223DECLL, 0xDB6084EDC0223DECLL}, {0xDB6084EDC0223DECLL, 0xDB6084EDC0223DECLL}, {0xDB6084EDC0223DECLL, 0xDB6084EDC0223DECLL}}};
static int32_t g_31 = (-5L);
static volatile int64_t g_45[4] = {(-9L), (-9L), (-9L), (-9L)};
static volatile int64_t *g_44 = &g_45[3];
static volatile int64_t *volatile *g_43 = &g_44;
static uint16_t g_47 = 0xB0DEL;
static int32_t g_49 = 0xA52FA57AL;

static uint32_t func_1(void);
static const uint64_t func_9(int16_t p_10, int32_t p_11, int16_t p_12, uint8_t p_13, uint32_t p_14);

static uint32_t func_1(void) {
  uint8_t l_4 = 250UL;
  uint64_t l_15 = 3UL;
  int64_t *l_21 = (void *)0;
  int64_t *l_22 = &g_23[1][3];
  int64_t *l_24 = (void *)0;
  int64_t *l_25 = (void *)0;
  int64_t *l_26 = &g_27[0][2][1];
  int64_t l_28 = 1L;
  int32_t l_50 = (-1L);
  l_50 = (!((l_4 = g_3) <= (safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(func_9(l_15, (((safe_add_func_int32_t_s_s((((l_15 || ((l_15 >= (safe_mod_func_int32_t_s_s((g_20[1] = 1L), (((*l_22) |= ((l_15 ^ g_3) & l_15)) || (((*l_26) = ((*l_22) = l_15)) || (-4L)))))), g_3)) ^ 0x281CL) >= g_3), l_28)) ^ g_3) && 1L), l_28, l_15, g_3), 0x75881DD571B4D09DLL)), 2))));
  return g_47;
}

static const uint64_t func_9(int16_t p_10, int32_t p_11, int16_t p_12, uint8_t p_13, uint32_t p_14) {
  const int64_t *l_30 = &g_27[0][2][1];
  const int64_t **l_29 = &l_30;
  uint64_t l_33[3];
  int64_t *l_37[3];
  int64_t **l_36[1];
  int64_t ***l_38 = (void *)0;
  int64_t ***l_39 = &l_36[0];
  int64_t ***l_40 = (void *)0;
  int64_t **l_42 = &l_37[2];
  int64_t ***l_41 = &l_42;
  uint16_t *l_46 = &g_47;
  int32_t *l_48 = &g_49;
  int i;
  for (i = 0; i < 3; i++)
    l_33[i] = 0xD8EB7BFBC35CF455LL;
  for (i = 0; i < 3; i++)
    l_37[i] = &g_23[2][2];
  for (i = 0; i < 1; i++)
    l_36[i] = &l_37[1];
  l_29 = l_29;
  (*l_48) = (((g_31 = g_20[1]) == ((0xDEFCL | ((safe_unary_minus_func_int32_t_s(((g_27[0][2][1] > ((((((l_33[0], (((void *)0 == (*l_29)) >= p_10)) != (safe_rshift_func_int8_t_s_s((((*l_46) = ((l_33[0], ((((*l_41) = ((*l_39) = l_36[0])) == g_43) | l_33[0])) || 0x2BAB2BD6L)) | g_23[4][2]), l_33[2]))) > g_23[1][3]), (*l_39)) != &g_44) ^ l_33[0])) < 0x90942075L))) < g_27[0][2][0])), l_33[0])) | l_33[0]);
  return (*l_48);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_20[i], "g_20[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_23[i][j], "g_23[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_27[i][j][k], "g_27[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_31, "g_31", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_45[i], "g_45[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
