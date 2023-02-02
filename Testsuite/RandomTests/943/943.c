// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 13;
  unsigned f1 : 14;
};

static int32_t g_3 = (-1L);
static int32_t g_6 = 0x63FFAF07L;
static int8_t g_7[4] = {0L, 0L, 0L, 0L};
static volatile uint32_t g_8 = 18446744073709551610UL;
static const struct S0 g_11 = {6, 109};

static const struct S0 func_1(void);

static const struct S0 func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t l_4 = 1L;
  int32_t *l_5[2][5] = {{(void *)0, (void *)0, &g_3, (void *)0, (void *)0}, {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}};
  int i, j;
  g_8++;
  return g_11;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
  transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
