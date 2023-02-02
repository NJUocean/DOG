// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  int32_t f0;
  signed f1 : 8;
  const uint64_t f2;
  uint32_t f3;
};
#pragma pack(pop)

static uint32_t g_2 = 9UL;

static const struct S0 func_1(void);

static const struct S0 func_1(void) {
  if (g_2) {
    const struct S0 l_3 = {1L, 8, 0x44AD374006310FECLL, 0xFE8B0D19L};
    return l_3;
  } else {
    const struct S0 l_4[1][1] = {{{1L, 9, 18446744073709551615UL, 0x4DC41FD9L}}};
    int i, j;
    return l_4[0][0];
  }
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
