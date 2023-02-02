// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[2] = {0x3A473EB9L, 0x3A473EB9L};
static int32_t g_3 = 0x98311173L;
static int16_t g_15 = 0x61B5L;
static int32_t g_17 = (-4L);
static volatile uint64_t g_34 = 1UL;

static int32_t func_1(void);
static int8_t func_9(uint8_t p_10, uint16_t p_11, int16_t p_12);

static int32_t func_1(void) {
  int32_t l_6 = 0xB6069300L;
  int32_t l_31 = (-10L);
  int32_t l_32 = 0x5E13CD4FL;
  int32_t l_33[5][5][3] = {{{0x8A57461DL, 0L, 0L}, {0L, 0L, 0xE945D447L}, {0x8A57461DL, 0xE945D447L, 0L}, {0L, 0xE945D447L, 0x8A57461DL}, {0xE945D447L, 0L, 0L}}, {{0L, 0L, 0x8A57461DL}, {1L, 0xD029B4CCL, 0L}, {1L, 4L, 0xE945D447L}, {0L, 0xCB407CB0L, 0L}, {0xE945D447L, 4L, 1L}}, {{0L, 0xD029B4CCL, 1L}, {0x8A57461DL, 0L, 0L}, {0L, 0L, 0xE945D447L}, {0x8A57461DL, 0xE945D447L, 0L}, {0L, 0xE945D447L, 1L}}, {{0L, (-1L), (-1L)}, {4L, 0xCB407CB0L, 1L}, {0L, 0x8A57461DL, 0xCB407CB0L}, {0L, 0xE945D447L, 0L}, {4L, 0x52E2CC7BL, 4L}}, {{0L, 0xE945D447L, 0L}, {0xCB407CB0L, 0x8A57461DL, 0L}, {1L, 0xCB407CB0L, 4L}, {(-1L), (-1L), 0L}, {1L, 0L, 0xCB407CB0L}}};
  int i, j, k;
  for (g_3 = 0; (g_3 != (-6)); g_3 = safe_sub_func_uint16_t_u_u(g_3, 3)) {
    uint32_t l_13[1];
    int16_t *l_14 = &g_15;
    int32_t l_30 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
      l_13[i] = 1UL;
    if ((((l_6, g_2[0]), (safe_sub_func_int8_t_s_s(func_9(l_13[0], g_3, ((*l_14) = (l_6 < (-1L)))), (((safe_rshift_func_uint64_t_u_s(g_3, (safe_mul_func_int64_t_s_s((safe_mul_func_uint32_t_u_u((g_3 >= g_3), g_3)), 0L)))) | (-8L)), g_3)))) > l_6)) {
      uint32_t l_24 = 0x72C02A30L;
      return l_24;
    } else {
      int32_t *l_25 = (void *)0;
      int32_t *l_26 = &g_17;
      int32_t *l_27 = &g_17;
      int32_t *l_28 = (void *)0;
      int32_t *l_29[4];
      int i;
      for (i = 0; i < 4; i++)
        l_29[i] = &g_17;
      g_34++;
    }
  }
  return l_6;
}

static int8_t func_9(uint8_t p_10, uint16_t p_11, int16_t p_12) {
  int32_t *l_16 = &g_17;
  (*l_16) |= 0xE3E76316L;
  return g_2[0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
