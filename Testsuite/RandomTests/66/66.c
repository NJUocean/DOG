// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  const unsigned f0 : 24;
};
#pragma pack(pop)

static volatile int32_t g_2 = 0xDA8E97EEL;
static volatile int32_t g_3 = (-6L);
static int32_t g_4 = (-5L);

static struct S0 func_1(void);

static struct S0 func_1(void) {
  struct S0 l_7 = {3240};
  for (g_4 = 0; (g_4 < 1); g_4 = safe_add_func_int16_t_s_s(g_4, 6)) {
    if (g_4)
      break;
  }
  return l_7;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
