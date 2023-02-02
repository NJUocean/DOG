// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 0x124F84B8L;
static int32_t *volatile g_3 = &g_4;

static int32_t func_1(void);

static int32_t func_1(void) {
  int8_t l_2 = 0x02L;
  (*g_3) ^= (l_2 && 0x1CL);
  return l_2;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
