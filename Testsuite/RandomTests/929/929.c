// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  unsigned f0 : 26;
  volatile int32_t f1;
  const volatile uint32_t f2;
  volatile signed f3 : 5;
};

union U2 {
  uint32_t f0;
};

static uint8_t g_2[4][1] = {{0UL}, {0x4BL}, {0UL}, {0x4BL}};
static int32_t g_3 = 0x6A3367F5L;
static int8_t g_41 = (-1L);
static int32_t g_43[1][4][3] = {{{9L, 9L, 0x0A741263L}, {0x1EC6C048L, 0x0A741263L, 0x0A741263L}, {0x0A741263L, (-1L), 2L}, {0x1EC6C048L, (-1L), 0x1EC6C048L}}};
static int32_t g_46 = 0x460DEEA3L;
static uint32_t g_49[3] = {0xFC71010FL, 0xFC71010FL, 0xFC71010FL};
static union U0 g_50 = {0x99ED1890L};
static volatile union U2 g_61 = {1UL};
static int16_t *g_65[1][4] = {{(void *)0, (void *)0, (void *)0, (void *)0}};
static int16_t **g_64 = &g_65[0][0];

static union U0 func_1(void);
static int32_t func_4(int8_t p_5);

static union U0 func_1(void) {
  int32_t l_21 = 0x7F355C0CL;
  uint64_t l_47 = 18446744073709551615UL;
  int32_t l_63 = 0x918CD8B1L;
  int32_t *l_66 = &l_63;
  int32_t *l_67[5][3] = {{&g_46, (void *)0, &g_46}, {&g_46, &g_46, &g_43[0][3][0]}, {&g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46}, {&g_46, (void *)0, &g_43[0][3][0]}};
  uint32_t l_68 = 0x6ECCD282L;
  int i, j;
  for (g_3 = 0; (g_3 <= 0); g_3 += 1) {
    int64_t l_15 = 0xBB4F5AC3D6C1DFE9LL;
    int8_t *l_40 = &g_41;
    int32_t *l_44 = (void *)0;
    int32_t *l_45[1];
    int16_t *l_48 = (void *)0;
    int16_t l_62 = 0x38D0L;
    int i;
    for (i = 0; i < 1; i++)
      l_45[i] = &g_43[0][3][1];
        g_46 &= (g_43[0][0][2] = func_4(((safe_div_func_int32_t_s_s(g_2[1][0], (safe_mod_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((((((!(g_3 >= (((safe_lshift_func_uint64_t_u_s(g_3, 12)) || (l_15 & (~((*l_40) = ((safe_mul_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((4294967287UL ^ ((l_21 | g_3) == (safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(g_2[2][0], (safe_div_func_uint32_t_u_u(((safe_rshift_func_int64_t_s_u((safe_div_func_int32_t_s_s((safe_rshift_func_int32_t_s_u((-1L), 7)), l_21)), 57)) == 0UL), 1L)))) >= g_2[3][0]), g_3)), l_15)) , g_2[0][0]), g_2[3][0])), l_15)))), 11)), 0x298C245E320525C7LL)) , l_15))))) > g_3))) <= g_3) | g_2[1][0]) == g_2[0][0]) , l_15) && l_15), 0x1B78CD908FBDEDBELL)) == l_15), l_15)))) > g_2[0][0])));
  }
  --l_68;
  return g_50;
}

static int32_t func_4(int8_t p_5) {
  int32_t *l_42 = &g_43[0][0][2];
  (*l_42) = ((void *)0 != &p_5);
  return p_5;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_43[i][j][k], "g_43[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_46, "g_46", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_49[i], "g_49[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
  transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
