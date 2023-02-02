// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  int32_t f0;
  int64_t f1;
  int64_t f2;
  volatile uint32_t f3;
};

static int32_t g_3 = 0L;
static union U2 g_4 = {0xDB5CABFCL};

static union U2 func_1(void);

static union U2 func_1(void) {
  uint32_t l_2[1];
  int i;
  for (i = 0; i < 1; i++)
    l_2[i] = 0x80849F84L;
  for (g_3 = 0; (g_3 <= 0); g_3 += 1) {
    return g_4;
  }
  return g_4;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
