// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0xBC370782L;
static int16_t g_9[2] = {0x86BAL, 0x86BAL};
static uint16_t g_11 = 0xEDADL;

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5 = &g_3;
  int32_t *l_6 = &g_3;
  int32_t *l_7 = &g_3;
  int32_t *l_8 = (void *)0;
  int32_t *l_10[3][3] = {{&g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3}};
  int i, j;
  ++g_11;
  return g_9[1];
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
  for (i = 0; i < 2; i++) {
    transparent_crc(g_9[i], "g_9[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_11, "g_11", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
