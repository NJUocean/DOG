// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint32_t f0;
  uint64_t f1;
  const volatile uint8_t f2;
  volatile uint32_t f3;
};
#pragma pack(pop)

static int32_t g_3 = 0xD26EC17EL;
static volatile int32_t g_4 = (-1L);
static struct S0 g_5 = {4294967295UL, 0x3C407858F9C25B05LL, 1UL, 0xE56890C5L};

static struct S0 func_1(void);

static struct S0 func_1(void) {
  int32_t l_2[2][2];
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++)
      l_2[i][j] = 0x81D21F1EL;
  }
  for (g_3 = 0; g_3 < 2; g_3 += 1) {
    for (g_4 = 0; g_4 < 2; g_4 += 1) {
      l_2[g_3][g_4] = 1L;
    }
  }
  return g_5;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
  transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
  transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
  transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
