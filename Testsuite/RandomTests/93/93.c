// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  unsigned f0 : 6;
  unsigned f1 : 3;
  signed f2 : 25;
  volatile int8_t f3;
  volatile signed f4 : 18;
};
#pragma pack(pop)

static int32_t g_7[4][1] = {{0xFF23B1A9L}, {0xFF23B1A9L}, {0xFF23B1A9L}, {0xFF23B1A9L}};
static int32_t **volatile g_9 = (void *)0;
static int32_t *g_11 = &g_7[1][0];
static int32_t **volatile g_10 = &g_11;
static struct S0 g_13 = {4, 1, 5245, -3L, -404};
static struct S0 **const volatile g_15[1][5] = {{(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}};
static struct S0 *g_17 = &g_13;
static int32_t **volatile g_19 = &g_11;

static uint16_t func_1(void);
static int32_t *func_2(int32_t *p_3, int8_t p_4, int32_t p_5);

static uint16_t func_1(void) {
  int32_t *l_6 = &g_7[0][0];
  (*g_19) = func_2(l_6, g_7[1][0], (*l_6));
  return (*l_6);
}

static int32_t *func_2(int32_t *p_3, int8_t p_4, int32_t p_5) {
  int32_t **l_8 = (void *)0;
  struct S0 *l_12 = &g_13;
  struct S0 **l_14 = (void *)0;
  struct S0 **l_16[3][2][4] = {{{(void *)0, &l_12, (void *)0, &l_12}, {(void *)0, &l_12, (void *)0, &l_12}}, {{(void *)0, &l_12, (void *)0, &l_12}, {(void *)0, &l_12, (void *)0, &l_12}}, {{(void *)0, &l_12, (void *)0, &l_12}, {(void *)0, &l_12, (void *)0, &l_12}}};
  int32_t *l_18 = &g_7[0][0];
  int i, j, k;
  (*g_10) = &g_7[1][0];
  g_17 = l_12;
  return l_18;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
  transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
  transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
  transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
  transparent_crc(g_13.f4, "g_13.f4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
