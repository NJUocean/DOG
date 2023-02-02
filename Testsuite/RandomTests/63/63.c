// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2[4][1][5] = {{{6L, 0x78D7CBAEL, 0x78D7CBAEL, 6L, 0x720D7006L}}, {{6L, 0x8AB79AE4L, 7L, 7L, 0x8AB79AE4L}}, {{0x720D7006L, 0x78D7CBAEL, 7L, 0xBC1C234AL, 0xBC1C234AL}}, {{0x78D7CBAEL, 0x720D7006L, 0x78D7CBAEL, 7L, 0xBC1C234AL}}};

static int8_t func_1(void);

static int8_t func_1(void) {
  uint16_t l_5 = 0x7772L;
  for (g_2[2][0][2] = 24; (g_2[2][0][2] < 12); g_2[2][0][2] = safe_sub_func_uint16_t_u_u(g_2[2][0][2], 1)) {
    return g_2[3][0][4];
  }
  return l_5;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
