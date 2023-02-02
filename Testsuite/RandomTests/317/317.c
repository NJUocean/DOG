// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 4L;
static int32_t g_4 = 0L;
static volatile uint16_t g_5 = 0xB666L;
static int32_t g_8 = (-1L);
static uint32_t g_9 = 0x065C2DD7L;

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_2[3];
  int i;
  for (i = 0; i < 3; i++)
    l_2[i] = &g_3;
  g_5--;
  g_9--;
  return g_9;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
