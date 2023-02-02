// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0x7A7C2039L;
static volatile int64_t g_6 = 0x4EB4C8F0D0714AD3LL;
static volatile int32_t g_7 = 0xC80FC3A0L;
static int8_t g_8[3] = {(-1L), (-1L), (-1L)};
static volatile int16_t g_10[2][1][2] = {{{0xB4F5L, 0xB4F5L}}, {{0xB4F5L, 0xB4F5L}}};
static int16_t g_11 = (-9L);
static volatile int16_t g_12 = 0x4D07L;
static uint32_t g_13 = 0xC2E3A4C6L;
static int32_t *g_36[3] = {(void *)0, (void *)0, (void *)0};
static int32_t g_40 = (-7L);
static int64_t g_42 = (-7L);

static const uint16_t func_1(void);
static int32_t *const func_16(int32_t p_17);

static const uint16_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5[2][3];
  int32_t l_9 = 1L;
  int32_t **l_35 = &l_5[0][2];
  uint32_t *l_37 = (void *)0;
  uint32_t *l_38 = &g_13;
  int16_t *l_39 = &g_11;
  int64_t *l_41 = &g_42;
  int32_t **l_44 = &l_5[0][2];
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++)
      l_5[i][j] = &g_3;
  }
  --g_13;
  (*l_44) = func_16((safe_div_func_uint16_t_u_u((((*l_41) = ((safe_rshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s((g_40 = (safe_sub_func_int32_t_s_s((((~(safe_lshift_func_uint32_t_u_s(g_12, (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((0L >= (*l_2)) | ((*l_38) = ((((*l_35) = &g_3) != (g_36[1] = l_4)) >= g_13))), 13)), ((*l_39) &= ((void *)0 != &g_3))))))), 0xC2C6F7398071081BLL) | (*l_4)), 3UL))), g_3)) | 0xACA8B146L), 13)) == (*l_4))) | 0x0EB6BA8A7E8B7DD1LL), 65535UL)));
  return (*l_4);
}

static int32_t *const func_16(int32_t p_17) {
  int32_t *const l_43 = (void *)0;
  return l_43;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_8[i], "g_8[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_10[i][j][k], "g_10[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
