// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const int32_t f0;
  uint32_t f1;
  volatile uint32_t f2;
};

static uint32_t g_6 = 0UL;
static int64_t g_8 = 0x52EAA29C1464F16ELL;
static struct S0 g_10 = {-5L, 4294967295UL, 0x9B69B2E4L};
static int64_t g_12 = 8L;
static int64_t *const g_11 = &g_12;
static int64_t *g_13 = (void *)0;
static int32_t g_25[3][4] = {{2L, (-1L), 2L, 2L}, {(-1L), (-1L), (-1L), (-1L)}, {(-1L), 2L, 2L, (-1L)}};
static int32_t *g_27 = &g_25[1][3];
static int32_t **volatile g_26 = &g_27;
static volatile uint8_t g_30 = 6UL;

static uint64_t func_1(void);
static uint32_t func_2(uint32_t p_3);

static uint64_t func_1(void) {
  int64_t *l_7 = &g_8;
  int32_t l_9 = 1L;
  int32_t l_22 = 7L;
  uint16_t l_23 = 65535UL;
  int32_t *l_33 = &l_22;
  int32_t *l_34 = &l_9;
  int32_t l_35 = 0xC280563AL;
  (*l_34) = ((*l_33) = (func_2((safe_div_func_uint64_t_u_u(((((*l_7) ^= g_6) <= (((((((l_9 || g_6), g_10), g_11) != (g_13 = &g_12)) <= (safe_add_func_uint16_t_u_u((((((safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((g_12 < (&g_12 == l_7)), g_12)), g_10.f1)) || l_22), &g_12) != &g_12), 65527UL), l_23))) != 18446744073709551615UL) <= g_10.f1)) <= 0x88C5540FFF06982BLL), (*g_11)))) == g_25[1][3]));
  return l_35;
}

static uint32_t func_2(uint32_t p_3) {
  int32_t *l_24 = &g_25[1][3];
  (*g_26) = l_24;
  for (p_3 = 0; (p_3 >= 59); p_3++) {
    --g_30;
  }
  return g_25[0][2];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
  transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_30, "g_30", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
