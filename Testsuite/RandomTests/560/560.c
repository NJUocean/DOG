// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 7L;
static int32_t g_20 = (-1L);
static uint8_t g_21 = 253UL;
static int32_t g_23 = 0L;
static uint32_t g_45 = 0UL;
static int16_t g_48 = 0x54C6L;
static uint32_t g_52 = 0x039A2479L;
static int32_t **volatile g_65 = (void *)0;
static int32_t *g_67 = (void *)0;
static int32_t g_69[4] = {0L, 0L, 0L, 0L};

static int8_t func_1(void);
static const uint32_t func_7(uint8_t p_8, int64_t p_9, int16_t p_10);

static int8_t func_1(void) {
  int8_t l_2[5];
  int32_t l_24[1][2];
  int i, j;
  for (i = 0; i < 5; i++)
    l_2[i] = 0xEAL;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_24[i][j] = 0x35900B08L;
  }
  for (g_3 = 1; (g_3 <= 4); g_3 += 1) {
    int32_t *l_19 = &g_20;
    int32_t *l_22 = &g_23;
    int32_t *l_68 = &g_69[3];
    int i;
    (*l_68) &= (safe_mul_func_uint64_t_u_u((+func_7(((l_2[g_3] & (safe_mul_func_uint64_t_u_u(l_2[g_3], l_2[g_3]))) <= ((l_2[0] || g_3) ^ (safe_mod_func_int32_t_s_s((((l_2[g_3] > ((safe_div_func_uint8_t_u_u((0xA55F07C7L >= (l_24[0][0] &= ((((*l_22) = (g_21 &= ((safe_sub_func_int64_t_s_s((l_2[1] >= ((((*l_19) = ((g_3 <= l_2[g_3]) | g_3)) != (-3L)) >= 0xEC58L)), g_3)) | g_3))) | 1L), l_2[4]))), g_3)) <= 9L)) < 0x6AL) ^ 252UL), g_3)))), g_3, g_3)), g_3));
    if (l_24[0][0])
      continue;
  }
  return l_24[0][0];
}

static const uint32_t func_7(uint8_t p_8, int64_t p_9, int16_t p_10) {
  uint8_t *l_32 = &g_21;
  uint32_t *l_44 = &g_45;
  int32_t l_46 = 0L;
  int16_t *l_47 = &g_48;
  int32_t l_49 = 7L;
  if ((safe_unary_minus_func_int32_t_s(((safe_div_func_int16_t_s_s((((((safe_div_func_uint64_t_u_u(g_23, ((safe_sub_func_uint64_t_u_u(0xC7DF39F3C5A4A104LL, (((*l_32) = 255UL) != ((((safe_mul_func_int16_t_s_s(((18446744073709551615UL || g_20), (safe_add_func_int32_t_s_s(g_20, (safe_mul_func_int32_t_s_s((p_10 ^ (((*l_47) = ((((safe_rshift_func_uint32_t_u_u((l_46 ^= ((*l_44) = (((safe_mul_func_int8_t_s_s(p_8, ((~(3UL > g_20)), 0x92L))), p_8) || p_10))), 7)) || g_3) > p_10) && (-1L))) <= p_8)), l_49))))), l_49)) != p_9) && g_20) < 0xDC0AL)))) | p_9))) >= p_10) <= g_23) && 0x340421A16747B1D0LL), g_48), l_49)), 0xD97C2923L)))) {
    int32_t *l_50 = &l_49;
    int32_t *l_51[5];
    int16_t *l_59 = &g_48;
    int i;
    for (i = 0; i < 5; i++)
      l_51[i] = &l_49;
    ++g_52;
    (*l_50) = ((safe_rshift_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((&g_21 == ((l_59 == (void *)0), &p_8)), ((&g_21 != (g_48, &g_21)) & ((g_52 | ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(p_9, 2)), 15)) < g_23)), g_21)))), l_49)) == 0x57L);
  } else {
    int32_t *l_64[4] = {&l_46, &l_46, &l_46, &l_46};
    int32_t **l_66[2];
    int i;
    for (i = 0; i < 2; i++)
      l_66[i] = &l_64[1];
    g_67 = l_64[0];
  }
  return l_46;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_69[i], "g_69[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
