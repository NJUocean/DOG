// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile int64_t f0;
};
#pragma pack(pop)

static int64_t g_8 = 0x2FF40FC0272A7275LL;
static int32_t g_24 = 0xA0F0F5EBL;
static int32_t *g_23 = &g_24;
static int8_t g_27[4][3] = {{0L, 0L, 0L}, {0L, 0L, 0L}, {0L, 0L, 0L}, {0L, 0L, 0L}};
static struct S0 g_45 = {-4L};

static const int32_t func_1(void);
static struct S0 func_2(uint32_t p_3, int64_t p_4, uint16_t p_5, int32_t p_6, int32_t p_7);

static const int32_t func_1(void) {
  int32_t l_12 = 0L;
  int32_t *l_17[4];
  uint32_t l_18 = 4294967295UL;
  int32_t **l_25 = &g_23;
  int8_t *l_26 = &g_27[0][1];
  uint16_t l_28 = 0xCB44L;
  int i;
  for (i = 0; i < 4; i++)
    l_17[i] = &l_12;
  g_24 = (func_2((g_8 > (safe_unary_minus_func_int32_t_s((((safe_mod_func_int32_t_s_s(l_12, l_12)), (safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((l_18 = l_12), (~g_8)), ((*l_26) = (((((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u(g_8, ((((*l_25) = g_23) == &g_24) | g_8))))) | g_24) < 0UL) < 246UL) >= (-9L))))) ^ g_24), g_8))) <= 0x4E2BL)))), g_8, g_24, l_28, g_24), (*g_23));
  (*l_25) = &g_24;
  return (**l_25);
}

static struct S0 func_2(uint32_t p_3, int64_t p_4, uint16_t p_5, int32_t p_6, int32_t p_7) {
  int32_t *l_29 = &g_24;
  int32_t *l_30 = &g_24;
  int32_t *l_31 = (void *)0;
  int32_t *l_32 = &g_24;
  int32_t *l_33 = &g_24;
  int32_t *l_34 = &g_24;
  int32_t *l_35 = (void *)0;
  int32_t *l_36 = &g_24;
  int32_t *l_37 = &g_24;
  int32_t *l_38 = &g_24;
  int32_t l_39 = 0x73E70D28L;
  int32_t *l_40 = &l_39;
  int32_t *l_41[2][4][2];
  uint32_t l_42[3][5][4] = {{{1UL, 0UL, 0UL, 1UL}, {1UL, 3UL, 0xA56CF6D7L, 0x7DC46221L}, {4294967287UL, 4294967294UL, 1UL, 4294967295UL}, {5UL, 4294967286UL, 4294967293UL, 4294967295UL}, {0xB1ED3090L, 4294967294UL, 1UL, 0x7DC46221L}}, {{0x158E9D28L, 3UL, 4294967287UL, 1UL}, {4294967286UL, 0UL, 0x1E9426CEL, 0UL}, {4294967287UL, 0x4656E2E3L, 1UL, 0xA56CF6D7L}, {1UL, 4294967286UL, 0x92FB38A8L, 0x0268D9A6L}, {1UL, 5UL, 4294967295UL, 0x158E9D28L}}, {{1UL, 0xB1ED3090L, 0x92FB38A8L, 4294967295UL}, {0UL, 0x158E9D28L, 4294967294UL, 4294967295UL}, {4294967295UL, 4294967286UL, 0UL, 0UL}, {4294967287UL, 4294967287UL, 4294967295UL, 4294967294UL}, {1UL, 1UL, 4294967295UL, 0x92FB38A8L}}};
  int i, j, k;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 2; k++)
        l_41[i][j][k] = &g_24;
    }
  }
  l_42[0][0][3]--;
  return g_45;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_27[i][j], "g_27[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
