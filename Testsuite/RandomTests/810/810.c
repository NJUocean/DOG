// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  const volatile uint64_t f0;
  uint32_t f1;
  const int8_t f2;
  volatile signed f3 : 3;
};

static volatile int32_t g_2 = 0x71C1EC2DL;
static volatile int32_t g_3 = 0L;
static int32_t g_4 = 9L;
static uint8_t g_31 = 0x8EL;
static int32_t g_34 = (-1L);
static int64_t g_37 = 0x2796A450C1979116LL;
static int64_t g_40 = 6L;
static int32_t g_42 = (-1L);
static int32_t g_43[2] = {0xA504A86DL, 0xA504A86DL};
static volatile int32_t g_44 = (-1L);
static volatile int32_t g_45 = (-3L);
static int32_t g_46 = 0L;
static volatile uint32_t g_47 = 0x7332E7A5L;
static int64_t *volatile g_51 = &g_40;
static int64_t *volatile *g_50 = &g_51;
static union U0 g_58 = {18446744073709551615UL};

static union U0 func_1(void);
static uint32_t func_9(int8_t p_10, int32_t p_11, int32_t *p_12);

static union U0 func_1(void) {
  int32_t *l_27 = (void *)0;
  int32_t l_35 = 9L;
  for (g_4 = 0; (g_4 >= (-21)); g_4 = safe_sub_func_uint64_t_u_u(g_4, 5)) {
    uint32_t l_18 = 0UL;
    int32_t *l_26[1][1][2];
    int32_t **l_25 = &l_26[0][0][0];
    uint8_t *l_30 = &g_31;
    int64_t *l_36 = &g_37;
    int64_t *l_38 = (void *)0;
    int64_t *l_39 = &g_40;
    volatile int32_t *l_54 = &g_2;
    volatile int32_t **l_53 = &l_54;
    int i, j, k;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 1; j++) {
        for (k = 0; k < 2; k++)
          l_26[i][j][k] = (void *)0;
      }
    }
    (*l_53) = ((safe_mod_func_int64_t_s_s((func_9(g_2, (((*l_39) = ((*l_36) = (!(safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((((l_18, ((safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((g_34 |= ((((safe_add_func_int32_t_s_s(0x3E19F23EL, ((((*l_25) = &g_4) != l_27), g_4))) != ((*l_30) = (safe_rshift_func_uint16_t_u_s(g_4, 13)))) & (safe_lshift_func_int16_t_s_s((((((&g_4 != (void *)0), g_4) < 7UL) || g_4), 0xE857L), g_4))), g_4)), 0xB8L)) >= g_4), g_4)) | g_4)), (void *)0) != (void *)0), g_4)), l_35))))), g_34), &g_4) ^ 4L), g_4)), &g_2);
    for (g_42 = 29; (g_42 < (-17)); --g_42) {
      const uint16_t l_57 = 65532UL;
      if (g_46)
        break;
      (*l_54) = l_57;
    }
  }
  return g_58;
}

static uint32_t func_9(int8_t p_10, int32_t p_11, int32_t *p_12) {
  int32_t *l_41[3][4][5] = {{{&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}}, {{&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}}, {{&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}}};
  int64_t *volatile *l_52 = &g_51;
  int i, j, k;
  g_47++;
  l_52 = g_50;
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
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_43[i], "g_43[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
