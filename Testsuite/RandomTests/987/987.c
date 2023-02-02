// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  const int32_t f0;
  int8_t f1;
  uint32_t f2;
};
#pragma pack(pop)

static struct S0 g_6 = {0xFF23B1A9L, -1L, 0x08CCCDDDL};
static int32_t g_8 = 4L;
static volatile uint32_t g_13 = 0xD7770B16L;

static uint32_t func_1(void);
static int32_t *func_2(struct S0 p_3, int32_t *const p_4, int8_t p_5);

static uint32_t func_1(void) {
  int32_t *const l_7[3][1][5] = {{{&g_8, &g_8, &g_8, &g_8, &g_8}}, {{&g_8, &g_8, &g_8, &g_8, &g_8}}, {{&g_8, &g_8, &g_8, &g_8, &g_8}}};
  int32_t *l_11 = &g_8;
  int8_t l_12[1][3];
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++)
      l_12[i][j] = 0xA7L;
  }
  l_11 = func_2(g_6, l_7[1][0][4], ((l_7[1][0][4] == l_7[1][0][4]) >= (g_8 ^ (safe_unary_minus_func_int64_t_s(g_6.f1)))));
  for (g_8 = 0; (g_8 >= 0); g_8 -= 1) {
    if ((*l_11))
      break;
    if (g_13)
      break;
    for (g_6.f1 = 0; (g_6.f1 >= 0); g_6.f1 -= 1) {
      int32_t l_16 = (-9L);
      int i, j;
      l_16 = (safe_lshift_func_int32_t_s_s(l_12[g_8][(g_8 + 1)], 15));
    }
  }
  return (*l_11);
}

static int32_t *func_2(struct S0 p_3, int32_t *const p_4, int8_t p_5) {
  int32_t *l_10 = &g_8;
  return l_10;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
  transparent_crc(g_6.f1, "g_6.f1", print_hash_value);
  transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
