// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S3 {
  volatile signed f0 : 13;
  const unsigned f1 : 14;
};

static int32_t g_3 = 1L;
static volatile struct S3 g_4 = {50, 104};
static int64_t g_14 = 0x57F39CEE24B2E809LL;
static uint16_t g_18[4][3][3] = {{{0UL, 0UL, 0UL}, {0x1FA6L, 0UL, 0x1FA6L}, {0UL, 0UL, 0UL}}, {{0x1FA6L, 0UL, 0x1FA6L}, {0UL, 0UL, 0UL}, {0x1FA6L, 0UL, 0x1FA6L}}, {{0UL, 0UL, 0UL}, {0x1FA6L, 0UL, 0x1FA6L}, {0UL, 0UL, 0UL}}, {{0x1FA6L, 0UL, 0x1FA6L}, {0UL, 0UL, 0UL}, {0x1FA6L, 0UL, 0x1FA6L}}};
static volatile int64_t g_21 = 0x921BA52B3395CC9ELL;
static uint64_t g_23[4] = {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL};
static int32_t g_28 = 0x101BC642L;

static int32_t func_1(void);
static int32_t *func_7(int32_t *p_8, uint16_t p_9);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int64_t *l_13[5];
  uint16_t *l_17 = &g_18[3][0][1];
  int32_t **l_26 = &l_2;
  int32_t *l_27 = &g_28;
  int i;
  for (i = 0; i < 5; i++)
    l_13[i] = &g_14;
  l_2 = l_2;
  (*l_27) |= (g_4, ((safe_sub_func_uint16_t_u_u(((((*l_26) = func_7((((*l_17) = ((((!((-8L) == (*l_2))) == (safe_mul_func_int64_t_s_s((g_14 = 0x4856CD83398963ECLL), (safe_add_func_uint64_t_u_u((((l_2 == l_2) && 0x0EL) && (0UL | ((l_2 != (void *)0) == (*l_2)))), (*l_2)))))) >= (*l_2)) | g_4.f1)), (void *)0), g_3)) != &g_3) <= 0x00AC80EAL), 65528UL)) || g_18[3][0][1]));
  return g_18[3][0][1];
}

static int32_t *func_7(int32_t *p_8, uint16_t p_9) {
  int32_t *l_19 = (void *)0;
  int32_t *l_20[2][1];
  int16_t l_22 = 1L;
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++)
      l_20[i][j] = &g_3;
  }
  ++g_23[2];
  g_4.f0 = g_23[2];
  return p_8;
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
  transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
  transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_18[i][j][k], "g_18[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_21, "g_21", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_23[i], "g_23[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_28, "g_28", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
