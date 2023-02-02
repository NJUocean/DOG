// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S3 {
  const unsigned f0 : 28;
  volatile unsigned f1 : 26;
};

static int32_t g_3 = 0x5E3EDFA8L;
static int64_t g_4[1][2] = {{0L, 0L}};
static volatile int64_t g_5[5] = {0xE3CA3691F6F49C23LL, 0xE3CA3691F6F49C23LL, 0xE3CA3691F6F49C23LL, 0xE3CA3691F6F49C23LL, 0xE3CA3691F6F49C23LL};
static struct S3 g_9 = {7112, 4958};

static struct S3 func_1(void);

static struct S3 func_1(void) {
  int32_t *l_2[5][5][2] = {{{&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}}, {{(void *)0, &g_3}, {&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}, {(void *)0, &g_3}}, {{&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}}, {{(void *)0, &g_3}, {&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}, {(void *)0, &g_3}}, {{&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}, {(void *)0, &g_3}, {&g_3, &g_3}}};
  uint64_t l_6 = 18446744073709551615UL;
  int i, j, k;
  --l_6;
  return g_9;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 5; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
