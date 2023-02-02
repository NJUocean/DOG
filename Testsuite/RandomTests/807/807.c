// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint32_t f0;
  const int64_t f1;
  volatile int64_t f2;
};
#pragma pack(pop)

static volatile int32_t g_3 = 0x835A23E8L;
static volatile int32_t g_4 = (-7L);
static int32_t g_5 = 0L;
static int32_t g_9 = 0xB7C7008BL;
static int32_t *volatile g_8 = &g_9;
static struct S0 g_10 = {1UL, 0L, -6L};
static int32_t g_28 = 0x9ED5B606L;
static int64_t g_33[3][1] = {{0L}, {0L}, {0L}};
static int16_t g_36[2][2][3] = {{{1L, 1L, 1L}, {1L, 1L, 1L}}, {{1L, 1L, 1L}, {1L, 1L, 1L}}};

static int64_t func_1(void);
static int32_t func_11(int16_t p_12, int32_t p_13, int64_t p_14, int32_t *const p_15);

static int64_t func_1(void) {
  int32_t l_2[3][1];
  int32_t *l_49[1];
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++)
      l_2[i][j] = 1L;
  }
  for (i = 0; i < 1; i++)
    l_49[i] = (void *)0;
  for (g_5 = 0; (g_5 <= 0); g_5 += 1) {
    uint64_t l_7 = 0UL;
    if ((+l_7)) {
      uint16_t l_24 = 1UL;
      int32_t l_40 = (-4L);
      for (l_7 = 0; (l_7 <= 0); l_7 += 1) {
        uint32_t l_41 = 1UL;
        int i, j;
        (*g_8) &= (l_2[(l_7 + 1)][l_7] = (l_2[(l_7 + 2)][l_7] || l_2[1][0]));
        (*g_8) = (((l_40 = (g_10, func_11((((&g_5 == ((((((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(254UL, g_3)), g_10.f1)), (&g_9 == &g_9))) && (safe_div_func_uint32_t_u_u((8L && l_24), (*g_8)))), g_10.f1) && g_10.f2) && l_7), (void *)0)), g_10.f2) > l_2[2][0]), g_10.f1, l_7, &l_2[2][0]))) && g_36[1][0][2]), l_41);
      }
    } else {
      return g_3;
    }
  }
  (*g_8) = ((safe_mod_func_int64_t_s_s(((*g_8), ((+(safe_sub_func_uint8_t_u_u(g_4, (safe_mod_func_int8_t_s_s(1L, g_9))))) == g_36[1][0][2])), l_2[0][0])) > g_9);
  return g_36[1][0][2];
}

static int32_t func_11(int16_t p_12, int32_t p_13, int64_t p_14, int32_t *const p_15) {
  int64_t l_34 = 1L;
  int32_t l_35 = 1L;
  for (g_9 = 0; (g_9 < 4); ++g_9) {
    int32_t *l_27 = &g_28;
    int32_t *l_29 = &g_28;
    int32_t *l_30 = &g_28;
    int32_t *l_31 = &g_28;
    int32_t *l_32[2];
    uint32_t l_37 = 0xCEA59F7CL;
    int i;
    for (i = 0; i < 2; i++)
      l_32[i] = &g_28;
    l_37--;
  }
  return l_34;
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
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
  transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_33[i][j], "g_33[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_36[i][j][k], "g_36[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
