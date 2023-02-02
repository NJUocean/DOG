// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = (-1L);
static int32_t g_6 = 0x863718BDL;
static uint8_t g_7[5][1] = {{4UL}, {4UL}, {4UL}, {4UL}, {4UL}};
static volatile int32_t g_10 = 0x8D06721FL;
static int32_t g_11 = 0x6711DB60L;
static int32_t g_15[1][5][4] = {{{0xF39281C1L, 0xF39281C1L, 0xF39281C1L, 0xF39281C1L}, {0xF39281C1L, 0xF39281C1L, 0xF39281C1L, 0xF39281C1L}, {0xF39281C1L, 0xF39281C1L, 0xF39281C1L, 0xF39281C1L}, {0xF39281C1L, 0xF39281C1L, 0xF39281C1L, 0xF39281C1L}, {0xF39281C1L, 0xF39281C1L, 0xF39281C1L, 0xF39281C1L}}};

static int32_t func_1(void);

static int32_t func_1(void) {
  int64_t l_5[4][5][2] = {{{0x0849F845D811F07BLL, 0x38DD44AD37400631LL}, {0x515466BC657E3B6FLL, 0x0849F845D811F07BLL}, {0x6E229EDCA8FECF79LL, (-8L)}, {0x6E229EDCA8FECF79LL, 0x0849F845D811F07BLL}, {0x515466BC657E3B6FLL, 0x38DD44AD37400631LL}}, {{0x0849F845D811F07BLL, (-4L)}, {(-3L), 0x0849F845D811F07BLL}, {(-8L), 0x6E229EDCA8FECF79LL}, {0x6E229EDCA8FECF79LL, 0xAFE8B0D193E0566ALL}, {(-3L), 0x38DD44AD37400631LL}}, {{0xAFE8B0D193E0566ALL, (-8L)}, {9L, 0xA2B3B7BEDEDB5CABLL}, {0xAFE8B0D193E0566ALL, 0xAFE8B0D193E0566ALL}, {0x1E124DC41FD9D089LL, 0x515466BC657E3B6FLL}, {9L, (-4L)}}, {{0x515466BC657E3B6FLL, (-8L)}, {0x13EC752F67D50F82LL, 0x515466BC657E3B6FLL}, {0xAFE8B0D193E0566ALL, 0x1E124DC41FD9D089LL}, {0xAFE8B0D193E0566ALL, 0x515466BC657E3B6FLL}, {0x13EC752F67D50F82LL, (-8L)}}};
  int32_t l_18[1];
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_18[i] = 1L;
  for (g_2 = (-15); (g_2 < (-18)); g_2 = safe_sub_func_int8_t_s_s(g_2, 2)) {
    int64_t l_13 = 0x22D5FBA2522ABF7CLL;
    int32_t l_23 = (-1L);
    int32_t l_24 = 0L;
    int32_t l_25 = (-1L);
    int32_t l_26 = 0x102D1F73L;
    int32_t l_27 = (-8L);
    int32_t l_28 = 5L;
    int32_t l_30 = 0x66485393L;
    int32_t l_31 = 0x9E808E27L;
    int32_t l_33[5];
    uint8_t l_34 = 0x44L;
    int i;
    for (i = 0; i < 5; i++)
      l_33[i] = 0xF2ABA01CL;
    for (g_6 = 1; (g_6 >= 0); g_6 -= 1) {
      uint16_t l_20 = 65528UL;
      int32_t l_29 = 0L;
      int32_t l_32 = (-1L);
      ++g_7[4][0];
      for (g_11 = 1; (g_11 >= 0); g_11 -= 1) {
        int32_t *l_12 = (void *)0;
        int32_t *l_14 = &g_15[0][1][0];
        int32_t *l_16 = (void *)0;
        int32_t *l_17[2][3][2] = {{{&g_6, &g_2}, {&g_6, &g_6}, {&g_2, &g_6}}, {{&g_6, &g_2}, {&g_6, &g_6}, {&g_2, &g_6}}};
        int32_t l_19[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
          l_19[i] = 0x0D4A7C76L;
        l_20--;
        --l_34;
      }
    }
  }
  return g_6;
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
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_15[i][j][k], "g_15[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
