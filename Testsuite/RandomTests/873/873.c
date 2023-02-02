// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint8_t f0;
  int32_t f1;
};

union U2 {
  const uint8_t f0;
  uint32_t f1;
};

static int32_t g_2 = (-1L);
static int32_t g_6[3][3] = {{(-7L), (-7L), (-7L)}, {0x952EAA29L, 0x952EAA29L, 0x952EAA29L}, {(-7L), (-7L), (-7L)}};
static int16_t g_26 = 0x6FBDL;
static int32_t g_27 = 1L;
static int32_t *g_37[5] = {&g_2, &g_2, &g_2, &g_2, &g_2};
static int32_t **g_36 = &g_37[3];
static int32_t g_39 = 0x251ABE71L;
static union U2 g_40 = {0xAEL};

static union U2 func_1(void);
static int64_t func_11(int32_t p_12, int32_t *p_13, uint16_t p_14, int32_t *p_15, uint64_t p_16);

static union U2 func_1(void) {
  int32_t l_7[1][2][3];
  int32_t *l_21 = &g_6[2][1];
  int32_t *l_23 = &g_6[1][2];
  int32_t **l_22 = &l_23;
  union U0 l_24 = {0xC0L};
  int16_t *l_25 = &g_26;
  int32_t l_30[5][5] = {{0x30F888C5L, 0x30F888C5L, 0x30F888C5L, 0x30F888C5L, 0x30F888C5L}, {(-5L), 2L, (-5L), 2L, (-5L)}, {0x30F888C5L, 0x30F888C5L, 0x30F888C5L, 0x30F888C5L, 0x30F888C5L}, {(-5L), 2L, (-5L), 2L, (-5L)}, {0x30F888C5L, 0x30F888C5L, 0x30F888C5L, 0x30F888C5L, 0x30F888C5L}};
  int32_t l_31[2][3][5] = {{{0L, (-6L), 0x2BC8F961L, 0x8CBD6CD5L, 0x2BC8F961L}, {0x2BC8F961L, 0x2BC8F961L, 0x2BC8F961L, 0xB72B416CL, (-6L)}, {0L, 0x8CBD6CD5L, 0x8CBD6CD5L, 0L, 0x404D4644L}}, {{0L, 0xB72B416CL, 1L, 1L, 0xB72B416CL}, {0x404D4644L, 0x8CBD6CD5L, 1L, 0x2BC8F961L, 0x2BC8F961L}, {0x8CBD6CD5L, 0x404D4644L, 0x8CBD6CD5L, 1L, 0x2BC8F961L}}};
  int32_t *l_38 = &g_39;
  int i, j, k;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++)
        l_7[i][j][k] = (-1L);
    }
  }
  for (g_2 = 5; (g_2 != 3); --g_2) {
    int32_t *l_5[5][3][1] = {{{(void *)0}, {&g_6[2][1]}, {&g_6[2][1]}}, {{(void *)0}, {&g_6[2][1]}, {&g_6[2][1]}}, {{(void *)0}, {&g_6[2][1]}, {&g_6[2][1]}}, {{(void *)0}, {&g_6[2][1]}, {&g_6[2][1]}}, {{(void *)0}, {&g_6[2][1]}, {&g_6[2][1]}}};
    uint32_t l_8 = 3UL;
    int i, j, k;
    --l_8;
  }
  (*l_38) ^= (func_11(((safe_lshift_func_int32_t_s_u(((((g_6[2][1], l_21) == (void *)0) > (&g_6[0][2] != ((*l_22) = l_21))) <= (l_24, ((g_27 = ((*l_25) ^= ((-1L) ^ g_2))) >= (safe_sub_func_uint32_t_u_u(2UL, l_30[1][4]))))), 29)), 0x4B6749EFL), &g_6[0][1], (*l_21), &l_30[1][4], l_31[0][0][1]) && (*l_21));
  return g_40;
}

static int64_t func_11(int32_t p_12, int32_t *p_13, uint16_t p_14, int32_t *p_15, uint64_t p_16) {
  int32_t *l_33[3];
  int32_t **l_32 = &l_33[1];
  int32_t ***l_34 = (void *)0;
  int32_t ***l_35[2][3][2] = {{{&l_32, &l_32}, {&l_32, &l_32}, {&l_32, &l_32}}, {{&l_32, &l_32}, {&l_32, &l_32}, {&l_32, &l_32}}};
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_33[i] = &g_27;
  g_36 = l_32;
  (*g_36) = (void *)0;
  return p_14;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
