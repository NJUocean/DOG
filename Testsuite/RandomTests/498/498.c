// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_2 = 0x7DFE4D9EL;
static int32_t g_4 = 0L;
static int32_t *volatile g_3[5][4] = {{&g_4, (void *)0, &g_4, &g_4}, {(void *)0, (void *)0, &g_4, (void *)0}, {(void *)0, &g_4, &g_4, (void *)0}, {&g_4, (void *)0, &g_4, &g_4}, {(void *)0, (void *)0, &g_4, (void *)0}};

static const uint32_t func_1(void);

static const uint32_t func_1(void) {
  int32_t *l_5 = &g_4;
  (*l_5) ^= g_2;
  return (*l_5);
}

int main(int argc, char *argv[]) {
  int i, j;
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
