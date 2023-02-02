// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[3] = {(-5L), (-5L), (-5L)};
static volatile int8_t g_9 = 7L;

static uint16_t func_1(void);

static uint16_t func_1(void) {
  int32_t *l_2 = &g_3[1];
  int32_t *l_4 = &g_3[1];
  int32_t *l_5 = &g_3[1];
  int32_t *l_6 = &g_3[2];
  int32_t *l_7 = &g_3[1];
  int32_t *l_8[5];
  int16_t l_10 = (-1L);
  uint64_t l_11[4];
  int i;
  for (i = 0; i < 5; i++)
    l_8[i] = (void *)0;
  for (i = 0; i < 4; i++)
    l_11[i] = 0x9A7032F1EFAE07DFLL;
  --l_11[2];
  return (*l_5);
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
