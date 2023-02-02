// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const unsigned f0 : 17;
};

static volatile uint16_t g_14 = 0UL;
static uint64_t g_21[4] = {0xBAE0FC36FE5AB06CLL, 0xBAE0FC36FE5AB06CLL, 0xBAE0FC36FE5AB06CLL, 0xBAE0FC36FE5AB06CLL};
static uint16_t g_35 = 65535UL;
static uint8_t g_40 = 0x39L;
static int8_t g_45 = 0x45L;
static int32_t g_51 = (-2L);
static uint64_t *g_54 = (void *)0;
static uint64_t g_56[3] = {0xC5AB2A44BF8E16D7LL, 0xC5AB2A44BF8E16D7LL, 0xC5AB2A44BF8E16D7LL};
static int16_t g_58 = (-1L);
static int32_t g_60[3][4] = {{0x165AAE70L, 0x2D45AB60L, 0x165AAE70L, 0x2D45AB60L}, {0x165AAE70L, 0x2D45AB60L, 0x165AAE70L, 0x2D45AB60L}, {0x165AAE70L, 0x2D45AB60L, 0x165AAE70L, 0x2D45AB60L}};

static int32_t func_1(void);
static int16_t func_4(struct S0 p_5);

static int32_t func_1(void) {
  struct S0 l_6 = {44};
  uint64_t *l_55 = &g_56[2];
  int16_t *l_57[3][2] = {{&g_58, &g_58}, {&g_58, &g_58}, {&g_58, &g_58}};
  int32_t *l_59 = &g_60[2][3];
  int i, j;
  (*l_59) ^= (((safe_div_func_uint16_t_u_u(1UL, func_4(l_6))) >= ((safe_mod_func_int8_t_s_s(g_35, g_35)) != (l_6.f0 | (g_58 |= ((g_54 != l_55) > g_56[2]))))) <= g_56[2]);
  return (*l_59);
}

static int16_t func_4(struct S0 p_5) {
  int32_t l_7 = 1L;
  uint16_t *l_34 = &g_35;
  if (l_7) {
    return l_7;
  } else {
    uint32_t l_29 = 0x71A6E483L;
    uint16_t *l_30 = (void *)0;
    uint16_t *l_31 = (void *)0;
    int32_t l_32[2];
    int64_t l_33 = 0L;
    uint16_t **l_36 = &l_34;
    uint16_t **l_37 = (void *)0;
    uint16_t **l_38 = &l_31;
    uint8_t *l_39 = &g_40;
    int64_t *l_43 = &l_33;
    int8_t *l_44 = &g_45;
    uint64_t *l_46 = &g_21[0];
    int8_t l_47 = (-1L);
    int32_t l_48[5][3] = {{(-1L), 0L, 0x42D63D2CL}, {9L, 0L, 9L}, {0xC076A5D0L, (-1L), 0x42D63D2CL}, {0xC076A5D0L, 0xC076A5D0L, (-1L)}, {9L, (-1L), (-1L)}};
    uint32_t *l_49 = &l_29;
    int32_t *l_50 = &g_51;
    int i, j;
    for (i = 0; i < 2; i++)
      l_32[i] = (-1L);
    (*l_50) &= (safe_sub_func_uint32_t_u_u(((*l_49) = (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint64_t_u_u(g_14, (((safe_mod_func_int64_t_s_s(((safe_add_func_int64_t_s_s((l_48[0][2] &= (((*l_46) = ((4294967291UL | (safe_rshift_func_uint64_t_u_s((g_21[2] > (safe_div_func_int8_t_s_s(((*l_44) = ((safe_mul_func_int32_t_s_s(((((p_5.f0 || (safe_mod_func_int32_t_s_s(((l_33 |= (l_32[1] |= (safe_unary_minus_func_uint16_t_u(l_29)))), ((((((*l_36) = l_34) == ((*l_38) = l_30)), p_5.f0) <= (((((*l_43) &= ((((--(*l_39)) && ((*l_39) = p_5.f0)), 1L) >= 0x971CF717L)) > p_5.f0) < 0x8AL) || g_35)) == (-1L))), 1L))) & l_7) == 0xCE9B8A51L) != g_21[0]), 0x58698962L)) >= p_5.f0)), (-2L)))), p_5.f0))) & p_5.f0)) | l_47)), g_35)) > 0x07DBC1552C25470ELL), g_35)) || g_40) > p_5.f0))), l_7)), p_5.f0) || 3UL)),
                                           p_5.f0));
  }
  return g_40;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_14, "g_14", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_21[i], "g_21[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_56[i], "g_56[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_58, "g_58", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_60[i][j], "g_60[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
