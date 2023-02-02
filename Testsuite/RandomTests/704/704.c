// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const volatile unsigned f0 : 13;
  signed f1 : 14;
  signed f2 : 24;
  const unsigned f3 : 4;
};

static volatile int32_t g_2 = 0xD568D526L;
static volatile int32_t g_3[3][2][4] = {{{0x8588D0D3L, 1L, 0x93009CE4L, 0x93009CE4L}, {5L, 5L, 0x8588D0D3L, 0x93009CE4L}}, {{0xC443EB60L, 1L, 0xC443EB60L, 0x8588D0D3L}, {0xC443EB60L, 0x8588D0D3L, 0x8588D0D3L, 0xC443EB60L}}, {{5L, 0x8588D0D3L, 0x93009CE4L, 0x8588D0D3L}, {0x8588D0D3L, 1L, 0x93009CE4L, 0x93009CE4L}}};
static int32_t g_4 = 0x3C61C71BL;
static int32_t g_7 = (-4L);
static int32_t g_15 = 0xC02A3062L;
static int32_t g_24 = 1L;
static int8_t g_34 = 0x07L;
static int32_t g_39[1] = {(-3L)};
static const struct S0 g_55[2] = {{33, -96, 2158, 0}, {33, -96, 2158, 0}};

static const struct S0 func_1(void);
static uint8_t func_16(uint16_t p_17);

static const struct S0 func_1(void) {
  const int32_t *l_22 = &g_4;
  for (g_4 = (-15); (g_4 > (-5)); ++g_4) {
    uint32_t l_29[1];
    int i;
    for (i = 0; i < 1; i++)
      l_29[i] = 0x0AECAA70L;
    for (g_7 = 17; (g_7 == (-13)); g_7--) {
      int32_t *l_10 = (void *)0;
      int32_t *l_11[3];
      uint8_t l_12 = 0xC0L;
      int i;
      for (i = 0; i < 3; i++)
        l_11[i] = (void *)0;
      ++l_12;
      g_15 |= (g_7, g_3[1][0][0]);
    }
    for (g_7 = 0; (g_7 <= 1); g_7 += 1) {
      for (g_15 = 0; (g_15 <= 1); g_15 += 1) {
        int32_t *l_23 = &g_24;
        int32_t l_30 = (-10L);
        int32_t *l_31 = &l_30;
        int8_t *l_32 = (void *)0;
        int8_t *l_33 = &g_34;
        int i, j, k;
        g_3[(g_15 + 1)][g_15][(g_7 + 1)] = (func_16((safe_lshift_func_int16_t_s_s((((*l_23) = (g_3[(g_7 + 1)][g_7][g_15] && ((safe_lshift_func_int8_t_s_u((l_22 != (void *)0), 4)) | g_3[1][0][0]))) & (((*l_33) = ((g_4 == (safe_lshift_func_uint32_t_u_s((safe_mul_func_int32_t_s_s(0xE8E60A2FL, ((*l_31) = (((l_29[0] == l_30) >= 0x74L) && g_4)))), g_7))) == (*l_22))), g_4)), g_4))) == 0xB5L);
        return g_55[1];
      }
    }
  }
  return g_55[0];
}

static uint8_t func_16(uint16_t p_17) {
  uint16_t l_48 = 65534UL;
  int32_t l_51[1];
  int i;
  for (i = 0; i < 1; i++)
    l_51[i] = 0L;
  for (g_24 = 0; (g_24 == (-8)); g_24 = safe_sub_func_uint16_t_u_u(g_24, 8)) {
    int32_t *l_37 = (void *)0;
    int32_t *l_38 = &g_39[0];
    int32_t *l_40 = &g_39[0];
    int32_t *l_41 = &g_39[0];
    int32_t *l_42 = &g_39[0];
    int32_t *l_43 = (void *)0;
    int32_t *l_44 = &g_39[0];
    int32_t *l_45 = &g_39[0];
    int32_t *l_46 = &g_39[0];
    int32_t *l_47[1][1][1];
    uint64_t l_52 = 0x388A0F280869599ELL;
    int i, j, k;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 1; j++) {
        for (k = 0; k < 1; k++)
          l_47[i][j][k] = &g_39[0];
      }
    }
    l_48--;
    l_52--;
  }
  return p_17;
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
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_39[i], "g_39[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    transparent_crc(g_55[i].f0, "g_55[i].f0", print_hash_value);
    transparent_crc(g_55[i].f1, "g_55[i].f1", print_hash_value);
    transparent_crc(g_55[i].f2, "g_55[i].f2", print_hash_value);
    transparent_crc(g_55[i].f3, "g_55[i].f3", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
