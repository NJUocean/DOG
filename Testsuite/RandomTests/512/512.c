// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 7L;
static volatile int32_t g_3 = 0L;
static int32_t g_4 = 8L;
static volatile int32_t g_7 = 0xFADF6285L;
static int32_t g_8 = 0x5B8B78ACL;
static int32_t g_13 = 1L;
static int32_t *volatile g_12[4][2][2] = {{{&g_13, &g_13}, {&g_13, &g_13}}, {{&g_13, &g_13}, {&g_13, &g_13}}, {{&g_13, &g_13}, {&g_13, &g_13}}, {{&g_13, &g_13}, {&g_13, &g_13}}};
static int32_t *volatile g_14 = (void *)0;
static int32_t *volatile g_15 = &g_13;
static uint32_t g_32[3][2] = {{0xE0512ED4L, 0xE0512ED4L}, {0xE0512ED4L, 0xE0512ED4L}, {0xE0512ED4L, 0xE0512ED4L}};
static uint32_t g_38 = 0xCF54CEAAL;
static int16_t g_49 = 0x8F30L;
static int32_t *volatile g_52 = &g_13;
static const int32_t *g_54 = (void *)0;
static const int32_t **g_53[2] = {&g_54, &g_54};
static const int32_t ***volatile g_57 = &g_53[0];

static uint32_t func_1(void);
static const int32_t **func_16(uint32_t p_17, uint8_t p_18, const int8_t p_19);

static uint32_t func_1(void) {
  uint32_t l_20[2];
  int32_t **const l_26 = (void *)0;
  int32_t l_58 = 0x06680214L;
  int i;
  for (i = 0; i < 2; i++)
    l_20[i] = 0x462CCD20L;
  for (g_4 = (-28); (g_4 == 10); g_4 = safe_add_func_int16_t_s_s(g_4, 1)) {
    int64_t l_21 = 0x712C51978E60D743LL;
    const int32_t ***l_55 = (void *)0;
    const int32_t ***l_56 = (void *)0;
    for (g_8 = 0; (g_8 != (-22)); g_8--) {
      int32_t l_11 = 0xC6D21CD4L;
      (*g_15) = l_11;
    }
    (*g_57) = func_16(l_20[1], (((0xCC5CL || ((l_21 != l_20[1]), ((g_8 & ((l_20[1] == (g_8 <= ((safe_add_func_uint32_t_u_u(l_21, (((l_20[1] & 1L), l_26) == &g_14))) < g_7))) == g_4)) && g_13))) <= g_4) > g_4), l_21);
  }
  return l_58;
}

static const int32_t **func_16(uint32_t p_17, uint8_t p_18, const int8_t p_19) {
  int32_t *l_29 = (void *)0;
  uint32_t *l_37[1];
  int32_t l_39 = 1L;
  int16_t *l_48 = &g_49;
  int32_t *l_50 = &l_39;
  int32_t *l_51 = (void *)0;
  int i;
  for (i = 0; i < 1; i++)
    l_37[i] = &g_38;
  (*l_50) ^= (safe_mod_func_int16_t_s_s(((l_29 == l_29) >= ((*g_15) = 0L)), (((safe_rshift_func_int64_t_s_s(((((*l_48) &= ((((g_32[0][1] = g_4), g_32[2][0]) | ((safe_rshift_func_uint64_t_u_s((safe_lshift_func_uint32_t_u_u((p_17++), 19)), 33)) == ((safe_add_func_int64_t_s_s(8L, (((g_8 > p_18) | (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(((0xD55FAF230988A21DLL >= 0x74357240E60136B8LL), p_19), 2)), p_19))) == g_38))) >= g_38))), 0x9032L)) >= 0x42FCL) <= 0x8456A9E5FAF1BECDLL), 24)) <= p_19), p_19)));
  (*g_52) ^= ((*l_50) = 1L);
  return g_53[0];
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
