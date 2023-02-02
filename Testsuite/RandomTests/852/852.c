// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const volatile int8_t g_7 = 0xA7L;
static int32_t g_12 = (-1L);

static const int16_t func_1(void);
static int8_t func_4(int32_t p_5);

static const int16_t func_1(void) {
  int32_t l_6 = 0x038591B6L;
  int8_t l_8 = 0x26L;
  g_12 &= ((safe_mod_func_int8_t_s_s(0xAAL, (((func_4((0x74L ^ ((l_6 && (g_7 & l_8)) != (!(-6L))))) > 255UL) >= (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((void *)0 != &l_6))), l_8))) & 5UL))), 0xD5FEAF86L);
  return l_6;
}

static int8_t func_4(int32_t p_5) {
  uint32_t l_10 = 18446744073709551611UL;
  uint64_t l_13[4];
  int i;
  for (i = 0; i < 4; i++)
    l_13[i] = 0UL;
  if (l_10) {
    return l_10;
  } else {
    int32_t *l_11 = &g_12;
    l_11 = l_11;
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
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
