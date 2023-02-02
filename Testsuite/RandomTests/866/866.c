// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S1 {
  volatile signed f0 : 18;
  volatile unsigned f1 : 4;
};
#pragma pack(pop)

static volatile int64_t g_2 = (-1L);
static int32_t g_4 = 0xDA7FE64FL;
static int32_t g_7 = 0xE4A90611L;
static int8_t g_8 = 0xEEL;
static uint32_t g_9 = 0x10DD013DL;
static struct S1 g_12 = {-13, 3};

static struct S1 func_1(void);

static struct S1 func_1(void) {
  int32_t *l_3 = &g_4;
  int32_t *l_5 = &g_4;
  int32_t *l_6[3];
  int i;
  for (i = 0; i < 3; i++)
    l_6[i] = &g_4;
  --g_9;
  return g_12;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
  transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
