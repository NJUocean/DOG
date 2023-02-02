// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const uint32_t f0;
  uint64_t f1;
  int64_t f2;
  volatile uint64_t f3;
};

static int32_t g_2 = 0x265AB3E9L;
static volatile int32_t g_15 = 0xC4307E4AL;
static int32_t g_16 = 0x11BC383CL;
static int32_t *volatile g_19[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
static int32_t g_21 = 0x55FFF839L;
static uint16_t g_40[1][5][2] = {{{0x2695L, 0x2695L}, {0x2695L, 0x2695L}, {0x2695L, 0x2695L}, {0x2695L, 0x2695L}, {0x2695L, 0x2695L}}};
static volatile union U1 g_41 = {18446744073709551609UL};
static uint8_t g_42 = 0UL;
static int32_t **volatile g_43 = (void *)0;
static int32_t *g_45 = &g_2;
static int32_t **volatile g_44 = &g_45;

static const int8_t func_1(void);
static uint32_t func_9(int32_t *p_10, int32_t *p_11, int32_t *p_12, int32_t *p_13);

static const int8_t func_1(void) {
  int64_t l_37 = 0x2F23D37F4A1D2DAFLL;
  for (g_2 = 0; (g_2 < (-24)); g_2--) {
    int32_t *l_14 = &g_2;
    int32_t *l_38[3][2][3] = {{{&g_21, &g_16, &g_16}, {&g_2, &g_2, &g_2}}, {{&g_21, &g_16, &g_16}, {&g_2, &g_2, &g_2}}, {{&g_21, &g_16, &g_16}, {&g_2, &g_2, &g_2}}};
    uint16_t *l_39 = &g_40[0][1][1];
    int i, j, k;
    (*g_44) = ((g_42 = (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((func_9(l_14, &g_2, &g_2, &g_2) && (((safe_mod_func_int32_t_s_s((((*l_39) = (g_15 != (safe_mod_func_int16_t_s_s(((g_16 = (((safe_mod_func_uint64_t_u_u(((~(((g_2 || (~((safe_mod_func_int8_t_s_s(((safe_rshift_func_int64_t_s_u((safe_sub_func_uint32_t_u_u((0x627E80A7L & (g_21 && (*l_14))), l_37)), 42)) ^ 0UL), g_16)), g_16))) ^ g_16) == 1L)), 0x81606DC068927649LL), l_37)) | 9L) || g_2)), l_37), l_37)))) ^ g_21), 0x520A048CL)), g_41), l_37)) && l_37), 0x55E0L)) >= 0xA4L), (*l_14)))), &g_2);
  }
  return l_37;
}

static uint32_t func_9(int32_t *p_10, int32_t *p_11, int32_t *p_12, int32_t *p_13) {
  uint32_t l_22 = 0UL;
  for (g_16 = 0; (g_16 == 25); ++g_16) {
    int32_t *l_20 = &g_21;
    (*l_20) ^= g_16;
  }
  return l_22;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_40[i][j][k], "g_40[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
