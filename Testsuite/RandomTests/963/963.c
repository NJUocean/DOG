// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0L;
static volatile int32_t g_3 = 0x70AD6F2EL;
static int32_t g_4 = (-1L);

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_11[5] = {&g_4, &g_4, &g_4, &g_4, &g_4};
  int32_t **l_10 = &l_11[1];
  int i;
  for (g_4 = 0; (g_4 == 0); g_4 = safe_add_func_uint16_t_u_u(g_4, 6)) {
    int32_t **l_7 = (void *)0;
    int32_t *l_9 = &g_4;
    int32_t **l_8 = &l_9;
    (*l_8) = (void *)0;
  }
  (*l_10) = (void *)0;
  return g_4;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
