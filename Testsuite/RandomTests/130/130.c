// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = 5L;
static volatile uint64_t g_6 = 0UL;
static volatile uint16_t g_12 = 0x2FE8L;

static int32_t func_1(void);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4[2];
  int16_t l_5 = 0x905DL;
  int i;
  for (i = 0; i < 2; i++)
    l_4[i] = (void *)0;
  ++g_6;
  for (g_3 = (-2); (g_3 == (-12)); g_3 = safe_sub_func_uint64_t_u_u(g_3, 6)) {
    int64_t l_11[1][4] = {{0xDC0E3E7631615E82LL, 0xDC0E3E7631615E82LL, 0xDC0E3E7631615E82LL, 0xDC0E3E7631615E82LL}};
    int i, j;
    g_12++;
    for (l_5 = (-26); (l_5 > (-30)); --l_5) {
      uint64_t l_17 = 0x213072C02A3062A4LL;
      l_17 = (*l_2);
    }
  }
  return (*l_2);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
