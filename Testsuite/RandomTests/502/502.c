// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = (-7L);
static int32_t g_7[1][2] = {{0xDE2167FAL, 0xDE2167FAL}};
static volatile uint16_t g_11 = 1UL;

static int64_t func_1(void);

static int64_t func_1(void) {
  for (g_2 = 18; (g_2 > (-4)); g_2 = safe_sub_func_int32_t_s_s(g_2, 3)) {
    int32_t *l_5 = (void *)0;
    int32_t *l_6 = &g_7[0][0];
    int32_t *l_8 = (void *)0;
    int32_t *l_9 = &g_7[0][0];
    int32_t *l_10 = &g_7[0][0];
    ++g_11;
    return (*l_6);
  }
  return g_7[0][0];
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
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_11, "g_11", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
