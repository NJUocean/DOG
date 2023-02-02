// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 0x51DA622AL;
static int8_t g_10 = 0xD2L;
static volatile int32_t g_12 = 0xCBCB1A7AL;
static int64_t g_13 = (-1L);
static uint8_t g_14 = 0x58L;

static int8_t func_1(void);

static int8_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t l_4 = 0x79E672CAL;
  int32_t *l_5 = (void *)0;
  int32_t l_6 = 0xADF1ADB2L;
  int32_t *l_7 = (void *)0;
  int32_t *l_8 = &l_6;
  int32_t *l_9[4];
  int64_t l_11[5] = {0x44CF592758E92EDALL, 0x44CF592758E92EDALL, 0x44CF592758E92EDALL, 0x44CF592758E92EDALL, 0x44CF592758E92EDALL};
  int i;
  for (i = 0; i < 4; i++)
    l_9[i] = (void *)0;
  g_14++;
  return g_10;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
