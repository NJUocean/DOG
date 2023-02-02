// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const volatile int32_t g_8 = 0xAD3B3152L;
static uint16_t g_12 = 0x19C9L;
static uint16_t g_24 = 0x20B2L;
static uint16_t g_30[3] = {0UL, 0UL, 0UL};
static uint16_t *g_29 = &g_30[0];
static uint8_t g_32[1][1] = {{9UL}};
static uint8_t g_34[2][1][5] = {{{0x50L, 0x50L, 0x50L, 0x50L, 0x50L}}, {{0x50L, 0x50L, 0x50L, 0x50L, 0x50L}}};
static uint32_t g_36 = 0x8BD2E84CL;

static int8_t func_1(void);
static uint64_t func_4(uint64_t p_5);

static int8_t func_1(void) {
  uint32_t l_9 = 0xA77C8748L;
  uint16_t *l_27 = &g_24;
  uint16_t **l_28 = (void *)0;
  uint8_t *l_31 = &g_32[0][0];
  uint8_t *l_33[1][4];
  int32_t l_35 = 0x1A0197CBL;
  int32_t *l_37 = &l_35;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++)
      l_33[i][j] = &g_34[1][0][2];
  }
  g_36 &= (safe_mul_func_uint64_t_u_u(func_4(((+(safe_unary_minus_func_uint32_t_u(g_8))) != l_9)), (safe_sub_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(l_9, (safe_add_func_uint8_t_u_u((l_35 = ((*l_31) = ((safe_lshift_func_uint8_t_u_s(((g_24 >= ((((g_24 >= ((((safe_mul_func_int64_t_s_s((&g_24 == &g_24), ((g_29 = l_27) == (void *)0))) <= g_30[0]) != g_24) && g_30[0])), l_9) || 0UL) ^ g_30[0])) != 4UL), 0)) != l_9))), g_24)))) > (-1L)), l_9))));
  (*l_37) ^= (&l_27 != (l_28 = &l_27));
  return g_24;
}

static uint64_t func_4(uint64_t p_5) {
  uint16_t *l_10 = (void *)0;
  uint16_t *l_11[1][5][2] = {{{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}};
  int32_t l_15 = 0x1C58BDFAL;
  int i, j, k;
  l_15 = (p_5 && ((65532UL & (g_8, (g_8 >= 0xE0369BD6L))), (++g_12)));
  return g_12;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_30[i], "g_30[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_34[i][j][k], "g_34[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
