// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_2 = 0x3921DED6L;
static uint32_t g_4[4][2][2] = {{{0x55595070L, 1UL}, {0UL, 0x55595070L}}, {{0x64FD9E2AL, 0x64FD9E2AL}, {0x64FD9E2AL, 0x55595070L}}, {{0UL, 1UL}, {0x55595070L, 1UL}}, {{0UL, 0x55595070L}, {0x64FD9E2AL, 0x64FD9E2AL}}};
static uint32_t g_7 = 4294967290UL;
static const uint32_t *volatile g_6 = &g_7;
static uint8_t g_9[1] = {0xA9L};
static int32_t g_11 = 0xC67EE39FL;
static uint16_t g_20 = 65528UL;
static int8_t g_22 = (-1L);
static uint64_t g_32 = 0x927649690B2811FFLL;
static int32_t *g_36 = &g_11;
static int32_t **volatile g_35 = &g_36;

static uint64_t func_1(void);
static int32_t *func_12(uint8_t *p_13, int32_t p_14);

static uint64_t func_1(void) {
  uint32_t *l_3 = &g_4[0][1][1];
  int32_t l_5[1];
  uint8_t *l_8 = &g_9[0];
  int32_t *l_10 = &g_11;
  uint16_t *l_19 = &g_20;
  uint64_t *l_21 = (void *)0;
  int32_t *l_24 = &l_5[0];
  int32_t **l_23 = &l_24;
  int i;
  for (i = 0; i < 1; i++)
    l_5[i] = (-8L);
  (*l_10) &= ((0xE90A624CL != (((*l_3) = g_2) || l_5[0])) >= ((*l_8) = (l_3 != g_6)));
  (*l_23) = func_12(l_8, ((g_4[1][0][0] && (0x7AF2C9A130DFDDAELL < (safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((*l_19) = (l_10 == (void *)0)), 12)), (g_4[0][0][0] < (((g_22 &= 1UL), ((*l_23) = (void *)0)) != (void *)0)))))), g_7));
  return g_22;
}

static int32_t *func_12(uint8_t *p_13, int32_t p_14) {
  uint8_t l_25 = 252UL;
  int32_t l_28 = 0xDB62B2FAL;
  uint64_t *l_31[1][2];
  int32_t l_34 = 0x21F20595L;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_31[i][j] = &g_32;
  }
  l_34 |= ((l_25 < ((l_25 != ((safe_mul_func_uint32_t_u_u((l_28 &= p_14), (safe_div_func_uint64_t_u_u(g_4[2][0][1], (((void *)0 == &g_20) & l_25))))) & (g_32 |= l_25))) != (~g_4[0][1][1]))) <= l_25);
  (*g_35) = &g_11;
  return (*g_35);
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
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_9[i], "g_9[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
