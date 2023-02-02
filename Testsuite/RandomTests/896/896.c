// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0xF4A8B108L;
static volatile int32_t g_3 = 0x56A9EF72L;
static volatile int32_t g_4 = 0xA6801FC3L;
static int32_t g_5[4][4] = {{(-1L), 1L, 1L, (-1L)}, {1L, (-1L), 0x2FDE2BBEL, 0xD94B4B13L}, {1L, 0x2FDE2BBEL, 1L, 0xAC488899L}, {(-1L), 0xD94B4B13L, 0xAC488899L, 0xAC488899L}};
static int32_t g_9 = 0x407858F9L;

static int64_t func_1(void);

static int64_t func_1(void) {
  uint32_t l_10 = 0xAB227D37L;
  for (g_5[1][1] = (-20); (g_5[1][1] < 8); g_5[1][1]++) {
    int32_t *l_8[4] = {&g_9, &g_9, &g_9, &g_9};
    int i;
    ++l_10;
  }
  return g_2;
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
