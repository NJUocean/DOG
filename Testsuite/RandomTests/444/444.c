// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint32_t f0;
};
#pragma pack(pop)

static struct S0 g_2 = {0xFEBB6748L};

static uint16_t func_1(void);

static uint16_t func_1(void) {
  struct S0 l_3[4] = {{0x33C63384L}, {0x33C63384L}, {0x33C63384L}, {0x33C63384L}};
  int i;
  l_3[2] = g_2;
  return g_2.f0;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
