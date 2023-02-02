// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U6 {
  int8_t f0;
  uint64_t f1;
};

static volatile int8_t g_5[3] = {0x29L, 0x29L, 0x29L};
static union U6 g_13 = {2L};
static int32_t g_22[4] = {0x0C9BA5B0L, 0x0C9BA5B0L, 0x0C9BA5B0L, 0x0C9BA5B0L};
static int32_t g_24 = 0x687FD074L;
static int32_t *volatile g_23 = &g_24;
static uint32_t g_26[3][1][5] = {{{4294967295UL, 0x7511ECBFL, 4294967295UL, 0x7511ECBFL, 4294967295UL}}, {{4UL, 4UL, 4UL, 4UL, 4UL}}, {{4294967295UL, 0x7511ECBFL, 4294967295UL, 0x7511ECBFL, 4294967295UL}}};
static int32_t *volatile g_27 = (void *)0;
static int32_t *volatile g_28 = &g_22[0];

static int8_t func_1(void);
static int64_t func_9(int8_t p_10, int8_t p_11, union U6 p_12);

static int8_t func_1(void) {
  int8_t l_4 = 0x1DL;
  int16_t *l_25 = (void *)0;
  (*g_28) = (safe_div_func_int16_t_s_s((((g_26[2][0][1] = ((l_4 >= ((l_4 < g_5[2]), (~0L))) && (safe_sub_func_int64_t_s_s(func_9(l_4, g_5[1], g_13), l_4)))) & 0x14C3L) || g_26[2][0][1]), l_4));
  return g_26[1][0][3];
}

static int64_t func_9(int8_t p_10, int8_t p_11, union U6 p_12) {
  uint32_t l_16 = 0x2C40A98CL;
  for (p_12.f1 = 0; (p_12.f1 > 24); p_12.f1++) {
    int64_t l_20 = 1L;
    int32_t *l_21 = &g_22[0];
    if (l_16)
      break;
    (*g_23) = ((*l_21) = (g_5[2] != (~(safe_sub_func_uint64_t_u_u(p_11, (l_20, p_12.f1))))));
  }
  return p_10;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_22[i], "g_22[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_24, "g_24", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_26[i][j][k], "g_26[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
