// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  signed f0 : 19;
  int32_t f1;
  uint64_t f2;
  volatile uint32_t f3;
  volatile uint64_t f4;
};

static int32_t g_3[2] = {4L, 4L};
static const union U2 g_7 = {0x72CA3C0BL};

static const union U2 func_1(void);

static const union U2 func_1(void) {
  int32_t *l_2 = &g_3[1];
  int32_t **l_4 = &l_2;
  int32_t **l_5 = (void *)0;
  int32_t *l_6 = (void *)0;
  l_6 = ((*l_4) = l_2);
  return g_7;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
