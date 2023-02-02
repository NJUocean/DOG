// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S3 {
  volatile unsigned f0 : 26;
};
#pragma pack(pop)

union U4 {
  int32_t f0;
  signed f1 : 25;
};

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint64_t f0;
  int16_t f1;
};
#pragma pack(pop)

union U5 {
  uint64_t f0;
  struct S0 f1;
  uint64_t f2;
  int32_t f3;
  int16_t f4;
};

static int32_t g_6 = 0x7E4A9061L;
static volatile uint32_t g_22 = 0xCFF15CC7L;
static union U4 g_42[2] = {{-5L}, {-5L}};
static int32_t *g_53 = &g_6;
static int32_t **g_52 = &g_53;
static int32_t ***volatile g_51 = &g_52;
static struct S3 g_54 = {2385};

static struct S3 func_1(void);
static int32_t func_29(int32_t *p_30, union U5 p_31, uint16_t p_32, union U4 p_33, int32_t *p_34);

static struct S3 func_1(void) {
  int16_t l_2 = 1L;
  int32_t *l_3 = (void *)0;
  int32_t *l_4 = (void *)0;
  int32_t *l_5 = &g_6;
  int32_t *l_7 = &g_6;
  int32_t *l_8 = &g_6;
  int32_t *l_9 = &g_6;
  int32_t *l_10 = &g_6;
  int32_t *l_11 = &g_6;
  int32_t l_12[2];
  int32_t *l_13 = &l_12[1];
  int32_t *l_14 = (void *)0;
  int32_t *l_15 = &g_6;
  int32_t *l_16 = &g_6;
  int32_t *l_17 = (void *)0;
  int32_t *l_18 = &l_12[1];
  int32_t *l_19 = &l_12[1];
  int32_t *l_20[5][5];
  int32_t l_21 = 0xA4C5706BL;
  int i, j;
  for (i = 0; i < 2; i++)
    l_12[i] = (-1L);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++)
      l_20[i][j] = &g_6;
  }
  ++g_22;
  for (g_6 = 0; (g_6 == 0); g_6++) {
    int32_t *l_35 = &l_12[1];
    union U4 l_49 = {0x1D55E0ECL};
    for (l_2 = (-16); (l_2 <= 17); ++l_2) {
      union U5 l_36 = {0x98CBDB62B2FAA963LL};
      int32_t **l_47 = (void *)0;
      int32_t **l_48[2];
      int i;
      for (i = 0; i < 2; i++)
        l_48[i] = &l_20[2][0];
    }
    l_11 = l_35;
  }
  return g_54;
}

static int32_t func_29(int32_t *p_30, union U5 p_31, uint16_t p_32, union U4 p_33, int32_t *p_34) {
  union U4 *l_50 = &g_42[1];
  (*p_30) = (((*l_50) = g_42[1]), g_6);
  return g_22;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_42[i].f0, "g_42[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
