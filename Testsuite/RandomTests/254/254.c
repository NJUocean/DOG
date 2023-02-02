// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  const int8_t f0;
  uint32_t f1;
  int8_t f2;
  int64_t f3;
};

static int32_t g_2 = (-10L);
static int32_t g_4 = 0xA3C0BF90L;

static union U0 func_1(void);

static union U0 func_1(void) {
  int32_t *l_3 = &g_4;
  union U0 l_5 = {0xADL};
  (*l_3) = g_2;
  (*l_3) = (*l_3);
  return l_5;
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
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
