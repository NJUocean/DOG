// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  volatile uint32_t f0;
  int32_t f1;
  volatile signed f2 : 24;
  uint64_t f3;
  int32_t f4;
};

static volatile int32_t g_2 = 7L;
static int32_t g_3 = 0x99FB023EL;
static int8_t g_7 = 0xADL;
static int32_t g_13 = 0x3E93D0B5L;
static volatile uint64_t g_17[3] = {0x11FB8EB5EA28C7FFLL, 0x11FB8EB5EA28C7FFLL, 0x11FB8EB5EA28C7FFLL};
static volatile union U2 g_21 = {0x8CDF8ABFL};
static volatile union U2 *volatile g_20[5][3][2] = {{{(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{(void *)0, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}};
static volatile union U2 *volatile *volatile g_22 = &g_20[3][2][1];
static int32_t g_24 = 0xFD8C6581L;
static volatile int32_t *g_29 = &g_2;
static volatile int32_t **volatile g_28[4] = {&g_29, &g_29, &g_29, &g_29};
static volatile int32_t **volatile g_30[2][1][1] = {{{&g_29}}, {{&g_29}}};

static const int32_t func_1(void);
static int8_t func_8(int8_t *p_9);

static const int32_t func_1(void) {
  const uint64_t l_32[5] = {0x058A13C444C9CADCLL, 0x058A13C444C9CADCLL, 0x058A13C444C9CADCLL, 0x058A13C444C9CADCLL, 0x058A13C444C9CADCLL};
  int i;
  for (g_3 = 0; (g_3 <= (-1)); g_3 = safe_sub_func_int32_t_s_s(g_3, 8)) {
    int8_t *l_6 = &g_7;
    int32_t *l_23[3];
    int i;
    for (i = 0; i < 3; i++)
      l_23[i] = &g_24;
    g_24 &= (1UL == (((*l_6) ^= g_3) || func_8(&g_7)));
  }
  for (g_3 = 0; (g_3 > 2); g_3 = safe_add_func_uint64_t_u_u(g_3, 2)) {
    volatile int32_t **l_31 = &g_29;
    for (g_7 = 2; (g_7 >= 0); g_7 -= 1) {
      for (g_13 = 0; (g_13 <= 2); g_13 += 1) {
        int i;
        if (g_17[g_13])
          break;
      }
      for (g_24 = 1; (g_24 >= 0); g_24 -= 1) {
        const int8_t l_27 = 8L;
        return l_27;
      }
    }
    (*l_31) = &g_2;
  }
  return l_32[3];
}

static int8_t func_8(int8_t *p_9) {
  int32_t l_10 = 0xEB77278FL;
  int32_t l_11 = 0xCE2949F4L;
  int32_t *l_12 = &g_13;
  int32_t *l_14 = &g_13;
  int32_t *l_15[1];
  int16_t l_16 = 0x4A8FL;
  int i;
  for (i = 0; i < 1; i++)
    l_15[i] = &g_13;
  g_17[1]--;
  (*g_22) = g_20[4][0][1];
  return (*l_14);
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
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_17[i], "g_17[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
