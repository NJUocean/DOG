// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int16_t g_2 = 0x526DL;
static int32_t g_4 = 9L;
static int32_t *volatile g_3 = &g_4;
static int32_t g_9 = 0L;
static int8_t g_10 = 0x47L;
static volatile uint64_t g_11[3] = {1UL, 1UL, 1UL};

static const int16_t func_1(void);

static const int16_t func_1(void) {
  int32_t *l_5 = &g_4;
  int32_t *l_6 = &g_4;
  int32_t *l_7 = &g_4;
  int32_t *l_8[4] = {&g_4, &g_4, &g_4, &g_4};
  int i;
  (*g_3) = g_2;
  g_11[2]--;
  return (*l_7);
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
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
