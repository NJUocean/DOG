// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S1 {
  volatile int8_t f0;
};
#pragma pack(pop)

struct S4 {
  signed f0 : 7;
  volatile unsigned f1 : 22;
  signed f2 : 27;
  unsigned f3 : 30;
};

static int32_t g_6 = 0x6917AB6DL;
static volatile int64_t g_8 = (-2L);
static uint64_t g_9 = 0x8D06721F7D96711DLL;
static struct S1 g_12 = {-9L};
static volatile struct S4 g_13[1][1][3] = {{{{1, 1271, -7955, 17830}, {1, 1271, -7955, 17830}, {1, 1271, -7955, 17830}}}};
static volatile struct S4 g_14 = {7, 1012, 10912, 32303};

static const int16_t func_1(void);
static struct S1 func_2(int32_t p_3);

static const int16_t func_1(void) {
  int8_t l_4[4];
  int i;
  for (i = 0; i < 4; i++)
    l_4[i] = 0L;
  g_14 = (func_2(l_4[3]), g_13[0][0][2]);
  return g_13[0][0][2].f1;
}

static struct S1 func_2(int32_t p_3) {
  int32_t *l_5 = &g_6;
  int32_t *l_7[1][1];
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++)
      l_7[i][j] = (void *)0;
  }
  g_9--;
  return g_12;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_13[i][j][k].f0, "g_13[i][j][k].f0", print_hash_value);
        transparent_crc(g_13[i][j][k].f1, "g_13[i][j][k].f1", print_hash_value);
        transparent_crc(g_13[i][j][k].f2, "g_13[i][j][k].f2", print_hash_value);
        transparent_crc(g_13[i][j][k].f3, "g_13[i][j][k].f3", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
  transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
  transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
