// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x6AF1124FL;
static volatile int32_t g_7[1] = {(-1L)};
static volatile int32_t g_8 = 0x5912491EL;
static volatile int32_t g_9 = (-10L);
static volatile int32_t g_10 = 0x9C9FB37BL;
static int32_t g_11 = (-6L);
static volatile int32_t g_14 = 7L;
static volatile int32_t g_15 = 0L;
static volatile int32_t g_16[5][2][2] = {{{0xD4E70302L, (-1L)}, {0x6C312FBBL, (-1L)}}, {{(-1L), (-1L)}, {0x6C312FBBL, (-1L)}}, {{0xD4E70302L, 0xD4E70302L}, {0xD4E70302L, (-1L)}}, {{0x6C312FBBL, (-1L)}, {(-1L), (-1L)}}, {{0x6C312FBBL, (-1L)}, {0xD4E70302L, 0xD4E70302L}}};
static int32_t g_17 = 0x33037736L;

static int32_t func_1(void);

static int32_t func_1(void) {
lbl_18:
  for (g_2 = 0; (g_2 == 11); ++g_2) {
    return g_2;
  }
  for (g_2 = (-28); (g_2 >= (-26)); g_2 = safe_add_func_int16_t_s_s(g_2, 1)) {
    for (g_11 = 0; (g_11 >= 4); g_11 = safe_add_func_int8_t_s_s(g_11, 6)) {
      volatile int32_t *l_19 = (void *)0;
      for (g_17 = 0; (g_17 >= 0); g_17 -= 1) {
        int i;
        if (g_2)
          goto lbl_18;
        l_19 = &g_7[g_17];
      }
    }
  }
  return g_8;
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
  for (i = 0; i < 1; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_16[i][j][k], "g_16[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_17, "g_17", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}