// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x1A049FE3L;

static int16_t func_1(void);

static int16_t func_1(void) {
  uint32_t l_5 = 0x124F84B8L;
  for (g_2 = 0; (g_2 <= (-15)); g_2 = safe_sub_func_int8_t_s_s(g_2, 1)) {
    return g_2;
  }
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
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
