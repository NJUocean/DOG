// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint16_t f0;
};

static int32_t g_3 = 0x2C29A3DFL;
static union U0 g_4 = {0xA654L};

static union U0 func_1(void);

static union U0 func_1(void) {
  int32_t *l_2[5] = {&g_3, &g_3, &g_3, &g_3, &g_3};
  int i;
  g_3 = 2L;
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
