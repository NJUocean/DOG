// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[3] = {0xF9B2CFB6L, 0xF9B2CFB6L, 0xF9B2CFB6L};
static volatile int32_t g_3 = 0x6210B999L;
static volatile int32_t g_4[2][5][3] = {{{(-9L), (-9L), (-9L)}, {1L, 1L, 1L}, {(-9L), (-9L), (-9L)}, {1L, 1L, 1L}, {(-9L), (-9L), (-9L)}}, {{1L, 1L, 1L}, {(-9L), (-9L), (-9L)}, {1L, 1L, 1L}, {(-9L), (-9L), (-9L)}, {1L, 1L, 1L}}};
static volatile int32_t g_5 = 0x0D00585BL;
static int32_t g_6 = (-10L);

static int64_t func_1(void);

static int64_t func_1(void) {
  int8_t l_9 = 2L;
  for (g_6 = 0; (g_6 < 22); g_6 = safe_add_func_int64_t_s_s(g_6, 1)) {
    if (g_3)
      break;
  }
  return l_9;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
