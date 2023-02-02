// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  int32_t f0;
  signed f1 : 28;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
  volatile unsigned f0 : 31;
};
#pragma pack(pop)

struct S2 {
  const uint32_t f0;
  uint8_t f1;
  int64_t f2;
  uint64_t f3;
};

static int32_t g_3 = 8L;
static int8_t g_9[2][2] = {{7L, 7L}, {7L, 7L}};
static volatile int32_t g_10 = 0x4B7C7008L;
static int16_t g_11 = (-4L);
static volatile int8_t g_12 = 0L;
static volatile uint32_t g_13 = 0x64EA33A4L;
static struct S1 g_32 = {41679};

static const struct S2 func_1(void);
static struct S1 func_16(uint64_t p_17);

static const struct S2 func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5 = (void *)0;
  int32_t *l_6 = &g_3;
  int32_t *l_7 = &g_3;
  int32_t *l_8[2];
  struct S0 l_20 = {-1L, 9083};
  int32_t **l_21 = &l_2;
  int32_t **l_22 = &l_8[0];
  struct S1 *l_33 = &g_32;
  const struct S2 l_34 = {0x67DF2DDFL, 5UL, -5L, 0xFE18BD2E84CBF776LL};
  int i;
  for (i = 0; i < 2; i++)
    l_8[i] = (void *)0;
  --g_13;
  (*l_33) = func_16((safe_mul_func_int32_t_s_s((l_20, ((*l_7) = 2L)), (&g_10 != ((*l_22) = ((*l_21) = l_8[1]))))));
  return l_34;
}

static struct S1 func_16(uint64_t p_17) {
  int32_t *l_23 = &g_3;
  int32_t *l_24 = &g_3;
  int32_t l_25 = 0x7D17017AL;
  int32_t *l_26 = &l_25;
  int32_t *l_27 = &g_3;
  int32_t *l_28[3];
  uint16_t l_29 = 0x6C0FL;
  int i;
  for (i = 0; i < 3; i++)
    l_28[i] = &l_25;
  l_29++;
  return g_32;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
