// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_2 = 4UL;

static uint16_t func_1(void);

static uint16_t func_1(void) {
  uint32_t l_7 = 0x173BF38CL;
  int32_t l_8[1];
  int i;
  for (i = 0; i < 1; i++)
    l_8[i] = (-4L);
  ++g_2;
  for (g_2 = (-21); (g_2 >= 26); g_2 = safe_add_func_uint16_t_u_u(g_2, 4)) {
    l_8[0] &= l_7;
  }
  return g_2;
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
