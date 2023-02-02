// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[1][2] = {{0L, 0L}};
static int32_t g_3 = 0xAB8C3AD3L;
static int32_t g_6[3][3] = {{1L, 1L, 1L}, {0L, (-1L), 0L}, {1L, 1L, 1L}};
static int32_t g_10 = 0xFF3DE036L;

static int32_t func_1(void);

static int32_t func_1(void) {
  uint64_t l_15 = 0xEA33A4D1B40E11A7LL;
  for (g_3 = (-27); (g_3 >= (-1)); g_3 = safe_add_func_uint8_t_u_u(g_3, 4)) {
    uint16_t l_12[1];
    int i;
    for (i = 0; i < 1; i++)
      l_12[i] = 0UL;
    for (g_6[2][0] = (-9); (g_6[2][0] <= 10); ++g_6[2][0]) {
      int32_t *l_9 = &g_10;
      int32_t *l_11[1][3][2];
      int i, j, k;
      for (i = 0; i < 1; i++) {
        for (j = 0; j < 3; j++) {
          for (k = 0; k < 2; k++)
            l_11[i][j][k] = &g_10;
        }
      }
      l_12[0]--;
    }
  }
  return l_15;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
