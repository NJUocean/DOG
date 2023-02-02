// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_4 = 9L;
static uint64_t g_6 = 0x90A3CFCE2949F4FFLL;
static int32_t g_11[2][3] = {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}};

static uint64_t func_1(void);

static uint64_t func_1(void) {
  int64_t *l_2[1];
  int32_t l_3 = 0xFB023ED1L;
  uint64_t *l_5[3];
  int32_t l_7 = (-1L);
  int32_t l_8 = 0x48F4A8FEL;
  int32_t l_9 = 0x0426A760L;
  int32_t *l_10 = &g_11[0][2];
  int i;
  for (i = 0; i < 1; i++)
    l_2[i] = (void *)0;
  for (i = 0; i < 3; i++)
    l_5[i] = &g_6;
  (*l_10) = ((l_3 |= 0x5CDBE8E56F9B2CFBLL) ^ (l_9 |= (l_8 ^= ((0x4CCB63E8E1B88146LL ^ (l_7 |= ((l_2[0] != (void *)0) != g_4))) <= (1L != 0xD60A2215L)))));
  return g_4;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
