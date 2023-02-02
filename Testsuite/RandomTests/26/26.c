// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  const int8_t f0;
  volatile uint8_t f1;
  int32_t f2;
};

static volatile int32_t g_3 = 0xDE0B4074L;
static volatile int32_t *volatile g_2 = &g_3;
static int32_t g_8 = 0xF0AA6E6FL;
static int32_t *g_7 = &g_8;
static union U0 g_10 = {0xC1L};
static int32_t g_13[5][4][4] = {{{0x1943C6FEL, 0x31D14CD4L, 0x1943C6FEL, 0xAAF0A9B2L}, {0xAAED6B65L, 0x31D14CD4L, 0xEC3203BDL, (-1L)}, {0x31D14CD4L, 1L, 1L, 0x31D14CD4L}, {0x1943C6FEL, (-1L), 1L, 0xAAF0A9B2L}},
                                {{0x31D14CD4L, 0xAAED6B65L, 0xEC3203BDL, 0xAAED6B65L}, {0xAAED6B65L, 1L, 0x1943C6FEL, 0xAAED6B65L}, {0x1943C6FEL, 0xAAED6B65L, 0xAAF0A9B2L, 0xAAF0A9B2L}, {(-1L), (-1L), 0xEC3203BDL, 0x31D14CD4L}},
                                {{(-1L), 1L, 0xAAF0A9B2L, (-1L)}, {0x1943C6FEL, 0x31D14CD4L, 0x1943C6FEL, 0xAAF0A9B2L}, {0xAAED6B65L, 0x31D14CD4L, 0xEC3203BDL, (-1L)}, {0x31D14CD4L, 1L, 0xEC3203BDL, 1L}},
                                {{(-7L), 0x1943C6FEL, 0xEC3203BDL, 1L}, {1L, 0xAAF0A9B2L, (-1L), 0xAAF0A9B2L}, {0xAAF0A9B2L, 0xEC3203BDL, (-7L), 0xAAF0A9B2L}, {(-7L), 0xAAF0A9B2L, 1L, 1L}},
                                {{0x1943C6FEL, 0x1943C6FEL, (-1L), 1L}, {0x1943C6FEL, 0xEC3203BDL, 1L, 0x1943C6FEL}, {(-7L), 1L, (-7L), 1L}, {0xAAF0A9B2L, 1L, (-1L), 0x1943C6FEL}}};

static int64_t func_1(void);
static int32_t func_5(int32_t *p_6);

static int64_t func_1(void) {
  volatile int32_t *volatile *l_4 = (void *)0;
  int32_t *l_12 = &g_13[4][0][3];
  g_2 = g_2;
  (*l_12) = ((*g_7) = func_5(g_7));
  return g_13[3][1][3];
}

static int32_t func_5(int32_t *p_6) {
  union U0 *l_9 = &g_10;
  int32_t l_11 = (-2L);
  l_9 = l_9;
  (*g_7) = (*p_6);
  return l_11;
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
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_13[i][j][k], "g_13[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
