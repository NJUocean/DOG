// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = (-5L);
static int32_t g_7 = 0xB666A756L;

static int16_t func_1(void);

static int16_t func_1(void) {
  uint64_t l_8 = 0xFF14EB4C8F0D0714LL;
  for (g_2 = (-9); (g_2 <= 23); g_2 = safe_add_func_int64_t_s_s(g_2, 5)) {
    int32_t *l_5 = (void *)0;
    int32_t *l_6[3][2][3] = {{{&g_2, &g_7, &g_7}, {&g_7, &g_7, &g_2}}, {{&g_7, &g_2, (void *)0}, {&g_7, &g_7, (void *)0}}, {{&g_2, &g_7, &g_2}, {&g_7, &g_7, &g_7}}};
    int i, j, k;
    g_7 &= 0x8070ADE2L;
  }
  return l_8;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
