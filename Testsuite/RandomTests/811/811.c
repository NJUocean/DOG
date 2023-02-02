// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int64_t g_4[2][5][5] = {{{0xD697E780CA9F8D19LL, 3L, 0xD697E780CA9F8D19LL, 0xD697E780CA9F8D19LL, 3L}, {0x77C8748AFA2FAFD1LL, 0x2EE6D058A835A23ELL, 0L, (-1L), 0L}, {3L, 3L, (-5L), 3L, 3L}, {0L, (-1L), 0L, 0x2EE6D058A835A23ELL, 0x77C8748AFA2FAFD1LL}, {3L, 0xD697E780CA9F8D19LL, 0xD697E780CA9F8D19LL, 3L, 0xD697E780CA9F8D19LL}}, {{0x77C8748AFA2FAFD1LL, (-1L), 1L, (-1L), 0x77C8748AFA2FAFD1LL}, {0xD697E780CA9F8D19LL, 3L, 0xD697E780CA9F8D19LL, 0xD697E780CA9F8D19LL, 3L}, {0x77C8748AFA2FAFD1LL, 0x2EE6D058A835A23ELL, 0L, (-1L), 0L}, {3L, 3L, (-5L), 3L, 3L}, {0L, 0x2EE6D058A835A23ELL, 1L, (-1L), 0L}}};
static int32_t g_7[3][4] = {{0x62858905L, 0x62858905L, 0x62858905L, 0x62858905L}, {0x62858905L, 0x62858905L, 0x62858905L, 0x62858905L}, {0x62858905L, 0x62858905L, 0x62858905L, 0x62858905L}};

static uint8_t func_1(void);

static uint8_t func_1(void) {
  uint32_t l_5 = 4UL;
  int32_t *l_6 = &g_7[0][0];
  int32_t *l_8 = (void *)0;
  int32_t *l_9 = (void *)0;
  int32_t *l_10 = &g_7[0][0];
  int32_t *l_11 = (void *)0;
  int32_t *l_12 = &g_7[1][1];
  int32_t *l_13 = &g_7[0][0];
  int32_t *l_14 = &g_7[0][0];
  int32_t *l_15[4][2][1] = {{{&g_7[0][0]}, {&g_7[2][1]}}, {{&g_7[0][0]}, {&g_7[2][1]}}, {{&g_7[0][0]}, {&g_7[2][1]}}, {{&g_7[0][0]}, {&g_7[2][1]}}};
  uint8_t l_16[4] = {0x52L, 0x52L, 0x52L, 0x52L};
  int i, j, k;
  l_5 = (safe_rshift_func_int64_t_s_u(g_4[0][3][0], 46));
  ++l_16[2];
  return g_4[1][1][2];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
