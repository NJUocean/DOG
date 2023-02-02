// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  signed f0 : 26;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
  signed f0 : 31;
};
#pragma pack(pop)

union U2 {
  signed f0 : 9;
};

static volatile int32_t g_2 = 0x0398070AL;
static volatile int32_t g_3 = 0x167FA5C6L;
static volatile int32_t g_4 = 0x8974B666L;
static int32_t g_5[5] = {4L, 4L, 4L, 4L, 4L};
static int32_t **volatile g_9 = (void *)0;
static union U2 g_17 = {-10L};
static struct S0 g_19 = {6471};
static struct S1 g_22 = {-12280};
static volatile int32_t g_23 = 0L;
static volatile int32_t g_24 = (-5L);
static int32_t g_25 = 7L;

static int8_t func_1(void);
static struct S1 func_11(union U2 p_12, int32_t *p_13, struct S0 p_14, int32_t *p_15, int32_t **p_16);

static int8_t func_1(void) {
  int32_t *l_18 = &g_5[0];
  int32_t **l_20 = (void *)0;
  struct S1 *l_31 = &g_22;
  for (g_5[3] = 15; (g_5[3] <= 12); g_5[3]--) {
    int32_t *l_8[5][1][4] = {{{&g_5[3], &g_5[3], &g_5[3], &g_5[3]}}, {{&g_5[3], &g_5[3], &g_5[3], &g_5[3]}}, {{&g_5[3], &g_5[3], &g_5[3], &g_5[3]}}, {{&g_5[3], &g_5[3], &g_5[3], &g_5[3]}}, {{&g_5[3], &g_5[3], &g_5[3], &g_5[3]}}};
    int32_t **l_10 = &l_8[3][0][3];
    int i, j, k;
    (*l_10) = l_8[3][0][3];
    if ((**l_10))
      break;
  }
  (*l_31) = func_11(g_17, l_18, g_19, l_18, l_20);
  return (*l_18);
}

static struct S1 func_11(union U2 p_12, int32_t *p_13, struct S0 p_14, int32_t *p_15, int32_t **p_16) {
  struct S1 l_21 = {1440};
  g_22 = l_21;
  for (g_25 = 0; (g_25 >= 29); g_25 = safe_add_func_int16_t_s_s(g_25, 1)) {
    int32_t *l_30 = &g_5[3];
    int32_t **l_29 = &l_30;
    int32_t ***l_28 = &l_29;
    (*l_28) = (void *)0;
  }
  return l_21;
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
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
  transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
  transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
