// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const int64_t g_6 = 0xB9AE77AB3921DED6LL;
static uint64_t g_9 = 0xDBDA7FE64FD9E2A8LL;
static uint16_t g_11 = 0xE418L;
static uint16_t g_13 = 65535UL;
static uint16_t g_15 = 0x7A12L;
static int32_t g_18 = (-10L);

static uint32_t func_1(void);
static int32_t *func_2(int64_t p_3);

static uint32_t func_1(void) {
  uint16_t *l_10 = &g_11;
  uint16_t *l_12 = &g_13;
  uint16_t *l_14 = &g_15;
  uint16_t *l_16[5];
  int32_t *l_20[5][4][5] = {{{&g_18, &g_18, &g_18, &g_18, &g_18}, {&g_18, &g_18, (void *)0, &g_18, (void *)0}, {&g_18, &g_18, &g_18, &g_18, &g_18}, {(void *)0, &g_18, (void *)0, &g_18, &g_18}},
                            {{&g_18, &g_18, &g_18, &g_18, &g_18}, {&g_18, &g_18, &g_18, &g_18, &g_18}, {&g_18, &g_18, &g_18, &g_18, &g_18}, {&g_18, &g_18, (void *)0, &g_18, (void *)0}},
                            {{&g_18, &g_18, &g_18, &g_18, &g_18}, {(void *)0, &g_18, &g_18, &g_18, (void *)0}, {&g_18, &g_18, &g_18, &g_18, &g_18}, {(void *)0, &g_18, &g_18, &g_18, (void *)0}},
                            {{&g_18, &g_18, &g_18, &g_18, &g_18}, {(void *)0, &g_18, &g_18, &g_18, &g_18}, {&g_18, &g_18, &g_18, &g_18, &g_18}, {&g_18, &g_18, &g_18, &g_18, (void *)0}},
                            {{&g_18, &g_18, &g_18, &g_18, &g_18}, {(void *)0, &g_18, &g_18, &g_18, (void *)0}, {&g_18, &g_18, &g_18, &g_18, &g_18}, {(void *)0, &g_18, &g_18, &g_18, &g_18}}};
  int32_t **l_19 = &l_20[2][0][0];
  int i, j, k;
  for (i = 0; i < 5; i++)
    l_16[i] = &g_15;
  (*l_19) = func_2(((safe_add_func_int16_t_s_s(g_6, (safe_rshift_func_uint16_t_u_u(g_6, ((*l_12) = ((*l_10) &= g_9)))))) > (l_14 != l_16[1])));
  return g_15;
}

static int32_t *func_2(int64_t p_3) {
  int32_t *l_17 = &g_18;
  return l_17;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
