// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint16_t g_8 = 0xAC45L;
static int32_t g_12 = 0x8F576C51L;

static int8_t func_1(void);
static uint16_t func_2(uint8_t p_3, const int16_t p_4, int32_t p_5, uint32_t p_6, uint16_t p_7);

static int8_t func_1(void) {
  uint8_t l_19 = 1UL;
  int32_t l_20[4] = {0x17B722BAL, 0x17B722BAL, 0x17B722BAL, 0x17B722BAL};
  int i;
  l_20[1] &= ((func_2(g_8, g_8, g_8, g_8, (safe_rshift_func_uint64_t_u_s(g_8, 1))) <= ((safe_rshift_func_uint64_t_u_u(8UL, ((safe_rshift_func_uint8_t_u_u((l_19 < 0UL), l_19)) && g_12))) & l_19)) | (-6L));
  return l_20[3];
}

static uint16_t func_2(uint8_t p_3, const int16_t p_4, int32_t p_5, uint32_t p_6, uint16_t p_7) {
  int32_t *l_11 = &g_12;
  l_11 = l_11;
  return g_8;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
