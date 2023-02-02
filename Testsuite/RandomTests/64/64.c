// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0x0ADE2167L;
static volatile uint8_t g_5[3] = {251UL, 251UL, 251UL};

static const int16_t func_1(void);

static const int16_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4[1];
  int i;
  for (i = 0; i < 1; i++)
    l_4[i] = &g_3;
  g_5[0]--;
  return g_5[2];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
