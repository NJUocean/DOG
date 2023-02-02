// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = (-1L);
static int32_t *volatile g_3 = &g_4;
static int32_t g_12 = 0x4D0289A6L;

static int64_t func_1(void);
static int32_t func_7(int64_t p_8, const uint32_t p_9);

static int64_t func_1(void) {
  uint8_t l_2 = 255UL;
  int32_t l_18 = 0xBA75A592L;
  (*g_3) |= l_2;
  l_18 = (g_4 & (safe_rshift_func_uint32_t_u_s(g_4, func_7(g_4, l_2))));
  return g_4;
}

static int32_t func_7(int64_t p_8, const uint32_t p_9) {
  uint8_t l_13[3];
  int i;
  for (i = 0; i < 3; i++)
    l_13[i] = 7UL;
  if ((+0UL)) {
    int32_t *l_11 = &g_12;
    (*l_11) = 1L;
    for (p_8 = 0; (p_8 <= 2); p_8 += 1) {
      int i;
      return l_13[p_8];
    }
  } else {
    int32_t *l_15 = &g_4;
    int32_t **l_14 = &l_15;
    int32_t ***l_16 = &l_14;
    uint32_t l_17 = 0UL;
    (*l_16) = l_14;
    return l_17;
  }
  return l_13[1];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
