// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint64_t f0;
  volatile int32_t f1;
  const uint64_t f2;
};
#pragma pack(pop)

struct S1 {
  int32_t f0;
};

static volatile int32_t g_3[2] = {0xB3152C58L, 0xB3152C58L};
static int32_t g_4 = 0x7C8748AFL;
static struct S1 g_12[1][1][5] = {{{{0xADF62858L}, {0xADF62858L}, {0xADF62858L}, {0xADF62858L}, {0xADF62858L}}}};
static int32_t g_20[4] = {(-1L), (-1L), (-1L), (-1L)};
static struct S0 g_23[3] = {{8UL, 1L, 0xB8D2321210CBEDFALL}, {8UL, 1L, 0xB8D2321210CBEDFALL}, {8UL, 1L, 0xB8D2321210CBEDFALL}};
static const volatile int32_t *volatile *volatile g_24 = (void *)0;
static const volatile int32_t *volatile *volatile *volatile g_25 = (void *)0;
static const volatile int32_t *volatile *volatile *volatile g_26[4] = {&g_24, &g_24, &g_24, &g_24};
static int32_t g_29[5] = {0L, 0L, 0L, 0L, 0L};
static int32_t g_31 = 0L;
static const volatile int32_t *g_33 = &g_23[0].f1;
static const volatile int32_t **volatile g_32[5][5] = {{(void *)0, &g_33, (void *)0, &g_33, &g_33}, {(void *)0, &g_33, (void *)0, &g_33, &g_33}, {(void *)0, &g_33, (void *)0, &g_33, &g_33}, {(void *)0, &g_33, (void *)0, &g_33, &g_33}, {(void *)0, &g_33, (void *)0, (void *)0, (void *)0}};

static uint8_t func_1(void);
static uint64_t func_6(struct S1 p_7, int8_t p_8, uint64_t p_9, int16_t p_10, const int16_t p_11);

static uint8_t func_1(void) {
  uint8_t l_2[1][2][2];
  const volatile int32_t *l_28[2];
  const volatile int32_t *volatile *volatile l_27 = &l_28[1];
  const volatile int32_t **l_34 = &l_28[1];
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++)
        l_2[i][j][k] = 0x2FL;
    }
  }
  for (i = 0; i < 2; i++)
    l_28[i] = &g_3[0];
  for (g_4 = 0; (g_4 >= 0); g_4 -= 1) {
    int8_t l_5 = (-10L);
    int32_t *l_16 = (void *)0;
    int32_t *l_17 = &g_12[0][0][3].f0;
    if (((*l_17) = ((l_5 = (1L ^ 1L)) ^ func_6(g_12[0][0][3], g_4, g_3[1], l_2[0][0][1], g_4)))) {
      uint8_t l_18[2][1][4] = {{{6UL, 6UL, 6UL, 6UL}}, {{6UL, 6UL, 6UL, 6UL}}};
      int i, j, k;
      l_18[0][0][3] = (g_3[0] | g_12[0][0][3].f0);
    } else {
      int8_t l_19 = 0L;
      (*l_17) &= l_19;
    }
    for (l_5 = 0; (l_5 <= 0); l_5 += 1) {
      for (g_20[1] = 1; (g_20[1] >= 0); g_20[1] -= 1) {
        struct S0 *l_22[3][2][4];
        struct S0 **l_21 = &l_22[2][0][0];
        int i, j, k;
        for (i = 0; i < 3; i++) {
          for (j = 0; j < 2; j++) {
            for (k = 0; k < 4; k++)
              l_22[i][j][k] = &g_23[0];
          }
        }
        (*l_21) = (void *)0;
        l_27 = g_24;
      }
      for (g_29[1] = 0; (g_29[1] >= 0); g_29[1] -= 1) {
        uint16_t l_30[4] = {0xCE69L, 0xCE69L, 0xCE69L, 0xCE69L};
        int i;
        l_30[2] ^= 1L;
      }
      for (g_31 = 0; (g_31 >= 0); g_31 -= 1) {
        int i, j, k;
        return l_2[g_4][g_4][g_4];
      }
    }
  }
  (*l_34) = l_28[0];
  return (**l_34);
}

static uint64_t func_6(struct S1 p_7, int8_t p_8, uint64_t p_9, int16_t p_10, const int16_t p_11) {
  int32_t *l_14 = (void *)0;
  int32_t **l_13 = &l_14;
  int8_t l_15 = 0x64L;
  g_12[0][0][3].f0 ^= g_4;
  (*l_13) = &g_4;
  return l_15;
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
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_12[i][j][k].f0, "g_12[i][j][k].f0", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 4; i++) {
    transparent_crc(g_20[i], "g_20[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 3; i++) {
    transparent_crc(g_23[i].f0, "g_23[i].f0", print_hash_value);
    transparent_crc(g_23[i].f1, "g_23[i].f1", print_hash_value);
    transparent_crc(g_23[i].f2, "g_23[i].f2", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 5; i++) {
    transparent_crc(g_29[i], "g_29[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_31, "g_31", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
