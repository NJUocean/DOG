// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[5][3][5] = {{{0L, 0x6BC3EC3DL, 0x37B04800L, 0L, 0L}, {0xA72C25FCL, 0x26C312FBL, 0L, 0x2491E29EL, 0x26C312FBL}, {0L, 0x6BC3EC3DL, 0x3D783989L, 0x091DF82DL, 0x091DF82DL}},
                               {{0x37B04800L, 0L, 0x37B04800L, 0L, 0x091DF82DL}, {0x29A3DF60L, 0L, 0xF4672159L, 0xA72C25FCL, 0x26C312FBL}, {0x6BC3EC3DL, 0xA72C25FCL, (-1L), 0x29A3DF60L, 0L}},
                               {{0x012E1DFEL, 0L, 0xF4672159L, 0x26C312FBL, (-1L)}, {0xA72C25FCL, 0x37B04800L, 0x37B04800L, 0xA72C25FCL, 0x012E1DFEL}, {0xA72C25FCL, 0x29A3DF60L, 0x3D783989L, 0x2491E29EL, 0x29A3DF60L}},
                               {{0x012E1DFEL, 0x26C312FBL, (-1L), (-1L), 0x012E1DFEL}, {0x26C312FBL, 1L, 0x41449C9FL, 0xF4672159L, (-1L)}, {0L, 0x37B04800L, 0L, 0x37B04800L, 0L}},
                               {{0x41449C9FL, 0x37B04800L, 1L, 0x3D783989L, 0x3026D8D3L}, {0x3026D8D3L, 1L, (-1L), 0L, 1L}, {0x37B04800L, 0x26C312FBL, 0x29A3DF60L, 0x37B04800L, 0x3026D8D3L}}};
static uint16_t g_15 = 65533UL;
static int32_t g_16 = 0x13CEF339L;
static uint8_t g_36 = 0xE4L;
static uint8_t g_37 = 0x44L;

static uint32_t func_1(void);
static int16_t func_10(int32_t *p_11);

static uint32_t func_1(void) {
  int32_t *l_2 = &g_3[0][0][1];
  int32_t l_4 = 0L;
  int32_t *l_5 = &g_3[0][0][1];
  int32_t *l_6[3];
  uint64_t l_7[5][1][3] = {{{0x74BE76D238E486AELL, 2UL, 0x74BE76D238E486AELL}}, {{0x74BE76D238E486AELL, 2UL, 0x74BE76D238E486AELL}}, {{0x74BE76D238E486AELL, 2UL, 0x74BE76D238E486AELL}}, {{0x74BE76D238E486AELL, 2UL, 0x74BE76D238E486AELL}}, {{0x74BE76D238E486AELL, 2UL, 0x74BE76D238E486AELL}}};
  int32_t l_35[1];
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_6[i] = &g_3[0][0][1];
  for (i = 0; i < 1; i++)
    l_35[i] = 0x51D5E8E0L;
  l_7[2][0][2]++;
  g_37 &= (g_36 ^= (func_10(&g_3[0][1][1]), l_35[0]));
  return g_3[0][0][1];
}

static int16_t func_10(int32_t *p_11) {
  int32_t *l_13 = (void *)0;
  int32_t **l_12 = &l_13;
  int32_t *l_14 = &g_3[0][0][1];
  int32_t l_25 = 0xF890BA5FL;
  int32_t l_26 = 4L;
  int32_t l_29[5];
  int i;
  for (i = 0; i < 5; i++)
    l_29[i] = 6L;
  g_15 |= (g_3[0][0][1] |= (((*l_12) = (void *)0) != l_14));
  for (g_15 = 0; (g_15 <= 2); g_15 += 1) {
    uint8_t l_17 = 255UL;
    int32_t l_28 = 0x8B7203FCL;
    if (g_3[1][0][4])
      break;
    for (g_16 = 2; (g_16 >= 0); g_16 -= 1) {
      int16_t l_27 = 0xAE88L;
      int32_t l_30 = 0x121ADF56L;
      int32_t l_31[1];
      int i;
      for (i = 0; i < 1; i++)
        l_31[i] = 0x7311EBC8L;
      --l_17;
      for (l_17 = 0; (l_17 <= 2); l_17 += 1) {
        int32_t l_20 = 0xA9961215L;
        int32_t *l_21 = &l_20;
        int32_t l_22 = (-8L);
        int32_t *l_23 = &l_20;
        int32_t *l_24[1];
        uint64_t l_32 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
          l_24[i] = &g_3[0][0][1];
        (*l_12) = &g_3[0][0][1];
        ++l_32;
      }
    }
  }
  return g_3[0][0][1];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
