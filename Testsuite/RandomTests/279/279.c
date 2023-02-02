// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[3][4][3] = {{{(-5L), 0xD3F46721L, 0xD3F46721L}, {0x1C08901FL, 0xD3F46721L, 0xC19C5A65L}, {(-1L), (-5L), 0xDF603FA7L}, {0x1C08901FL, 0x1C08901FL, 0xDF603FA7L}}, {{(-5L), (-1L), 0xC19C5A65L}, {0xD3F46721L, 0x1C08901FL, 0xD3F46721L}, {0xD3F46721L, (-5L), 0x1C08901FL}, {(-5L), 0xD3F46721L, 0xD3F46721L}}, {{0x1C08901FL, 0xD3F46721L, 0xC19C5A65L}, {(-1L), (-5L), 0xDF603FA7L}, {0x1C08901FL, 0x1C08901FL, 0xDF603FA7L}, {(-5L), (-1L), 0xC19C5A65L}}};
static int32_t g_3 = 0x41449C9FL;
static volatile int32_t g_8[5] = {0x3D783989L, 0x3D783989L, 0x3D783989L, 0x3D783989L, 0x3D783989L};
static int32_t g_9 = 1L;
static volatile int32_t g_12 = 1L;
static int32_t g_13 = 0x3672D714L;
static int32_t g_22 = 0x4292978DL;
static uint8_t g_24[2][1] = {{0xA0L}, {0xA0L}};
static uint8_t g_37 = 0xC1L;
static int32_t g_40 = 0xD0E101EAL;
static int32_t *g_42 = (void *)0;
static int32_t **volatile g_41[5][5] = {{&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42, &g_42}};
static int32_t **const volatile g_43 = (void *)0;
static int32_t **volatile g_44 = &g_42;

static int16_t func_1(void);
static int32_t *func_14(int32_t *p_15, int16_t p_16, uint32_t p_17, int8_t p_18, const int8_t p_19);

static int16_t func_1(void) {
  int32_t *l_20 = &g_13;
  uint32_t l_21 = 0UL;
  uint8_t *l_38 = (void *)0;
  for (g_3 = (-7); (g_3 >= (-15)); g_3 = safe_sub_func_uint32_t_u_u(g_3, 2)) {
    return g_2[2][0][1];
  }
  for (g_3 = 0; (g_3 > 16); g_3++) {
    uint8_t *l_32 = (void *)0;
    int32_t l_35[4] = {(-9L), (-9L), (-9L), (-9L)};
    int i;
    for (g_9 = 0; (g_9 != 10); g_9 = safe_add_func_int64_t_s_s(g_9, 5)) {
      uint64_t l_27 = 0xC0B333EE67684593LL;
      uint8_t *l_36 = &g_37;
      for (g_13 = 2; (g_13 >= 0); g_13 -= 1) {
        uint8_t *l_23 = &g_24[1][0];
        (*g_44) = func_14(l_20, (g_22 = l_21), (((*l_23)--) <= ((l_36 = (((l_27 >= (safe_mul_func_int64_t_s_s((g_12 == (safe_div_func_int8_t_s_s(((l_32 != (void *)0) & 0xC5A74D4BL), (((((safe_rshift_func_uint32_t_u_u(l_35[2], g_3)) == l_35[2]) & g_9) != 0xC6EB81F9L) & l_35[2])))), l_27))) <= l_35[2]), l_36)) == l_38)), g_9, (*l_20));
      }
    }
    return g_2[1][3][1];
  }
  return g_12;
}

static int32_t *func_14(int32_t *p_15, int16_t p_16, uint32_t p_17, int8_t p_18, const int8_t p_19) {
  int32_t *l_39[4];
  int i;
  for (i = 0; i < 4; i++)
    l_39[i] = &g_40;
  g_2[2][2][1] = (g_40 = (*p_15));
  return l_39[3];
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
      for (k = 0; k < 3; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_8[i], "g_8[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
