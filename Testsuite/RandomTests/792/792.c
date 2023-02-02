// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[4] = {1L, 1L, 1L, 1L};
static volatile int32_t g_3 = 0x85B7F37CL;
static volatile int32_t g_4 = 5L;
static volatile int32_t g_5 = 1L;
static volatile int32_t g_6 = 0L;
static volatile int32_t g_7 = 0xDEAD9BACL;
static int32_t g_8 = (-1L);

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t l_11 = 0xE2949F4FL;
  for (g_8 = (-28); (g_8 < (-25)); g_8 = safe_add_func_uint32_t_u_u(g_8, 9)) {
    for (g_5 = 0; g_5 < 4; g_5 += 1) {
      g_2[g_5] = 0xB77278FAL;
    }
  }
  return l_11;
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
