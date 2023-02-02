// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const uint64_t f0;
};

static int32_t g_3 = (-3L);
static int32_t g_5 = 1L;
static union U1 g_6 = {0UL};

static union U1 func_1(void);

static union U1 func_1(void) {
  int32_t l_2[1];
  int i;
  for (i = 0; i < 1; i++)
    l_2[i] = 0x21DED680L;
  for (g_3 = 0; (g_3 >= 0); g_3 -= 1) {
    int32_t *l_4 = &g_5;
    int i;
    (*l_4) |= l_2[g_3];
    for (g_5 = 0; (g_5 <= 0); g_5 += 1) {
      return g_6;
    }
  }
  return g_6;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
