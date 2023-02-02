// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int8_t f0;
  const int8_t f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
  int64_t f0;
  int32_t f1;
  uint8_t f2;
  uint32_t f3;
  struct S0 f4;
};
#pragma pack(pop)

static volatile int8_t g_2 = 0x83L;
static int32_t g_4 = 0L;
static uint8_t g_25 = 255UL;
static struct S1 g_29 = {-1L, -1L, 0x64L, 0x6BD29A2AL, {0x7FL, 0xA1L}};

static uint8_t func_1(void);

static uint8_t func_1(void) {
  int32_t *l_3 = &g_4;
  int32_t *l_5 = &g_4;
  int32_t *l_6 = (void *)0;
  int32_t l_7 = 0x3F7BF48CL;
  int32_t *l_8 = &g_4;
  int32_t *l_9 = &g_4;
  int32_t *l_10 = &l_7;
  int32_t *l_11 = &l_7;
  int32_t *l_12 = &l_7;
  int32_t *l_13 = (void *)0;
  int32_t *l_14 = &l_7;
  int32_t *l_15 = &g_4;
  int32_t *l_16 = &g_4;
  int32_t *l_17 = &l_7;
  int32_t *l_18 = (void *)0;
  int32_t *l_19 = &l_7;
  int32_t *l_20 = &g_4;
  int32_t *l_21 = &g_4;
  int32_t *l_22 = &g_4;
  int32_t *l_23[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
  int32_t l_24 = 0x2FE81720L;
  struct S1 *l_28 = &g_29;
  struct S1 **l_30 = &l_28;
  int i;
  --g_25;
  (*l_30) = l_28;
  return (*l_15);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
  transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
  transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
  transparent_crc(g_29.f3, "g_29.f3", print_hash_value);
  transparent_crc(g_29.f4.f0, "g_29.f4.f0", print_hash_value);
  transparent_crc(g_29.f4.f1, "g_29.f4.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
