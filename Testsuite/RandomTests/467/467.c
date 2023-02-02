// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0xCFF0EA75L;
static int32_t g_3 = 0L;
static uint32_t g_15 = 0UL;
static uint32_t g_38 = 1UL;
static int32_t g_40 = 0L;
static uint32_t g_63[2][2] = {{0x8F98093AL, 0x8F98093AL}, {0x8F98093AL, 0x8F98093AL}};
static uint32_t *volatile g_62[4][2] = {{(void *)0, (void *)0}, {&g_63[1][0], (void *)0}, {(void *)0, &g_63[1][0]}, {(void *)0, (void *)0}};
static int32_t g_72 = (-3L);

static int64_t func_1(void);
static uint32_t *func_33(uint32_t *p_34, uint32_t p_35, uint32_t *p_36);

static int64_t func_1(void) {
  int16_t l_21 = 9L;
  uint16_t l_32 = 0x2E80L;
  uint32_t *l_37 = &g_38;
  for (g_3 = 0; (g_3 != (-12)); --g_3) {
    uint32_t *l_13 = (void *)0;
    uint32_t *l_14[5] = {&g_15, &g_15, &g_15, &g_15, &g_15};
    int32_t l_18[5] = {0xE56890C5L, 0xE56890C5L, 0xE56890C5L, 0xE56890C5L, 0xE56890C5L};
    uint32_t **l_67 = &l_13;
    int32_t *l_68 = &g_40;
    uint32_t *l_69 = &g_63[1][0];
    int32_t l_70[2][2][5] = {{{0xB05D0942L, 0xB05D0942L, 0xB05D0942L, 0xB05D0942L, 0xB05D0942L}, {0xC2888A0EL, 0xC1F20CF6L, 0xC2888A0EL, 0xC1F20CF6L, 0xC2888A0EL}}, {{0xB05D0942L, 0xB05D0942L, 0xB05D0942L, 0xB05D0942L, 0xB05D0942L}, {0xC2888A0EL, 0xC1F20CF6L, 0xC2888A0EL, 0xC1F20CF6L, 0xC2888A0EL}}};
    int32_t *l_71 = &g_72;
    int i, j, k;
    (*l_71) |= (((((safe_mul_func_int64_t_s_s((safe_unary_minus_func_int16_t_s((!(safe_unary_minus_func_uint16_t_u(((safe_mul_func_int16_t_s_s((((++g_15) && l_18[0]), (safe_mod_func_int8_t_s_s(l_21, l_18[3]))), (safe_lshift_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((l_18[0] > (((4294967295UL & ((*l_68) = ((safe_sub_func_uint64_t_u_u(((l_21 && (safe_sub_func_uint16_t_u_u(((g_3 == l_32), (((*l_67) = func_33(l_37, g_2, l_14[4])) == &g_63[1][0])), l_18[0]))) | l_18[3]), g_3)), 0x99CF48B0L))), l_69) == &g_63[0][0])), l_70[1][1][4]), g_38)), 6)))) <= 0xF1A9F139888327BCLL)))))), g_63[1][0])) <= (-1L)) != 0x13C53D17L), (*l_68)) || l_32);
  }
  return g_38;
}

static uint32_t *func_33(uint32_t *p_34, uint32_t p_35, uint32_t *p_36) {
  int32_t *l_39 = &g_40;
  int16_t l_65 = (-8L);
lbl_43:
  (*l_39) ^= p_35;
  for (g_40 = 0; (g_40 < (-18)); g_40 = safe_sub_func_uint32_t_u_u(g_40, 5)) {
    if (p_35)
      goto lbl_43;
    for (p_35 = 12; (p_35 > 58); p_35 = safe_add_func_uint16_t_u_u(p_35, 4)) {
      int8_t l_58[5] = {0x20L, 0x20L, 0x20L, 0x20L, 0x20L};
      int32_t l_64 = 0x9CE85662L;
      int32_t **l_66 = &l_39;
      int i;
    }
  }
  return &g_63[0][1];
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_63[i][j], "g_63[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_72, "g_72", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
