// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  int64_t f0;
  signed f1 : 1;
  const volatile unsigned f2 : 20;
};

static int32_t g_2 = 2L;
static uint32_t g_12[4] = {0x8AE505B0L, 0x8AE505B0L, 0x8AE505B0L, 0x8AE505B0L};
static int64_t g_28 = 0xA71A6E483BBB66EFLL;
static uint32_t *g_53[5] = {&g_12[3], &g_12[3], &g_12[3], &g_12[3], &g_12[3]};
static int64_t *g_57 = &g_28;
static int64_t **g_56[2][3] = {{&g_57, &g_57, &g_57}, {&g_57, &g_57, &g_57}};
static int64_t **g_61 = &g_57;
static int64_t ***const volatile g_60 = &g_61;
static int32_t *const volatile g_62 = (void *)0;
static int32_t *volatile g_63 = (void *)0;
static int32_t g_65 = 0L;
static int32_t *volatile g_64 = &g_65;
static struct S1 g_66 = {0x0BF3FD26F361030FLL, -0, 655};

static struct S1 func_1(void);
static int32_t func_5(int8_t p_6, uint64_t p_7, uint16_t p_8);

static struct S1 func_1(void) {
  uint64_t l_13[5];
  int32_t l_35 = 9L;
  int64_t l_36 = 0xB66C146DF8000858LL;
  int i;
  for (i = 0; i < 5; i++)
    l_13[i] = 0xC7104272BA75A592LL;
  for (g_2 = 0; (g_2 < (-9)); g_2 = safe_sub_func_int8_t_s_s(g_2, 7)) {
    uint32_t *l_11[1];
    int32_t l_20 = 0xC0E2632CL;
    int64_t *l_27[2][3] = {{&g_28, &g_28, &g_28}, {(void *)0, (void *)0, (void *)0}};
    int i, j;
    for (i = 0; i < 1; i++)
      l_11[i] = &g_12[3];
    (*g_64) = func_5((4294967287UL > ((safe_sub_func_int64_t_s_s(((++l_13[1]) > ((safe_lshift_func_int64_t_s_s((safe_add_func_int64_t_s_s((l_20 ^ 2L), (safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(2UL, (((g_28 |= g_12[3]) <= ((safe_mul_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(g_12[3], ((safe_lshift_func_uint32_t_u_s(((g_12[1] < 0x14BA09A164E62B50LL) & (g_12[3] >= g_12[3])), l_20)), l_35))) & l_20), 0x426232C2L)), 2UL)) < g_12[3]))), g_2) || g_2), l_35)) | g_2), l_35)))), l_35)) & l_36)), 0xF09457720F84B0F4LL)) && 4UL)), l_20, l_35);
  }
  return g_66;
}

static int32_t func_5(int8_t p_6, uint64_t p_7, uint16_t p_8) {
  int16_t l_42 = (-1L);
  uint32_t *l_51 = &g_12[3];
  uint32_t **l_52[1][1][3];
  int64_t ***l_58 = (void *)0;
  int64_t ***l_59 = &g_56[1][0];
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++)
        l_52[i][j][k] = &l_51;
    }
  }
  (*g_60) = ((*l_59) = (((!((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_8 >= (l_42 != (safe_div_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int64_t_s_s((-1L), ((((safe_rshift_func_int8_t_s_s(l_42, 6)), &g_12[0]) != (g_53[3] = l_51)) < l_42))), (safe_sub_func_int64_t_s_s((l_42 && (&g_28 != &g_28)), l_42)))) ^ p_6) && g_2), p_6)))), p_8)), p_7)) && g_12[3])) != p_7), g_56[1][2]));
  return g_2;
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
  for (i = 0; i < 4; i++) {
    transparent_crc(g_12[i], "g_12[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_65, "g_65", print_hash_value);
  transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
  transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
  transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
