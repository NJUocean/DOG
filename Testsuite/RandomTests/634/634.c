// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int8_t g_2 = 0L;

static uint32_t func_1(void);

static uint32_t func_1(void) {
  int32_t l_3[4][4][4] = {{{0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}, {0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}}, {{0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}, {0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}}, {{0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}, {0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}}, {{0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}, {0x03773672L, (-3L), 0xC312FBB6L, 1L}, {1L, (-3L), (-3L), 1L}}};
  int32_t *l_4 = &l_3[2][1][1];
  int i, j, k;
  (*l_4) = (g_2, l_3[2][1][1]);
  return g_2;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
