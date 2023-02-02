// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-5L);
static int32_t g_3 = (-1L);
static int32_t g_7 = 0L;
static int32_t *volatile g_6[3] = {&g_7, &g_7, &g_7};

static int32_t func_1(void);

static int32_t func_1(void) {
  int64_t l_9 = 1L;
  for (g_3 = (-12); (g_3 < 17); g_3 = safe_add_func_int64_t_s_s(g_3, 5)) {
    int32_t *l_8 = &g_7;
    (*l_8) = (g_2 || g_3);
    l_9 |= (*l_8);
  }
  return g_2;
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
