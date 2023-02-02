// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 4;
  volatile unsigned f1 : 9;
};

static int32_t g_7 = 0x662A2B3BL;
static int32_t *g_6 = &g_7;
static uint32_t g_12 = 0xBAEF6E22L;
static struct S0 g_13[3] = {{2, 10}, {2, 10}, {2, 10}};
static struct S0 *volatile g_14 = (void *)0;
static struct S0 g_15 = {3, 10};
static struct S0 g_16 = {1, 21};
static struct S0 g_18[1][2][3] = {{{{0, 6}, {0, 6}, {0, 6}}, {{1, 4}, {1, 4}, {1, 4}}}};

static struct S0 func_1(void);
static int32_t *func_2(int32_t *p_3, int32_t *p_4, int32_t p_5);

static struct S0 func_1(void) {
  int32_t *l_8[5];
  int i;
  for (i = 0; i < 5; i++)
    l_8[i] = (void *)0;
  l_8[0] = func_2(g_6, l_8[3], g_7);
  return g_18[0][0][1];
}

static int32_t *func_2(int32_t *p_3, int32_t *p_4, int32_t p_5) {
  const uint8_t l_9 = 0UL;
  int32_t **l_10 = &g_6;
  uint32_t *l_11 = &g_12;
  struct S0 *l_17 = &g_13[2];
  g_15 = (((*l_11) |= (l_9 < (p_4 != ((*l_10) = p_4)))), g_13[2]);
  (*l_17) = g_16;
  return p_4;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_13[i].f0, "g_13[i].f0", print_hash_value);
    transparent_crc(g_13[i].f1, "g_13[i].f1", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
  transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
  transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
  transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_18[i][j][k].f0, "g_18[i][j][k].f0", print_hash_value);
        transparent_crc(g_18[i][j][k].f1, "g_18[i][j][k].f1", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
