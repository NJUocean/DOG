// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S3 {
  int32_t f0;
  uint8_t f1;
};

static int32_t g_9 = (-1L);
static int32_t *g_8 = &g_9;
static volatile uint16_t g_13 = 0x1462L;
static struct S3 g_18 = {0x8DF0442EL, 1UL};

static struct S3 func_1(void);
static const int32_t *func_2(int32_t *p_3, int32_t *const p_4, int32_t p_5, const int32_t *p_6, int32_t *const p_7);

static struct S3 func_1(void) {
  const int32_t *l_10 = &g_9;
  int32_t *const l_11[1][5][3] = {{{(void *)0, (void *)0, (void *)0}, {&g_9, &g_9, &g_9}, {(void *)0, (void *)0, (void *)0}, {&g_9, &g_9, &g_9}, {(void *)0, (void *)0, (void *)0}}};
  const int32_t **l_17 = &l_10;
  int i, j, k;
  (*l_17) = func_2(g_8, &g_9, g_9, l_10, l_11[0][0][1]);
  return g_18;
}

static const int32_t *func_2(int32_t *p_3, int32_t *const p_4, int32_t p_5, const int32_t *p_6, int32_t *const p_7) {
  int32_t *l_12[5] = {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0};
  const int32_t *l_16[3];
  int i;
  for (i = 0; i < 3; i++)
    l_16[i] = &g_9;
  g_13--;
  return l_16[2];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
  transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
