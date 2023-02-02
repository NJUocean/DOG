// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 9L;
static volatile int32_t g_3[1][4] = {{8L, 8L, 8L, 8L}};
static int32_t g_4 = 0x9F845D81L;
static uint32_t g_10 = 0xCAFE8B0DL;
static int32_t g_12 = 0L;

static int16_t func_1(void);

static int16_t func_1(void) {
  for (g_4 = 0; (g_4 > (-19)); g_4 = safe_sub_func_int32_t_s_s(g_4, 3)) {
    uint32_t *l_9 = &g_10;
    int32_t *l_11 = &g_12;
    (*l_11) = (safe_div_func_uint32_t_u_u((g_2 && 0L), ((*l_9) = g_4)));
  }
  return g_3[0][0];
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
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
