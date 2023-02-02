// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint32_t f0;
  uint32_t f1;
  int16_t f2;
  uint64_t f3;
  uint16_t f4;
};
#pragma pack(pop)

static volatile uint8_t g_2 = 0x76L;
static int32_t g_4[5] = {1L, 1L, 1L, 1L, 1L};
static struct S0 g_5 = {1UL, 4294967295UL, 1L, 0x68807383CC47D1AFLL, 0x061AL};

static struct S0 func_1(void);

static struct S0 func_1(void) {
  int32_t *l_3[1];
  int i;
  for (i = 0; i < 1; i++)
    l_3[i] = &g_4[0];
  g_4[0] ^= g_2;
  return g_5;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
  transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
  transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
  transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
  transparent_crc(g_5.f4, "g_5.f4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
