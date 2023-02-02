// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0x10C93B4EL;
static int32_t g_3 = 0L;
static volatile int32_t g_7 = 0L;
static volatile int32_t g_8 = 0L;
static volatile int32_t g_9[3][1][3] = {{{0x13A6C9CDL, 0x13A6C9CDL, 0x13A6C9CDL}}, {{(-4L), 0xCE008FB0L, (-4L)}}, {{0x13A6C9CDL, 0x13A6C9CDL, 0x13A6C9CDL}}};
static int32_t g_10 = 3L;
static volatile int32_t g_11 = 1L;
static int32_t g_12 = 0xDE64F6CBL;

static uint8_t func_1(void);

static uint8_t func_1(void) {
  int32_t l_13[5] = {(-1L), (-1L), (-1L), (-1L), (-1L)};
  int i;
  for (g_3 = 13; (g_3 >= 20); g_3++) {
    int32_t l_6[5][3][3] = {{{0x3E31551DL, 0x3E31551DL, 9L}, {0xBC40ED3CL, 0x17F75960L, 0xBC40ED3CL}, {0x3E31551DL, 0L, 0L}}, {{0x2C87A752L, 0x17F75960L, 0xE672CA3CL}, {(-1L), 0x3E31551DL, 0L}, {0xBC40ED3CL, 0x0A233712L, 0xBC40ED3CL}}, {{(-1L), 0L, 9L}, {0x2C87A752L, 0x0A233712L, 0xE672CA3CL}, {0x3E31551DL, 0x3E31551DL, 9L}}, {{0xBC40ED3CL, 0x17F75960L, 0xBC40ED3CL}, {0x3E31551DL, 0L, 0L}, {0x2C87A752L, 0x17F75960L, 0xE672CA3CL}}, {{(-1L), 0x3E31551DL, 0L}, {0xBC40ED3CL, 0x0A233712L, 0xBC40ED3CL}, {(-1L), 0L, 9L}}};
    int i, j, k;
    for (g_10 = 0; (g_10 <= 2); g_10 += 1) {
      if (g_3)
        break;
      for (g_12 = 2; (g_12 >= 0); g_12 -= 1) {
        int i, j, k;
        return l_6[(g_10 + 1)][g_10][g_12];
      }
    }
  }
  return l_13[3];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
