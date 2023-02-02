// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[5][1] = {{0x8D32FFABL}, {0x8D32FFABL}, {0x8D32FFABL}, {0x8D32FFABL}, {0x8D32FFABL}};
static int32_t g_5 = 0xFAFD11D9L;
static uint64_t g_6 = 0xD697E780CA9F8D19LL;
static int16_t g_18 = 1L;
static int32_t *g_30 = (void *)0;

static uint64_t func_1(void);
static int32_t *const func_9(uint32_t p_10, int8_t p_11);

static uint64_t func_1(void) {
  uint32_t l_2[5][2] = {{0xF5020F89L, 0xF5020F89L}, {0xF5020F89L, 0xF5020F89L}, {0xF5020F89L, 0xF5020F89L}, {0xF5020F89L, 0xF5020F89L}, {0xF5020F89L, 0xF5020F89L}};
  int32_t *l_33 = &g_3[2][0];
  int64_t l_34 = 0xDF2DDFDAF0B56FE1LL;
  int i, j;
  for (g_3[2][0] = 1; (g_3[2][0] >= 0); g_3[2][0] -= 1) {
    int32_t *l_4[2];
    int i;
    for (i = 0; i < 2; i++)
      l_4[i] = &g_5;
    --g_6;
    for (g_5 = 1; (g_5 >= 0); g_5 -= 1) {
      int64_t l_15 = 1L;
      int32_t *l_17 = &g_3[2][0];
      for (g_6 = 0; (g_6 <= 1); g_6 += 1) {
        int32_t **l_16 = &l_4[1];
        int32_t **l_27[3];
        int32_t **l_28[5] = {&l_4[0], &l_4[0], &l_4[0], &l_4[0], &l_4[0]};
        int32_t **l_29 = &l_4[0];
        int i, j;
        for (i = 0; i < 3; i++)
          l_27[i] = &l_17;
        (*l_29) = func_9(((~((l_2[(g_5 + 1)][g_3[2][0]] && g_5), (safe_add_func_int16_t_s_s((l_2[4][1] ^ 0xB9C279A2L), l_15)))), (((*l_16) = l_4[0]) != l_17)), (0UL <= l_2[1][1]));
        g_30 = l_4[0];
      }
    }
  }
  (*l_33) = (l_34 = (safe_rshift_func_int64_t_s_u((l_33 == l_33), 42)));
  return g_18;
}

static int32_t *const func_9(uint32_t p_10, int8_t p_11) {
  int32_t *const l_26 = &g_5;
  g_18 = g_3[3][0];
  for (g_18 = (-27); (g_18 != (-15)); g_18 = safe_add_func_uint16_t_u_u(g_18, 1)) {
    uint64_t l_21 = 18446744073709551607UL;
    l_21++;
    for (l_21 = 0; (l_21 <= 37); l_21++) {
      return l_26;
    }
  }
  return l_26;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
