// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint64_t g_2 = 7UL;
static uint64_t g_4 = 0x47DC4B4E1265AB3ELL;
static int8_t g_9 = (-1L);
static int32_t g_12[5] = {3L, 3L, 3L, 3L, 3L};
static volatile uint64_t g_18 = 0UL;
static volatile uint64_t *const g_17 = &g_18;
static int32_t g_21[2] = {7L, 7L};

static int64_t func_1(void);
static int32_t func_6(int32_t p_7, uint64_t p_8);

static int64_t func_1(void) {
  uint64_t *l_3 = &g_4;
  uint64_t *l_5 = &g_2;
  int32_t l_10 = 0x950707DFL;
  int32_t l_19[1];
  int32_t *l_20 = &g_21[0];
  int i;
  for (i = 0; i < 1; i++)
    l_19[i] = (-7L);
  (*l_20) |= (((*l_5) = ((*l_3) ^= g_2)) <= (func_6(g_9, l_10) == (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint64_t_u_u(0UL, (l_3 != (l_10, g_17)))) >= (((l_10 && l_19[0]) || g_18) == g_9)) != g_9), 3))));
  return (*l_20);
}

static int32_t func_6(int32_t p_7, uint64_t p_8) {
  int32_t *l_11 = &g_12[2];
  (*l_11) = 0xDA7FE64FL;
  return g_9;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_12[i], "g_12[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_18, "g_18", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_21[i], "g_21[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
