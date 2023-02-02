// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const volatile int64_t f0;
  volatile int16_t f1;
};

static volatile uint32_t g_2 = 0x5B7F37C0L;
static volatile int32_t g_5 = 1L;
static volatile int32_t *volatile g_4 = &g_5;
static int32_t g_10 = 0xB77278FAL;
static union U1 g_11 = {1L};

static union U1 func_1(void);

static union U1 func_1(void) {
  volatile int32_t *l_3 = (void *)0;
  int32_t ***l_6 = (void *)0;
  int32_t *l_9 = &g_10;
  int32_t **l_8 = &l_9;
  int32_t ***l_7 = &l_8;
  (*g_4) = g_2;
  (*l_7) = (void *)0;
  return g_11;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
