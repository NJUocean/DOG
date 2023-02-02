// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0xA654FDDDL;
static volatile int32_t g_3[2][5] = {{0x9FB37B04L, 0x67215912L, 0x9FB37B04L, 0x9FB37B04L, 0x67215912L}, {0x67215912L, 0x9FB37B04L, 0x9FB37B04L, 0x67215912L, 0x9FB37B04L}};
static volatile int32_t g_4[5] = {0x72C25FCCL, 0x72C25FCCL, 0x72C25FCCL, 0x72C25FCCL, 0x72C25FCCL};
static volatile int32_t g_5 = (-1L);
static volatile int32_t g_6 = 0x091DF82DL;
static volatile int32_t g_7 = 0x78398922L;
static int32_t g_8 = 0x12FBB6BCL;
static int32_t g_12[3][4] = {{(-2L), (-2L), (-2L), (-2L)}, {(-2L), (-2L), (-2L), (-2L)}, {(-2L), (-2L), (-2L), (-2L)}};

static int16_t func_1(void);

static int16_t func_1(void) {
  uint32_t l_13 = 0xA22DB785L;
  for (g_8 = 0; (g_8 > (-24)); --g_8) {
    int32_t *l_11 = &g_12[1][2];
    (*l_11) ^= 0x83303773L;
  }
  return l_13;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 5; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
