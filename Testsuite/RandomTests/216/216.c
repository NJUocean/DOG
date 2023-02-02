// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  int8_t f0;
  const uint8_t f1;
  uint16_t f2;
};
#pragma pack(pop)

struct S1 {
  volatile int32_t f0;
  const int8_t f1;
  const uint64_t f2;
  const int32_t f3;
  unsigned : 0;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
  signed f0 : 2;
  signed f1 : 5;
};
#pragma pack(pop)

static const int8_t g_8 = 0x57L;
static volatile struct S1 g_9 = {-3L, 1L, 0xC3F4F88039D6B9C2LL, 0L};
static struct S3 g_10 = {-0, 4};
static volatile struct S0 *g_12 = (void *)0;
static int16_t g_15 = (-6L);
static int32_t g_21 = 1L;

static struct S1 func_1(void);
static struct S0 *func_2(const uint32_t p_3, struct S3 p_4, struct S0 *p_5, int64_t p_6, uint16_t p_7);

static struct S1 func_1(void) {
  struct S0 *l_11 = (void *)0;
  int16_t *l_13 = (void *)0;
  int16_t *l_14 = &g_15;
  int32_t l_19 = 0x1D2A6F9AL;
  l_11 = func_2(g_8, (g_9, g_10), l_11, (((g_10.f0, (((l_11 == g_12) | ((*l_14) = 1L)) > ((+(safe_div_func_int8_t_s_s(l_19, 0x06L))) ^ 0xFCB4L))) == 0x8110L), g_10.f1), g_8);
  return g_9;
}

static struct S0 *func_2(const uint32_t p_3, struct S3 p_4, struct S0 *p_5, int64_t p_6, uint16_t p_7) {
  int32_t *l_20 = &g_21;
  int32_t *l_22 = &g_21;
  int32_t *l_23 = &g_21;
  int32_t *l_24 = &g_21;
  int32_t *l_25 = &g_21;
  int32_t *l_26[5];
  uint8_t l_27 = 255UL;
  int i;
  for (i = 0; i < 5; i++)
    l_26[i] = &g_21;
  ++l_27;
  return p_5;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
  transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
  transparent_crc(g_9.f3, "g_9.f3", print_hash_value);
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
