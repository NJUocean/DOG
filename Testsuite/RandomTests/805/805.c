// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  int64_t f0;
  int32_t f1;
  int64_t f2;
};

union U1 {
  volatile int32_t f0;
};

union U2 {
  int64_t f0;
  const int32_t f1;
  int8_t f2;
};

static int32_t g_5[1][2] = {{1L, 1L}};
static uint32_t g_9 = 0x76881957L;
static int32_t *g_11 = &g_5[0][1];
static int32_t **volatile g_10 = &g_11;
static int32_t **volatile g_12[2][4][3] = {{{&g_11, (void *)0, (void *)0}, {&g_11, &g_11, &g_11}, {&g_11, &g_11, &g_11}, {&g_11, &g_11, &g_11}}, {{(void *)0, (void *)0, (void *)0}, {&g_11, &g_11, &g_11}, {(void *)0, &g_11, &g_11}, {&g_11, &g_11, &g_11}}};
static int32_t **const volatile g_13 = &g_11;
static int32_t g_14 = 4L;
static volatile union U1 g_16 = {0x0E2632C5L};
static uint8_t g_26[1] = {248UL};
static int32_t g_29 = 0xE20EEB49L;
static int32_t *volatile g_28 = &g_29;
static union U0 g_44 = {-1L};
static union U0 *volatile g_43 = &g_44;
static union U2 g_50 = {-3L};

static union U1 func_1(void);
static int32_t *const func_2(int32_t *p_3);

static union U1 func_1(void) {
  int32_t *l_4 = &g_5[0][1];
  int32_t **l_31 = &l_4;
  union U0 l_38 = {0L};
  (*l_31) = func_2(l_4);
  if ((**g_10)) {
    int32_t *l_32[5];
    int i;
    for (i = 0; i < 5; i++)
      l_32[i] = &g_29;
    l_32[1] = (*g_10);
    (**l_31) ^= (&g_9 != (void *)0);
  } else {
    int8_t l_35[3];
    uint8_t *l_39 = (void *)0;
    uint8_t *l_40 = &g_26[0];
    union U0 *l_49 = &l_38;
    int32_t l_66 = 0x0E3F56F6L;
    int i;
    for (i = 0; i < 3; i++)
      l_35[i] = 1L;
    (**l_31) = (safe_mul_func_uint8_t_u_u((((((l_35[1] <= (*g_11)) < ((((g_16.f0, g_5[0][1]) || ((*l_40) = (l_38, 0UL))), g_5[0][0]) | g_14)), 4294967295UL) == 0x6E8CFB99L) ^ 1UL), g_9));
    for (g_29 = 11; (g_29 >= 13); g_29 = safe_add_func_int64_t_s_s(g_29, 7)) {
      int16_t l_56 = (-10L);
      int32_t l_57[4] = {0xD3F5771BL, 0xD3F5771BL, 0xD3F5771BL, 0xD3F5771BL};
      uint8_t l_58 = 0xD1L;
      int32_t *l_63 = &l_38.f1;
      int32_t *l_64 = (void *)0;
      int32_t *l_65[3];
      int i;
      for (i = 0; i < 3; i++)
        l_65[i] = &l_38.f1;
      g_43 = g_43;
      (*g_11) = (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((*g_43), l_49) != (g_50, &g_44)), (safe_lshift_func_uint64_t_u_u(((l_66 |= (((*l_40) = (safe_mod_func_uint32_t_u_u((!(l_57[3] &= l_56)), (l_56 | l_58)))) != ((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(g_5[0][1], 3)), (l_58 || 0x85L))) != g_14))), g_26[0]), 15)))), 0xDB9DL));
    }
  }
  return g_16;
}

static int32_t *const func_2(int32_t *p_3) {
  uint32_t *l_8 = &g_9;
  int32_t *const l_30 = &g_5[0][0];
  if ((g_5[0][0] == (safe_lshift_func_uint32_t_u_u(((*l_8) = g_5[0][0]), 10)))) {
    int8_t l_17 = 6L;
    (*g_10) = &g_5[0][1];
    for (g_9 = 0; (g_9 <= 0); g_9 += 1) {
      int8_t l_18 = 2L;
      union U0 l_22 = {-1L};
      int32_t *l_25 = &g_5[0][0];
      int32_t l_27 = (-8L);
      (*g_13) = p_3;
      for (g_14 = 0; (g_14 >= 0); g_14 -= 1) {
        int i, j;
        l_17 ^= ((~g_5[g_9][(g_14 + 1)]), (g_16, 1L));
        (*g_28) = ((*p_3) = ((**g_10) > (((l_18, ((1UL || 9UL) >= (-1L))) ^ (safe_add_func_uint64_t_u_u((g_14 || (+0x67BBL)), ((l_22, (safe_mul_func_int8_t_s_s(((((((g_5[g_9][(g_14 + 1)], p_3) == l_25) || g_14), g_26[0]), l_17) >= l_27), (*l_25)))) || 1UL)))) != g_5[g_9][g_14])));
      }
    }
  } else {
    (*p_3) ^= 0x07758A8CL;
  }
  return l_30;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_26[i], "g_26[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
  transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
