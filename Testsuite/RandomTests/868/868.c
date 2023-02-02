// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint64_t f0;
  volatile signed f1 : 27;
  const volatile unsigned f2 : 3;
};
#pragma pack(pop)

static volatile uint32_t g_2 = 18446744073709551615UL;
static volatile int32_t g_3[1] = {1L};
static struct S0 g_4 = {0x8E418A52733582F8LL, 3450, 1};

static struct S0 func_1(void);

static struct S0 func_1(void) {
  g_3[0] = g_2;
  return g_4;
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
  for (i = 0; i < 1; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
  transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
  transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
