// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  uint64_t f0;
  int64_t f1;
};

union U2 {
  int64_t f0;
  int32_t f1;
};

static int32_t g_2 = 0L;
static int32_t g_5 = 0xD94B4B13L;
static int64_t g_26 = 0x7FC0336AE3D4752ELL;
static uint64_t g_30 = 0xCFF29C214F163671LL;
static int64_t g_31 = 0xDF39F3C5A4A104ACLL;
static uint32_t g_33 = 4UL;
static int16_t g_44 = 0x1DC0L;
static union U2 g_52[4] = {{0x8C0E5C5CC99CF48BLL}, {0x8C0E5C5CC99CF48BLL}, {0x8C0E5C5CC99CF48BLL}, {0x8C0E5C5CC99CF48BLL}};
static uint8_t g_65 = 1UL;

static uint64_t func_1(void);
static const union U1 func_8(int64_t p_9, uint64_t p_10, uint32_t p_11, uint32_t p_12, uint16_t p_13);

static uint64_t func_1(void) {
  const int32_t *l_14 = &g_2;
  uint16_t l_45 = 65535UL;
  int32_t l_62 = 0xC4638B1AL;
  for (g_2 = 0; (g_2 <= (-15)); g_2 = safe_sub_func_int8_t_s_s(g_2, 9)) {
    int8_t l_24 = 6L;
    int32_t *l_28 = &g_2;
    int32_t **l_27 = &l_28;
    for (g_5 = (-22); (g_5 <= 19); g_5 = safe_add_func_uint32_t_u_u(g_5, 1)) {
      int32_t *l_16 = (void *)0;
      int32_t **l_15 = &l_16;
      int64_t *l_25 = &g_26;
      uint64_t *l_29[3];
      uint32_t *l_32 = &g_33;
      int i;
      for (i = 0; i < 3; i++)
        l_29[i] = &g_30;
      (*l_15) = (func_8(g_2, (l_14 != &g_5), ((*l_32) |= ((((*l_14) & (((*l_15) = &g_5) != ((safe_mod_func_uint64_t_u_u((((((safe_lshift_func_int16_t_s_s(g_5, ((((safe_lshift_func_uint64_t_u_u((g_30 = (!(&l_14 != (((*l_25) ^= ((0x4FD52280335900B0LL != l_24) < (-10L))), l_27)))), (*l_14))) && 0x36L), g_31) && 0x4F6CL))) >= (**l_27)) && g_31) >= g_31), 3UL), g_31)), (*l_27)))) | g_2) > g_2)), g_5, g_2), (void *)0);
    }
  }
  if (((*l_14) ^ 0L)) {
    int32_t *l_41 = &g_5;
    int32_t *l_42 = &g_5;
    int32_t *l_43[2][2][2] = {{{&g_2, &g_2}, {&g_2, &g_2}}, {{&g_2, &g_2}, {&g_2, &g_2}}};
    int i, j, k;
    l_45--;
    (*l_42) &= (safe_sub_func_int32_t_s_s((-1L), (safe_mod_func_uint32_t_u_u(0x747B1D00L, (*l_14)))));
  } else {
    int64_t l_63 = 0x9F5B60AA07078C3FLL;
    uint8_t *l_64 = &g_65;
    for (g_33 = 0; (g_33 <= 3); g_33 += 1) {
      return g_31;
    }
    l_62 = (((g_2 ^ (((((*l_64) ^= (safe_unary_minus_func_int8_t_s((safe_mod_func_int64_t_s_s(0L, (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((g_44, (1L | g_26)) | (g_33 > (safe_sub_func_uint16_t_u_u(1UL, l_62)))) < (l_63, 18446744073709551612UL)), g_44)), 0x81C3L))))))) != (*l_14)) < 0x99L) >= 0xA5L)) | g_31) >= (-8L));
  }
  return (*l_14);
}

static const union U1 func_8(int64_t p_9, uint64_t p_10, uint32_t p_11, uint32_t p_12, uint16_t p_13) {
  uint64_t l_37 = 6UL;
  const union U1 l_40 = {0UL};
  for (p_11 = (-13); (p_11 > 58); p_11 = safe_add_func_int16_t_s_s(p_11, 3)) {
    int32_t *l_36 = (void *)0;
    --l_37;
  }
  return l_40;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_52[i].f0, "g_52[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_65, "g_65", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
