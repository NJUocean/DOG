// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0L;
static volatile int32_t g_5[3][3] = {{7L, 7L, 7L}, {(-1L), 0x6318D581L, (-1L)}, {7L, 7L, 7L}};
static volatile int32_t g_6 = 0L;
static int32_t g_7[3] = {0x5DE05DAEL, 0x5DE05DAEL, 0x5DE05DAEL};
static int32_t g_10 = 2L;
static int32_t g_39 = 0x1FB8EB5EL;
static int32_t *g_38 = &g_39;
static uint16_t g_43 = 2UL;
static volatile uint32_t g_46 = 4294967289UL;
static uint16_t g_80[3][2] = {{0UL, 0UL}, {0UL, 0UL}, {0UL, 0UL}};
static int32_t *volatile g_83 = (void *)0;

static uint16_t func_1(void);
static int32_t *func_13(int32_t *p_14, int8_t p_15, int32_t p_16, int32_t *p_17, uint32_t p_18);

static uint16_t func_1(void) {
  int32_t l_30 = 0x6A7609FAL;
  for (g_2 = 11; (g_2 == (-5)); --g_2) {
    int16_t l_44[5] = {0x3BE4L, 0x3BE4L, 0x3BE4L, 0x3BE4L, 0x3BE4L};
    int16_t l_81[5];
    int i;
    for (i = 0; i < 5; i++)
      l_81[i] = 0x974AL;
    for (g_7[0] = 26; (g_7[0] >= (-18)); g_7[0] = safe_sub_func_int8_t_s_s(g_7[0], 3)) {
      int32_t *l_37 = (void *)0;
      int32_t *l_40 = &g_2;
      for (g_10 = 0; (g_10 > 7); g_10++) {
        uint32_t l_21 = 0UL;
        int32_t **l_41 = &l_40;
        uint16_t *l_42 = &g_43;
        (*l_41) = func_13(&g_7[0], (l_21 ^= (safe_mod_func_uint8_t_u_u(g_5[2][1], 1UL))), (safe_lshift_func_uint16_t_u_s(((*l_42) = (((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(l_30, g_10)), (safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((g_2 ^ ((safe_mul_func_int8_t_s_s(((g_38 = l_37) != ((*l_41) = l_40)), g_7[2])), 0x2BL)) || 0xF8L), g_7[0])), 1L)))) | g_7[0]), g_7[0])) >= (-1L)), g_10)), g_7[1])), &g_39, l_44[3]);
      }
    }
    for (g_43 = 1; (g_43 < 57); g_43++) {
      uint16_t *l_79 = &g_80[0][1];
      const int32_t l_82 = (-8L);
      int32_t *l_84[1];
      int i;
      for (i = 0; i < 1; i++)
        l_84[i] = &g_7[1];
      g_5[0][1] = (safe_sub_func_int16_t_s_s(((((g_39 < (safe_rshift_func_int32_t_s_s((((l_30, 3L) < (safe_div_func_uint8_t_u_u(246UL, (6L && (~(safe_add_func_int64_t_s_s((safe_lshift_func_int32_t_s_u((safe_sub_func_int32_t_s_s((g_10 <= (safe_mod_func_uint64_t_u_u((safe_lshift_func_int32_t_s_u((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int64_t_s_u((g_7[0], (safe_add_func_uint16_t_u_u(0x6675L, ((*l_79) |= 7UL)))), g_43)), g_5[0][1])), 0x7F86L)), 20)), 0x2876425F51048848LL))), g_7[0])), 13)), l_44[3]))))))) < g_7[0]), l_44[3]))) || g_7[1]) ^ l_81[3]) >= l_81[3]), l_82));
    }
  }
  return l_30;
}

static int32_t *func_13(int32_t *p_14, int8_t p_15, int32_t p_16, int32_t *p_17, uint32_t p_18) {
  int32_t *l_45[3];
  uint16_t l_49 = 65526UL;
  int i;
  for (i = 0; i < 3; i++)
    l_45[i] = &g_39;
  --g_46;
  l_49--;
  return l_45[0];
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
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_43, "g_43", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_80[i][j], "g_80[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
