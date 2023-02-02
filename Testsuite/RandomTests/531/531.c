// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint64_t f0;
  int32_t f1;
};

static uint16_t g_5 = 0xE126L;
static volatile union U0 g_14 = {18446744073709551611UL};
static int32_t g_24 = 0x5AD058BBL;
static int16_t g_35 = (-4L);
static int32_t *g_41 = (void *)0;
static int32_t **volatile g_40 = &g_41;
static int32_t g_45 = 0L;
static uint8_t g_47[1][1][3] = {{{0xC0L, 0xC0L, 0xC0L}}};
static uint8_t g_66 = 0xC8L;
static int32_t *volatile g_67 = &g_24;

static uint32_t func_1(void);
static int32_t func_2(int32_t p_3, int16_t p_4);

static uint32_t func_1(void) {
  int64_t l_26 = (-1L);
  int32_t l_38 = 0xF58A4122L;
  uint8_t l_68 = 252UL;
  l_26 = func_2(g_5, g_5);
  if ((18446744073709551615UL || (~((((~(safe_rshift_func_uint8_t_u_u(((0x8DE9L == ((safe_sub_func_uint32_t_u_u(l_26, ((((safe_mul_func_int32_t_s_s(0x7FF51885L, ((g_35 ^= l_26) <= (&g_24 != (void *)0)))) != (safe_rshift_func_uint8_t_u_u(g_14.f0, l_26))) <= 0UL) > (-1L)))) & g_5)) | 5UL), 6))) & 0x39L) >= l_38) & g_24)))) {
    int32_t *l_39 = &g_24;
    (*g_40) = l_39;
  } else {
    int32_t l_46 = 1L;
    union U0 l_58 = {18446744073709551615UL};
    uint8_t *l_65 = &g_66;
    for (g_24 = 0; (g_24 > (-1)); --g_24) {
      int32_t *l_44 = &g_45;
      (*l_44) = l_26;
      if (l_46) {
        return (*l_44);
      } else {
        l_44 = (*g_40);
      }
    }
    (*g_67) |= (((g_47[0][0][2]--) < ((((((((0xC2L && (safe_div_func_uint8_t_u_u((((*l_65) |= ((((safe_rshift_func_int8_t_s_u((l_26 || l_46), 2)) ^ (safe_mul_func_uint32_t_u_u(0x3122E3BDL, 0xBDF5444FL))) >= (safe_mul_func_int32_t_s_s(((l_58, (0L | (((((safe_add_func_int64_t_s_s((l_46 && ((safe_lshift_func_int64_t_s_s((((safe_div_func_int64_t_s_s((g_5 <= g_35), (-10L))), 0xDCL) >= g_45), 40)) != 0x949E3B93F16A1EA5LL)), g_45)), 0UL) < l_26) == l_26) | l_46))), g_45), l_38))) != g_45)), g_5), g_45))), l_58.f0), 0x0EL) > l_26) || g_35) | (-1L)) & l_26), g_5)) == 0x4AL);
  }
  return l_68;
}

static int32_t func_2(int32_t p_3, int16_t p_4) {
  uint32_t l_22 = 0x3799040CL;
  int32_t *l_25 = &g_24;
  for (p_4 = 0; (p_4 < 26); p_4 = safe_add_func_int32_t_s_s(p_4, 8)) {
    const int32_t l_17 = (-10L);
    int32_t *l_23[3][4][3] = {{{&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}}, {{&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}}, {{&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24}}};
    int i, j, k;
  }
  (*l_25) |= 0x1D2DAFFAL;
  return (*l_25);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_47[i][j][k], "g_47[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_66, "g_66", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
