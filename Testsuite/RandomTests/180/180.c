// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const volatile signed f0 : 18;
};

struct S2 {
  volatile int16_t f0;
  const unsigned f1 : 13;
};

static volatile int32_t g_2 = 0x256A9EF7L;
static int32_t g_3 = 1L;
static volatile struct S2 g_13[1] = {{0xC63CL, 34}};
static volatile struct S2 *g_12 = &g_13[0];
static volatile struct S2 **volatile g_11 = &g_12;
static volatile int32_t *volatile g_14 = &g_2;
static struct S0 g_15[2][3][4] = {{{{-405}, {-405}, {66}, {-405}}, {{-405}, {173}, {173}, {-405}}, {{173}, {-405}, {173}, {173}}}, {{{-405}, {-405}, {66}, {-405}}, {{-405}, {173}, {173}, {-405}}, {{173}, {-405}, {173}, {173}}}};
static int32_t *const volatile g_17 = &g_3;

static int64_t func_1(void);
static struct S0 func_6(struct S2 *p_7, int64_t p_8);

static int64_t func_1(void) {
  struct S2 *l_9 = (void *)0;
  int32_t l_16 = 0x43836745L;
  uint32_t l_18 = 3UL;
  for (g_3 = (-14); (g_3 != 14); g_3++) {
    struct S2 **l_10 = &l_9;
    (*l_10) = (func_6(((*l_10) = l_9), ((void *)0 != g_11)), (*l_10));
  }
  (*g_17) = l_16;
  return l_18;
}

static struct S0 func_6(struct S2 *p_7, int64_t p_8) {
  (*g_14) = g_13[0].f1;
  return g_15[1][2][2];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_13[i].f0, "g_13[i].f0", print_hash_value);
    transparent_crc(g_13[i].f1, "g_13[i].f1", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_15[i][j][k].f0, "g_15[i][j][k].f0", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
