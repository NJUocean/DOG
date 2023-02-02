// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  volatile uint32_t f0;
  const uint16_t f1;
  uint32_t f2;
  volatile int8_t f3;
  int16_t f4;
};

union U3 {
  int32_t f0;
  volatile uint32_t f1;
  uint64_t f2;
};

union U5 {
  const uint32_t f0;
  int32_t f1;
};

static uint32_t g_8[2][3] = {{0x42170591L, 0x42170591L, 0x42170591L}, {0x21324561L, 0x21324561L, 0x21324561L}};
static union U5 g_9 = {0UL};
static int32_t g_11[1] = {0x303F0244L};
static volatile union U1 *volatile g_18 = (void *)0;
static volatile union U1 *volatile *volatile g_19 = &g_18;
static int16_t g_25 = 0x4D91L;
static int16_t g_31 = 4L;
static int16_t *g_30 = &g_31;
static int32_t g_35 = 0x52DD8607L;
static uint64_t g_38 = 0x5752783DE769035ALL;
static uint64_t g_74 = 18446744073709551615UL;
static int32_t *volatile g_75 = &g_11[0];
static const int32_t *g_80 = &g_35;
static const int32_t **volatile g_79 = &g_80;
static union U3 g_81 = {0xF04E4CABL};
static union U3 g_83 = {-10L};
static union U3 g_87 = {3L};

static union U3 func_1(void);
static uint8_t func_4(int64_t p_5, uint8_t p_6, union U5 p_7);

static union U3 func_1(void) {
  int16_t *l_24 = &g_25;
  int16_t **l_32 = &g_30;
  int32_t l_33 = (-1L);
  int32_t *l_34 = &g_35;
  int32_t *l_36 = &l_33;
  int32_t l_37 = 0x09020024L;
  const uint32_t l_73[5][2] = {{0x03BA2937L, 0x153D5795L}, {5UL, 5UL}, {5UL, 0x153D5795L}, {0x03BA2937L, 0UL}, {0x153D5795L, 0UL}};
  int i, j;
  if ((g_38 |= (safe_rshift_func_uint8_t_u_s(func_4(g_8[0][0], g_8[1][2], g_9), (((!(((*l_36) = ((*l_34) |= ((safe_div_func_int16_t_s_s(((*l_24) = ((g_11[0] < (+0x9DC86695L)), g_8[1][0])), (safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(0xCBBBL, ((((*l_32) = g_30) == &g_31) < l_33))), g_11[0])))) || g_8[0][0]))) >= (-1L))) || (-6L)), l_37))))) {
    int32_t l_71 = (-1L);
    uint16_t *l_72[2][4];
    int i, j;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 4; j++)
        l_72[i][j] = (void *)0;
    }
    (*g_75) = ((*l_36) = (safe_mul_func_int8_t_s_s(
                   (safe_rshift_func_int8_t_s_s(g_9.f0, (safe_rshift_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((7UL != (safe_add_func_int16_t_s_s(((safe_mul_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_int64_t_s_s(g_38, (safe_mul_func_uint64_t_u_u(g_31, ((((+((safe_lshift_func_uint32_t_u_u((safe_lshift_func_int32_t_s_u((&l_33 != &l_33), 22)), 7)) != ((*l_34) &= (~(safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((0xCEL >= ((g_38 | (safe_div_func_uint8_t_u_u((safe_rshift_func_uint32_t_u_s((((((*l_24) = ((g_9.f0 ^ 0xF9L) && l_71)) && 0L) && g_8[0][0]) && g_9.f0), 13)), l_71))) & (*l_36))), 0xBAL)), 0)))))) > l_73[3][0]) || 2L) < 0L))))) != 0xCEL), 0x6CA2L)), g_11[0])) || g_74), (*l_36)))) != g_11[0]) ^ 0xFD08915CC6C9DB45LL) != 0x77D8L), g_31)), 57)))), g_38)));
  } else {
    int64_t l_86 = (-1L);
    for (g_35 = (-8); (g_35 >= (-17)); g_35 = safe_sub_func_uint8_t_u_u(g_35, 4)) {
      int32_t l_82 = 0xC86D9E1BL;
      if ((*g_75)) {
        const int32_t *l_78 = (void *)0;
        (*g_79) = l_78;
        return g_81;
      } else {
        l_82 |= (*g_80);
        return g_83;
      }
    }
    (*l_36) = (safe_rshift_func_int64_t_s_s(l_86, 40));
  }
  return g_87;
}

static uint8_t func_4(int64_t p_5, uint8_t p_6, union U5 p_7) {
  int32_t *l_10 = &g_11[0];
  l_10 = l_10;
  for (p_5 = 23; (p_5 > 7); --p_5) {
    for (p_6 = (-5); (p_6 >= 19); ++p_6) {
      for (p_7.f1 = 0; (p_7.f1 != (-4)); --p_7.f1) {
        (*g_19) = g_18;
      }
    }
  }
  return (*l_10);
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_74, "g_74", print_hash_value);
  transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
  transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
  transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
