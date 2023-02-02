// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-1L);
static volatile int32_t g_3 = 0x05BAF43BL;
static volatile int32_t g_4 = (-1L);
static volatile int32_t g_5 = 1L;
static int32_t g_6[5] = {0x97EEDE0BL, 0x97EEDE0BL, 0x97EEDE0BL, 0x97EEDE0BL, 0x97EEDE0BL};
static int8_t g_10 = 0x44L;

static uint16_t func_1(void);

static uint16_t func_1(void) {
  for (g_6[2] = 0; (g_6[2] != 9); ++g_6[2]) {
    uint32_t l_9 = 0x07D7C118L;
    g_10 |= (g_2 || (g_3 && l_9));
  }
  return g_6[1];
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
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
