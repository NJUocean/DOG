// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint64_t g_5 = 0xF23B1A9565E08CCCLL;
static int32_t g_9 = (-8L);
static int64_t g_13 = 9L;
static int32_t g_20 = 0x29B85755L;

static int64_t func_1(void);
static int32_t func_2(uint32_t p_3, const int32_t p_4);

static int64_t func_1(void) {
  int32_t *l_18 = &g_9;
  int32_t *l_19 = &g_20;
  (*l_19) ^= ((*l_18) = func_2(((-1L) < g_5), (safe_lshift_func_int64_t_s_s(g_5, 7))));
  return (*l_19);
}

static int32_t func_2(uint32_t p_3, const int32_t p_4) {
  int32_t *l_8 = &g_9;
  int32_t *l_10 = &g_9;
  int32_t *l_11 = (void *)0;
  int32_t *l_12[5][3][4] = {{{&g_9, &g_9, &g_9, &g_9}, {(void *)0, (void *)0, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}, {{&g_9, &g_9, &g_9, &g_9}, {(void *)0, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}, {{&g_9, (void *)0, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}, {{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}, {(void *)0, &g_9, &g_9, &g_9}}, {{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}};
  uint8_t l_14 = 0x55L;
  int32_t l_17[1][1][5];
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++)
        l_17[i][j][k] = 0xB89BDD77L;
    }
  }
  ++l_14;
  return l_17[0][0][2];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
