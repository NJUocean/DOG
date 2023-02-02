// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  int16_t f0;
  signed f1 : 26;
  volatile uint16_t f2;
};

static volatile uint64_t g_12 = 0UL;
static int32_t g_14 = 0xB6BC3EC3L;
static int32_t *g_13 = &g_14;
static int64_t g_26 = (-1L);
static int32_t *g_29 = (void *)0;
static union U0 g_30[1][4] = {{{0xFFF9L}, {0xFFF9L}, {0xFFF9L}, {0xFFF9L}}};

static union U0 func_1(void);
static int32_t *func_2(int16_t p_3, int32_t *const p_4, int32_t *p_5, uint16_t p_6, int32_t *p_7);

static union U0 func_1(void) {
  int32_t **l_15 = &g_13;
  int32_t *const l_16[3] = {&g_14, &g_14, &g_14};
  uint8_t l_19 = 0xD3L;
  uint32_t l_24 = 0x8CE6FC2EL;
  int64_t *l_25[5][1] = {{(void *)0}, {&g_26}, {(void *)0}, {&g_26}, {(void *)0}};
  int32_t *l_27 = &g_14;
  int i, j;
  (*l_15) = (g_29 = func_2((((safe_add_func_uint8_t_u_u(0x9FL, (((safe_add_func_uint64_t_u_u(g_12, (6L || (((*l_15) = g_13) != l_16[1])))) || ((safe_mul_func_int8_t_s_s(((g_14 > (**l_15)) != (g_26 = (((l_19 < (safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(g_14, 18446744073709551615UL)), 0L))) ^ 9UL) > l_24))), (**l_15))) && (*g_13))), g_26))) == g_14), 0x781CL), &g_14, l_27, g_14, &g_14));
  return g_30[0][0];
}

static int32_t *func_2(int16_t p_3, int32_t *const p_4, int32_t *p_5, uint16_t p_6, int32_t *p_7) {
  int32_t *l_28 = &g_14;
  return l_28;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_30[i][j].f0, "g_30[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
