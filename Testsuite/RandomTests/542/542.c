// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[1] = {0L};
static volatile int32_t g_3 = 1L;
static volatile int32_t g_4 = 1L;
static volatile int32_t g_5[2] = {0xF5A9C4C8L, 0xF5A9C4C8L};
static int32_t g_6[2][5] = {{0L, 1L, 0L, 0L, 1L}, {1L, 0L, 0L, 1L, 0L}};
static int32_t g_9 = 0x7C1188E1L;
static uint16_t g_45 = 65535UL;
static uint16_t g_47[2] = {0UL, 0UL};
static int32_t g_53 = 0L;
static volatile int32_t g_62[1] = {(-1L)};
static uint64_t g_63 = 0x5996E2414C35F52DLL;

static uint32_t func_1(void);
static int32_t func_12(uint32_t p_13, int32_t p_14, uint32_t p_15, int8_t p_16, uint8_t p_17);

static uint32_t func_1(void) {
  const int8_t l_35 = 0x65L;
  int32_t l_66 = 1L;
  for (g_6[0][1] = 0; (g_6[0][1] != 17); g_6[0][1]++) {
    uint32_t l_42 = 7UL;
    uint16_t *const l_46[2][1] = {{&g_47[1]}, {&g_47[1]}};
    int i, j;
    for (g_9 = (-23); (g_9 < 18); g_9 = safe_add_func_int32_t_s_s(g_9, 1)) {
      uint64_t l_43 = 6UL;
      uint16_t *l_44 = &g_45;
      l_66 = func_12((safe_rshift_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(g_4, (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((~((((safe_div_func_uint64_t_u_u((l_35 < (safe_div_func_uint16_t_u_u((((((safe_sub_func_int16_t_s_s(((0UL <= (safe_lshift_func_int32_t_s_s(l_42, 5))) < (((*l_44) ^= l_43) || l_35)), (((void *)0 != l_46[1][0]) ^ ((((safe_rshift_func_int16_t_s_s((-1L), 8)) | g_9) > g_9) & l_42)))) >= 2UL), 18446744073709551608UL) <= g_9) != g_47[1]), l_43))), 7L)) >= 0x8BA79672L) <= l_35) > 2L)), (-5L)) == g_9), 1UL)), l_42)), g_6[0][1])))), 0x06A9BEBBL)) ^ g_9), l_43)) && (-8L)), g_47[0]) > 0x59L), l_43)), g_9, g_47[1], g_6[0][1], l_43);
      if (l_43)
        continue;
    }
  }
  return g_6[0][0];
}

static int32_t func_12(uint32_t p_13, int32_t p_14, uint32_t p_15, int8_t p_16, uint8_t p_17) {
  int32_t l_58 = 0x3B22489AL;
  int32_t l_59 = (-10L);
  int32_t l_60 = 8L;
  int32_t l_61[4][5] = {{0x56F59619L, 0x6EFE450DL, 0x7FFC8BABL, 1L, 0x7FFC8BABL}, {0x7FFC8BABL, 0x7FFC8BABL, (-1L), 1L, 0x0B5DAE8CL}, {0x6EFE450DL, 0x56F59619L, 0x56F59619L, 0x6EFE450DL, 0x7FFC8BABL}, {0x6EFE450DL, 1L, 0xBD1B8438L, 0xBD1B8438L, 1L}};
  int i, j;
  for (p_13 = 0; (p_13 <= 36); ++p_13) {
    int32_t *l_52 = &g_53;
    int32_t *l_54 = &g_53;
    int32_t *l_55 = &g_53;
    int32_t *l_56 = (void *)0;
    int32_t *l_57[1][3][5] = {{{&g_53, &g_53, &g_53, &g_53, &g_53}, {&g_53, (void *)0, &g_53, (void *)0, &g_53}, {&g_53, &g_53, &g_53, &g_53, &g_53}}};
    int i, j, k;
    g_63--;
  }
  return g_9;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_47[i], "g_47[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_53, "g_53", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_62[i], "g_62[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_63, "g_63", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
