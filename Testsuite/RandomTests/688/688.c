// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const volatile uint16_t g_2[4] = {0x6B9DL, 0x6B9DL, 0x6B9DL, 0x6B9DL};
static uint32_t g_6 = 0UL;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t l_5[1];
  int i;
  for (i = 0; i < 1; i++)
    l_5[i] = 0x82ABBF9AL;
  g_6 |= (((18446744073709551615UL | 0x1E814B733C633843LL) > g_2[1]) > (safe_rshift_func_int32_t_s_s(l_5[0], l_5[0])));
  for (g_6 = 0; (g_6 != 0); g_6 = safe_add_func_int32_t_s_s(g_6, 9)) {
    if (g_2[0])
      break;
  }
  return l_5[0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
