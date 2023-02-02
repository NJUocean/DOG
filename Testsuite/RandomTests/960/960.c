// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_2[5][5][4] = {{{0x44A75432L, 4294967293UL, 4294967293UL, 0x44A75432L}, {4294967293UL, 0x44A75432L, 0xEDE0B407L, 0xD7C1188EL}, {4294967293UL, 0xEDE0B407L, 4294967293UL, 4294967294UL}, {0x44A75432L, 0xD7C1188EL, 4294967294UL, 4294967294UL}, {0xEDE0B407L, 0xEDE0B407L, 0x6F7FBF21L, 0xD7C1188EL}},
                                {{0xD7C1188EL, 0x44A75432L, 0x6F7FBF21L, 0x44A75432L}, {0xEDE0B407L, 4294967293UL, 4294967294UL, 0x6F7FBF21L}, {0x44A75432L, 4294967293UL, 4294967293UL, 0x44A75432L}, {4294967293UL, 0x44A75432L, 0xEDE0B407L, 0xD7C1188EL}, {4294967293UL, 0xEDE0B407L, 4294967293UL, 4294967294UL}},
                                {{0x44A75432L, 0xD7C1188EL, 4294967294UL, 4294967294UL}, {0xEDE0B407L, 0xEDE0B407L, 0xEDE0B407L, 4294967294UL}, {4294967294UL, 4294967293UL, 0xEDE0B407L, 4294967293UL}, {1UL, 0xD7C1188EL, 0x6F7FBF21L, 0xEDE0B407L}, {4294967293UL, 0xD7C1188EL, 0xD7C1188EL, 4294967293UL}},
                                {{0xD7C1188EL, 4294967293UL, 1UL, 4294967294UL}, {0xD7C1188EL, 1UL, 0xD7C1188EL, 0x6F7FBF21L}, {4294967293UL, 4294967294UL, 0x6F7FBF21L, 0x6F7FBF21L}, {1UL, 1UL, 0xEDE0B407L, 4294967294UL}, {4294967294UL, 4294967293UL, 0xEDE0B407L, 4294967293UL}},
                                {{1UL, 0xD7C1188EL, 0x6F7FBF21L, 0xEDE0B407L}, {4294967293UL, 0xD7C1188EL, 0xD7C1188EL, 4294967293UL}, {0xD7C1188EL, 4294967293UL, 1UL, 4294967294UL}, {0xD7C1188EL, 1UL, 0xD7C1188EL, 0x6F7FBF21L}, {4294967293UL, 4294967294UL, 0x6F7FBF21L, 0x6F7FBF21L}}};

static uint8_t func_1(void);

static uint8_t func_1(void) { return g_2[0][1][2]; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
