// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  int8_t f0;
  volatile uint16_t f1;
  int32_t f2;
};

static volatile uint8_t g_11 = 6UL;
static uint64_t g_14 = 0UL;
static int32_t g_19 = 7L;
static int32_t *g_21 = (void *)0;
static int32_t **volatile g_23[3][4][2] = {{{&g_21, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{&g_21, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}, {{&g_21, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}, {&g_21, &g_21}}};
static int32_t **volatile g_24 = &g_21;
static union U2 g_25 = {0L};

static union U2 func_1(void);
static int32_t *func_2(int32_t p_3, int32_t p_4, uint32_t p_5, int32_t *p_6, int64_t p_7);

static union U2 func_1(void) {
  int32_t l_8 = 0L;
  uint32_t l_17 = 0UL;
  int32_t **l_22 = (void *)0;
  (*g_24) = func_2(l_8, ((l_8 <= ((safe_div_func_int32_t_s_s(3L, (g_11 | 0xB28ED4A5L))) & (safe_sub_func_int8_t_s_s(g_14, ((safe_mod_func_uint16_t_u_u(l_8, g_14)) ^ g_14))))), 0xFD814383L), l_8, &l_8, l_17);
  return g_25;
}

static int32_t *func_2(int32_t p_3, int32_t p_4, uint32_t p_5, int32_t *p_6, int64_t p_7) {
  int32_t *l_18 = &g_19;
  int32_t **l_20[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
  int i;
  (*l_18) |= (l_18 == (g_21 = p_6));
  return &g_19;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
