// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint16_t f0;
  int16_t f1;
  volatile int32_t f2;
};
#pragma pack(pop)

union U1 {
  const int32_t f0;
  int32_t f1;
  volatile int32_t f2;
};

static const int8_t g_2 = (-5L);
static int32_t g_4 = 5L;
static const volatile union U1 g_14 = {0x9FCFBCE0L};
static int16_t g_18[4][2] = {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}};
static int16_t g_20 = (-1L);
static const volatile int32_t *volatile g_28[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
static const volatile int32_t *volatile *g_27 = &g_28[2];
static uint8_t g_29 = 0xFCL;
static int32_t g_31 = 0L;
static int32_t *volatile g_30 = &g_31;
static volatile struct S0 g_32 = {0UL, 0x071EL, 0L};
static uint32_t g_37 = 0x0EB60F9AL;

static int16_t func_1(void);
static int16_t func_10(int32_t *p_11, int32_t p_12, uint64_t p_13);

static int16_t func_1(void) {
  int32_t *l_3 = &g_4;
  int32_t *l_16 = (void *)0;
  int32_t **l_15 = &l_16;
  int16_t *l_17 = &g_18[2][0];
  int16_t *l_19 = &g_20;
  int64_t l_35 = 0xCE005AB1361131E3LL;
  int32_t l_36[4][4];
  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++)
      l_36[i][j] = 0x62C80F3BL;
  }
  (*l_3) = g_2;
  g_37 &= (safe_lshift_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((*l_3), (l_36[0][2] = ((~func_10(l_3, g_4, (g_29 = ((0xA7L < (((*l_19) = ((*l_17) |= (g_14, (((*l_15) = l_3) != &g_4)))) | (safe_rshift_func_int64_t_s_u(((safe_mod_func_uint8_t_u_u((g_4 || (safe_mul_func_int16_t_s_s((((((-3L) || (-7L)), g_27) != &l_3) <= g_2), 0x95DBL))), g_2)), 0xC87778E10A3BDF78LL), 1)))) != g_2)))) | l_35)))) || 0xDEB2L), g_2));
  return (*l_16);
}

static int16_t func_10(int32_t *p_11, int32_t p_12, uint64_t p_13) {
  volatile struct S0 *l_33 = &g_32;
  int32_t l_34 = 0xE45DB0FFL;
  (*g_30) &= (*p_11);
  (*l_33) = g_32;
  return l_34;
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
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
  transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
