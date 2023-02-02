// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[2][2][3] = {{{0x8FAAAEB9L, 0xDC4B4E12L, 0x8FAAAEB9L}, {0x68044455L, 0xE77AB392L, 0x68044455L}}, {{0x8FAAAEB9L, 0xDC4B4E12L, 0x8FAAAEB9L}, {0x68044455L, 0xE77AB392L, 0x68044455L}}};
static int32_t g_3 = (-1L);
static int32_t g_13[5][5] = {{(-1L), 0xEE39F3FAL, (-1L), (-1L), 0xEE39F3FAL}, {3L, 0L, 0L, 0x1A05132DL, 0L}, {0xEE39F3FAL, 0xEE39F3FAL, 0xD0F4F230L, 0xEE39F3FAL, 0xEE39F3FAL}, {0L, 0x1A05132DL, 0L, 0L, 3L}, {0xEE39F3FAL, (-1L), (-1L), 0xEE39F3FAL, (-1L)}};
static int32_t *g_12 = &g_13[4][4];
static int32_t *g_15 = (void *)0;
static int32_t **volatile g_16 = &g_15;
static int32_t **g_28 = &g_12;
static uint32_t g_30[4] = {0xE65FBC01L, 0xE65FBC01L, 0xE65FBC01L, 0xE65FBC01L};
static int32_t g_31 = 0x49145018L;

static uint32_t func_1(void);
static int32_t *func_9(uint64_t p_10);

static uint32_t func_1(void) {
  int32_t l_6 = 0L;
  int32_t *l_22 = &l_6;
  int32_t **l_23 = &g_12;
  for (g_3 = 16; (g_3 >= (-26)); g_3 = safe_sub_func_uint32_t_u_u(g_3, 8)) {
    return l_6;
  }
  for (g_3 = 0; (g_3 < (-29)); g_3--) {
    int32_t **l_21[2][1];
    int32_t ***l_24 = &l_21[1][0];
    int32_t ***l_25 = (void *)0;
    int32_t **l_27 = &g_12;
    int32_t ***l_26[4];
    uint32_t *l_29 = &g_30[3];
    int i, j;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 1; j++)
        l_21[i][j] = &g_15;
    }
    for (i = 0; i < 4; i++)
      l_26[i] = &l_27;
    (*g_16) = func_9(g_3);
    g_31 |= ((-3L) ^ ((0xB3799040C3F30B91LL != (0UL != (((safe_lshift_func_uint64_t_u_u(g_2[1][1][2], 31)) <= ((*l_29) |= ((safe_mod_func_uint32_t_u_u((g_13[1][4] >= ((l_22 = &l_6) == (((((*l_24) = l_23) == (g_28 = &g_12)) < g_3), (void *)0))), (*g_15))) >= g_13[4][4]))) | 0xF2059515L))) || 4UL));
  }
  return g_30[2];
}

static int32_t *func_9(uint64_t p_10) {
  int32_t *l_11[3];
  int32_t **l_14 = (void *)0;
  int i;
  for (i = 0; i < 3; i++)
    l_11[i] = &g_3;
  g_15 = (l_11[2] = (g_12 = l_11[2]));
  return l_11[2];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 4; i++) {
    transparent_crc(g_30[i], "g_30[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_31, "g_31", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
