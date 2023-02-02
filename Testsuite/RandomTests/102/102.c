// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x84B81147L;
static volatile int32_t g_5 = 0xD509978FL;
static int32_t g_6 = (-8L);
static volatile int32_t g_9 = 0xB055CC25L;
static int32_t g_10[4] = {1L, 1L, 1L, 1L};

static uint8_t func_1(void);

static uint8_t func_1(void) {
  uint32_t l_13 = 1UL;
  for (g_2 = 0; (g_2 > 14); g_2 = safe_add_func_uint8_t_u_u(g_2, 4)) {
    for (g_6 = 20; (g_6 == 24); g_6++) {
      if (g_6)
        break;
      for (g_10[0] = 0; (g_10[0] < 21); g_10[0] = safe_add_func_uint8_t_u_u(g_10[0], 1)) {
        return g_5;
      }
    }
  }
  return l_13;
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
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_10[i], "g_10[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
