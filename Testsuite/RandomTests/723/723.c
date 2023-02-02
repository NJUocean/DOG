// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[5] = {0x35568345L, 0x35568345L, 0x35568345L, 0x35568345L, 0x35568345L};
static volatile int32_t g_3 = 0x606DE713L;
static int32_t g_4 = 0x3EB905D0L;
static int32_t g_46[2] = {5L, 5L};
static int32_t g_49 = 0x1BE33BD0L;
static int32_t g_51 = 1L;

static uint16_t func_1(void);
static int32_t func_7(uint32_t p_8, uint8_t p_9, int8_t p_10, int16_t p_11, uint16_t p_12);

static uint16_t func_1(void) {
  int32_t l_31 = (-9L);
  volatile int32_t *l_53 = &g_3;
  volatile int32_t **l_52 = &l_53;
  for (g_4 = 12; (g_4 <= (-16)); --g_4) {
    uint16_t l_13 = 0x2513L;
    uint32_t l_32 = 0UL;
    int32_t *l_50 = &g_51;
    (*l_50) ^= func_7(((l_13 < (((l_13 ^ 0xA07563FFAF072071LL) | (safe_mod_func_int32_t_s_s((-9L), (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(g_2[0], g_4)) < (safe_mod_func_uint32_t_u_u((g_4 < (safe_mod_func_uint32_t_u_u(((-1L) & (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((((safe_mul_func_int64_t_s_s((l_13 >= 0x072C02A3L), l_31)) == l_13) & g_4))), g_4))), l_31))), 0x4C7BA3F3L))), 0)) & 0x77D6446BD29A2A67LL), l_32)), g_4), l_31)))), l_13)), g_4), l_13, g_4, l_31, g_4);
    if (g_3)
      continue;
  }
  (*l_52) = &g_3;
  return (**l_52);
}

static int32_t func_7(uint32_t p_8, uint8_t p_9, int8_t p_10, int16_t p_11, uint16_t p_12) {
  uint8_t l_38[4];
  int32_t *l_45[4][2] = {{&g_46[0], &g_46[0]}, {&g_46[0], &g_46[0]}, {&g_46[0], &g_46[0]}, {&g_46[0], &g_46[0]}};
  int32_t l_47 = 0xD11E8E10L;
  int32_t *l_48 = &g_49;
  int i, j;
  for (i = 0; i < 4; i++)
    l_38[i] = 0xD5L;
  (*l_48) ^= ((((((+((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((((l_38[2], g_3) | p_8) == (((safe_add_func_int8_t_s_s(1L, ((l_47 |= (safe_mod_func_int64_t_s_s((l_38[2] || (g_4 != (safe_div_func_uint64_t_u_u((p_12 != l_38[3]), l_38[1])))), g_4))), 0UL))) || 0x65E139A5L) != g_46[0])) == 0xC1F4B9EFECF47A0CLL), 0x4406997BL)), (-7L))) & 0x8B75L)) || 0x0C8C580B0B8B0E31LL), p_9), (-1L)) & g_46[1]), l_47);
  return p_11;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_46[i], "g_46[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
