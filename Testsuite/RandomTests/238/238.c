// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0L;
static volatile int32_t g_3[2][2] = {{0xC17633EFL, 0xC17633EFL}, {0xC17633EFL, 0xC17633EFL}};
static volatile int32_t g_4 = (-4L);
static volatile int32_t g_5[5] = {1L, 1L, 1L, 1L, 1L};
static volatile int32_t g_6 = 0xCB8CE3E6L;
static int32_t g_7 = 0x1551DA62L;

static int32_t func_1(void);

static int32_t func_1(void) {
  uint32_t l_10 = 4294967288UL;
  for (g_7 = 0; (g_7 >= 24); g_7 = safe_add_func_uint32_t_u_u(g_7, 9)) {
    return g_3[1][1];
  }
  return l_10;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
