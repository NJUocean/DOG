// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint16_t g_4 = 65531UL;
static int32_t g_6 = 0xC5A654FDL;

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_5 = &g_6;
  (*l_5) = (safe_sub_func_uint8_t_u_u(g_4, 0x03L));
  return (*l_5);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
