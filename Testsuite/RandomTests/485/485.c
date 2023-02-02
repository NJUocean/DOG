// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  int32_t f0;
  const volatile uint16_t f1;
  uint8_t f2;
};

union U4 {
  uint8_t f0;
  uint16_t f1;
  volatile unsigned f2 : 19;
};

static volatile uint32_t g_4 = 0xE4D9EDBDL;
static uint16_t g_5 = 0x9E2AL;
static int32_t g_9 = (-10L);
static int32_t *const volatile g_12 = (void *)0;
static int32_t g_14 = 0xB94D0F4FL;
static uint16_t g_28[1] = {0x7C6DL};
static union U4 g_32 = {0xA8L};
static union U4 *g_35 = &g_32;
static union U4 **const volatile g_34[1] = {&g_35};
static union U2 g_38 = {1L};
static union U2 **volatile g_39 = (void *)0;

static const union U4 func_1(void);
static union U2 *func_15(int32_t **p_16);

static const union U4 func_1(void) {
  uint32_t l_6[5][1] = {{18446744073709551614UL}, {0UL}, {18446744073709551614UL}, {0UL}, {18446744073709551614UL}};
  int32_t *l_18 = &g_9;
  int32_t **l_17 = &l_18;
  int i, j;
  if ((safe_rshift_func_uint16_t_u_u(g_4, g_5))) {
    for (g_5 = 0; (g_5 <= 0); g_5 += 1) {
      int32_t *l_8 = &g_9;
      int32_t **l_7 = &l_8;
      (*l_7) = (void *)0;
      for (g_9 = 0; (g_9 <= 0); g_9 += 1) {
        int32_t *l_13 = &g_14;
        int i, j;
        (*l_13) = (safe_sub_func_uint64_t_u_u(l_6[(g_5 + 2)][g_9], l_6[(g_5 + 2)][g_9]));
      }
    }
  } else {
    union U2 *l_41[1];
    union U2 **l_40 = &l_41[0];
    int i;
    for (i = 0; i < 1; i++)
      l_41[i] = &g_38;
    (*l_40) = func_15(l_17);
  }
  (*l_18) ^= g_4;
  return g_32;
}

static union U2 *func_15(int32_t **p_16) {
  int32_t *l_19 = &g_14;
  int32_t *l_20 = &g_9;
  int32_t *l_21 = &g_14;
  int32_t *l_22 = &g_14;
  int32_t *l_23 = &g_14;
  int32_t *l_24 = &g_14;
  int32_t *l_25 = &g_9;
  int32_t *l_26 = &g_9;
  int32_t *l_27[3];
  union U4 *l_31[1][1];
  union U2 *l_37[4][4][2] = {{{&g_38, &g_38}, {&g_38, &g_38}, {&g_38, (void *)0}, {&g_38, (void *)0}}, {{&g_38, &g_38}, {&g_38, &g_38}, {&g_38, (void *)0}, {&g_38, (void *)0}}, {{&g_38, &g_38}, {&g_38, &g_38}, {&g_38, (void *)0}, {&g_38, (void *)0}}, {{&g_38, &g_38}, {&g_38, &g_38}, {&g_38, (void *)0}, {&g_38, (void *)0}}};
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_27[i] = &g_9;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++)
      l_31[i][j] = &g_32;
  }
  ++g_28[0];
  for (g_14 = 0; (g_14 >= 0); g_14 -= 1) {
    union U4 **l_33 = (void *)0;
    union U4 **l_36 = &g_35;
    (*l_36) = l_31[0][0];
  }
  return l_37[3][2][0];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_28[i], "g_28[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
