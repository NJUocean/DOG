// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0xEB6B9DD9L;
static int32_t *g_6 = (void *)0;
static int32_t **volatile g_5 = &g_6;
static int32_t g_27[3][1][4] = {{{0xE0C28056L, 8L, 0xE0C28056L, 0xE0C28056L}}, {{8L, 8L, 3L, 8L}}, {{8L, 0xE0C28056L, 0xE0C28056L, 8L}}};

static uint32_t func_1(void);
static uint8_t func_8(uint8_t p_9);

static uint32_t func_1(void) {
  int32_t **l_7 = &g_6;
  int32_t l_28[5];
  int i;
  for (i = 0; i < 5; i++)
    l_28[i] = 0xD0863E87L;
  for (g_2 = 0; (g_2 > 28); g_2 = safe_add_func_int8_t_s_s(g_2, 8)) {
    int16_t l_25 = 0x70CEL;
    int32_t *l_26[4] = {&g_27[1][0][2], &g_27[1][0][2], &g_27[1][0][2], &g_27[1][0][2]};
    int i;
    (*g_5) = &g_2;
    l_28[2] |= (((&g_6 == l_7) == func_8((&g_6 != (void *)0))) < ((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_2, (safe_lshift_func_int64_t_s_s(((g_2 && (((*l_7) = (*g_5)) != ((safe_add_func_int64_t_s_s(((void *)0 == &g_2), l_25)), &g_2))), (**l_7)), 13)))), g_2)) >= l_25));
  }
  return g_2;
}

static uint8_t func_8(uint8_t p_9) {
  int32_t l_12 = (-1L);
  int32_t *l_15[3];
  uint32_t l_16 = 6UL;
  int i;
  for (i = 0; i < 3; i++)
    l_15[i] = (void *)0;
  l_16 = (safe_rshift_func_int8_t_s_s((l_12 <= (((l_12 < ((void *)0 == &l_12)), (void *)0) != (void *)0)), (safe_lshift_func_uint16_t_u_s(p_9, 0))));
  return g_2;
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
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_27[i][j][k], "g_27[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
