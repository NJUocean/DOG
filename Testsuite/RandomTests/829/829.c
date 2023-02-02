// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x974B666AL;
static int32_t *volatile g_6 = (void *)0;
static int32_t g_8 = 0x963BA20BL;

static uint64_t func_1(void);

static uint64_t func_1(void) {
  int32_t l_5 = (-1L);
  uint16_t l_9 = 0xF6D4L;
  for (g_2 = (-1); (g_2 == (-28)); --g_2) {
    int32_t *l_7 = &g_8;
    (*l_7) ^= l_5;
  }
  return l_9;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
