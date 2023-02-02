// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_3 = 0xB770A77CL;
static volatile int32_t g_4[2][1][3] = {{{(-7L), 0x8AFA2FAFL, (-7L)}}, {{(-7L), 0x8AFA2FAFL, (-7L)}}};
static int32_t g_5 = (-1L);
static int32_t g_6 = 0x80CA9F8DL;
static int32_t *const *volatile g_10 = (void *)0;
static int32_t g_14[2][1][3] = {{{(-2L), 0L, (-2L)}}, {{(-2L), 0L, (-2L)}}};
static int32_t g_25 = 0xD2321210L;
static int32_t **g_35 = (void *)0;
static int32_t *g_39 = &g_25;
static int32_t *g_40[4][1] = {{&g_14[1][0][2]}, {&g_25}, {&g_14[1][0][2]}, {&g_25}};

static int64_t func_1(void);
static int32_t *func_7(int32_t *const p_8);

static int64_t func_1(void) {
  uint32_t l_2[1];
  int32_t *const l_9 = (void *)0;
  int32_t l_45 = 0xA21DEC74L;
  int32_t l_47 = 0x5F25AD92L;
  int32_t l_49 = 0x0040642FL;
  int32_t l_50[2][4] = {{1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}};
  int i, j;
  for (i = 0; i < 1; i++)
    l_2[i] = 4294967295UL;
  for (g_5 = 0; (g_5 >= 0); g_5 -= 1) {
    for (g_6 = 0; (g_6 >= 0); g_6 -= 1) {
      int i;
      return l_2[g_5];
    }
    g_40[3][0] = (g_39 = func_7(l_9));
    for (g_25 = 0; (g_25 >= 0); g_25 -= 1) {
      int i;
      return l_2[g_5];
    }
  }
  for (g_25 = (-19); (g_25 >= 0); g_25 = safe_add_func_int8_t_s_s(g_25, 7)) {
    int32_t *l_43 = &g_5;
    int32_t *l_44 = &g_14[0][0][0];
    int32_t *l_46 = &g_14[0][0][2];
    int32_t *l_48[1][3];
    int32_t l_51 = 0x153CDCE3L;
    uint16_t l_52 = 0UL;
    int i, j;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 3; j++)
        l_48[i][j] = &g_6;
    }
    --l_52;
  }
  return g_4[0][0][1];
}

static int32_t *func_7(int32_t *const p_8) {
  int32_t *const l_20 = &g_6;
  int32_t *l_38[3];
  int i;
  for (i = 0; i < 3; i++)
    l_38[i] = &g_5;
lbl_13:
  g_10 = g_10;
  for (g_6 = 0; (g_6 != 24); g_6 = safe_add_func_uint32_t_u_u(g_6, 4)) {
    uint64_t l_15 = 0xD402DA3C3D21462CLL;
    uint16_t l_22 = 65530UL;
    int32_t l_28 = 0x8ACC167DL;
    uint16_t l_34 = 0xBB1DL;
    if (g_6)
      goto lbl_13;
    for (g_14[0][0][0] = 0; (g_14[0][0][0] <= 0); g_14[0][0][0] += 1) {
      uint32_t l_29 = 0xE695EF2BL;
      int32_t ***l_36 = &g_35;
      int32_t *l_37 = &l_28;
      if ((l_22 |= ((l_15 >= (safe_mod_func_int32_t_s_s(0xFFD03B15L, l_15))) || (((void *)0 == l_20) > (!3L))))) {
        int8_t l_23 = (-5L);
        int32_t *l_24 = &g_25;
        int32_t *l_26 = &g_25;
        int32_t *l_27[5][2][1] = {{{&g_25}, {(void *)0}}, {{&g_25}, {(void *)0}}, {{&g_25}, {(void *)0}}, {{&g_25}, {(void *)0}}, {{&g_25}, {(void *)0}}};
        int i, j, k;
        ++l_29;
      } else {
        int32_t *l_32[1];
        int32_t **l_33 = &l_32[0];
        int i;
        for (i = 0; i < 1; i++)
          l_32[i] = (void *)0;
        (*l_33) = l_32[0];
      }
      (*l_37) |= (((l_20 == &l_28) | (l_34 = 0x2ED4L)) == (&p_8 != ((*l_36) = g_35)));
      for (l_22 = 0; (l_22 <= 0); l_22 += 1) {
        return l_38[1];
      }
    }
  }
  return l_38[1];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_25, "g_25", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
