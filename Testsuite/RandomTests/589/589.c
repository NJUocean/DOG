// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile int8_t f0;
  const volatile uint8_t f1;
  int32_t f2;
};

static volatile int32_t g_2 = 0L;
static volatile int32_t g_3 = 0x29A3DF60L;
static int32_t g_4[4] = {0x75C19C5AL, 0x75C19C5AL, 0x75C19C5AL, 0x75C19C5AL};
static volatile int32_t g_7 = 0x9EA41449L;
static int32_t g_8 = 1L;
static volatile int32_t g_11[1] = {0xA012E1DFL};
static int32_t g_12 = 0xF82D83D7L;
static union U0 g_16 = {0xD8L};
static union U0 *g_18 = &g_16;
static union U0 **volatile g_17[2] = {&g_18, &g_18};
static int32_t **volatile g_28 = (void *)0;
static int32_t *g_31 = &g_12;

static uint32_t func_1(void);
static int32_t *func_21(int32_t *p_22, int64_t p_23);

static uint32_t func_1(void) {
  int32_t l_20 = 0xDB785B64L;
  int32_t *l_24 = (void *)0;
  int32_t **l_27 = &l_24;
  int32_t *l_30[4][4][2] = {{{&g_12, &l_20}, {&g_4[3], &l_20}, {&g_4[3], &l_20}, {&g_4[3], &g_4[3]}}, {{(void *)0, &g_4[3]}, {(void *)0, &g_4[3]}, {&g_4[3], &l_20}, {&g_4[3], &l_20}}, {{&g_4[3], &l_20}, {&g_12, &l_20}, {&l_20, &g_4[3]}, {&g_4[3], &g_4[3]}}, {{&l_20, &l_20}, {&g_12, &l_20}, {&g_4[3], &l_20}, {&g_4[3], &l_20}}};
  int32_t **l_29[3][2] = {{&l_30[3][1][0], &l_30[3][1][0]}, {&l_30[3][1][0], &l_30[3][1][0]}, {&l_30[3][1][0], &l_30[3][1][0]}};
  int i, j, k;
  for (g_4[3] = 11; (g_4[3] <= (-5)); --g_4[3]) {
    union U0 *l_15 = &g_16;
    for (g_8 = 0; (g_8 == 9); g_8 = safe_add_func_uint8_t_u_u(g_8, 6)) {
      for (g_12 = 0; (g_12 != 12); g_12 = safe_add_func_uint32_t_u_u(g_12, 3)) {
        union U0 **l_19 = &l_15;
        (*l_19) = l_15;
        if (g_4[2])
          continue;
      }
    }
  }
  g_31 = ((*l_27) = (l_20, func_21(l_24, g_4[2])));
  return g_4[3];
}

static int32_t *func_21(int32_t *p_22, int64_t p_23) {
  int32_t *l_25 = (void *)0;
  int32_t l_26 = 0L;
  l_26 ^= 0xC93CC254L;
  return p_22;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
