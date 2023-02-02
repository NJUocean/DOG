// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S3 {
  unsigned f0 : 23;
  const unsigned f1 : 9;
  signed f2 : 22;
  unsigned f3 : 29;
  const signed f4 : 13;
};

static int32_t g_3 = 0x969161D5L;
static struct S3 g_4[4][1][1] = {{{{2167, 2, 341, 17346, 76}}}, {{{1353, 2, 834, 18262, -40}}}, {{{2167, 2, 341, 17346, 76}}}, {{{1353, 2, 834, 18262, -40}}}};

static struct S3 func_1(void);

static struct S3 func_1(void) {
  uint32_t l_2[2];
  int i;
  for (i = 0; i < 2; i++)
    l_2[i] = 18446744073709551615UL;
  for (g_3 = 0; g_3 < 2; g_3 += 1) {
    l_2[g_3] = 2UL;
  }
  return g_4[2][0][0];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_4[i][j][k].f0, "g_4[i][j][k].f0", print_hash_value);
        transparent_crc(g_4[i][j][k].f1, "g_4[i][j][k].f1", print_hash_value);
        transparent_crc(g_4[i][j][k].f2, "g_4[i][j][k].f2", print_hash_value);
        transparent_crc(g_4[i][j][k].f3, "g_4[i][j][k].f3", print_hash_value);
        transparent_crc(g_4[i][j][k].f4, "g_4[i][j][k].f4", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
