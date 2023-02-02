// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  volatile int8_t f0;
  int32_t f1;
  uint64_t f2;
  uint64_t f3;
  int32_t f4;
};

static volatile int32_t g_2[2][1][3] = {{{1L, 1L, 1L}}, {{1L, 1L, 1L}}};
static int32_t g_3 = 1L;
static const union U2 g_14 = {-9L};

static const union U2 func_1(void);

static const union U2 func_1(void) {
  int32_t *l_6 = &g_3;
  int32_t *l_8 = &g_3;
  int32_t *l_9 = (void *)0;
  int32_t *l_10[1][3];
  uint32_t l_11 = 4294967290UL;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++)
      l_10[i][j] = &g_3;
  }
  for (g_3 = 0; (g_3 >= (-7)); --g_3) {
    int32_t **l_7 = &l_6;
    (*l_7) = l_6;
  }
  l_11--;
  return g_14;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
