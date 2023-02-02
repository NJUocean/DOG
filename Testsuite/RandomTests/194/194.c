// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-4L);
static int32_t g_3[3] = {0x327CB3F4L, 0x327CB3F4L, 0x327CB3F4L};
static int32_t *volatile g_8 = (void *)0;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int16_t l_6 = 0x5B40L;
  for (g_3[1] = 23; (g_3[1] != (-2)); g_3[1]--) {
    uint64_t l_7 = 18446744073709551609UL;
    g_2 ^= (g_3[1] && (l_6, l_7));
  }
  return l_6;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
