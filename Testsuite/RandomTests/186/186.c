// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x4C405B40L;
static int32_t g_9 = 0xBA47C9D5L;
static int32_t *g_8 = &g_9;

static uint64_t func_1(void);

static uint64_t func_1(void) {
  for (g_2 = 0; (g_2 < 27); g_2 = safe_add_func_int8_t_s_s(g_2, 1)) {
    int32_t *l_5 = &g_2;
    int32_t **l_6 = (void *)0;
    int32_t **l_7[5];
    int i;
    for (i = 0; i < 5; i++)
      l_7[i] = &l_5;
    g_8 = l_5;
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
  transparent_crc(g_9, "g_9", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
