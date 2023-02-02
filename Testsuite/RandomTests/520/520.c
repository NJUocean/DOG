// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3[3][4][5] = {{{1L, 0x93D0B548L, (-2L), 0x3E8E1B88L, (-2L)}, {0xFCF33F23L, 0xFCF33F23L, 5L, 8L, 0x5D9B4E94L}, {(-1L), (-2L), 0x5DE05DAEL, 4L, 1L}, {0x3CFCE294L, 5L, 1L, 5L, 0x3CFCE294L}}, {{(-10L), (-2L), 0xB2CFB631L, (-3L), 0x3E8E1B88L}, {8L, 0xFCF33F23L, 0x37C04CCBL, 0xF545EE28L, 0xF545EE28L}, {(-3L), 0x93D0B548L, (-3L), (-2L), 0x3E8E1B88L}, {0x210B999FL, 0xF545EE28L, 0xFCF33F23L, 0xB6FEB9E9L, 0x3CFCE294L}}, {{0x3E8E1B88L, 1L, 4L, 4L, 1L}, {0x37C04CCBL, 0x5D9B4E94L, 5L, 0xF545EE28L, 1L}, {(-10L), 0xB2CFB631L, 4L, 0x93D0B548L, (-1L)}, {0xFCF33F23L, 1L, 1L, 0xFCF33F23L, 0x46CDEAD9L}}};
static int32_t g_4[5][2][3] = {{{(-1L), 1L, 0L}, {1L, 0x7F05F432L, 1L}}, {{0xF4A8FE24L, (-1L), 0L}, {0x94ABC248L, 0x94ABC248L, 0x9EF4A042L}}, {{0xA7609FA8L, (-1L), (-1L)}, {0x9EF4A042L, 0x7F05F432L, 0xF88E10E5L}}, {{0xA7609FA8L, 1L, 0xA7609FA8L}, {0x94ABC248L, 0x9EF4A042L, 0xF88E10E5L}}, {{0xF4A8FE24L, 0xF4A8FE24L, (-1L)}, {1L, 0x9EF4A042L, 0x9EF4A042L}}};
static int32_t g_5 = 0x11FB8EB5L;

static uint8_t func_1(void);

static uint8_t func_1(void) {
  int16_t l_2[4];
  int i;
  for (i = 0; i < 4; i++)
    l_2[i] = 0x45CDL;
  for (g_3[0][2][3] = 3; (g_3[0][2][3] >= 0); g_3[0][2][3] -= 1) {
    for (g_4[4][0][2] = 0; (g_4[4][0][2] <= 3); g_4[4][0][2] += 1) {
      int i;
      return l_2[g_4[4][0][2]];
    }
  }
  for (g_5 = 28; (g_5 == 28); g_5++) {
    int32_t *l_9 = &g_3[0][2][3];
    int32_t **l_8 = &l_9;
    (*l_8) = (void *)0;
  }
  return g_4[4][0][2];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
