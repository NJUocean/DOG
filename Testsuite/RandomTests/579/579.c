// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  int16_t f0;
  volatile uint64_t f1;
  uint64_t f2;
};
#pragma pack(pop)

union U1 {
  const unsigned f0 : 27;
  const int32_t f1;
};

static int8_t g_8 = (-8L);
static volatile struct S0 g_9 = {0xDF1AL, 18446744073709551615UL, 0xC40ED3C15D0D658ELL};
static volatile struct S0 *volatile g_10 = &g_9;
static int32_t g_23[2][4][4] = {{{0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}, {0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}, {0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}, {0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}}, {{0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}, {0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}, {0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}, {0x3BDF78B1L, 0x095DBC2AL, 0x095DBC2AL, 0x3BDF78B1L}}};
static int32_t *volatile g_22 = &g_23[0][2][3];

static uint32_t func_1(void);
static uint64_t func_4(union U1 p_5, int32_t p_6);

static uint32_t func_1(void) {
  union U1 l_7 = {0x22A149CEL};
  int32_t l_25 = 0x942C3B03L;
  l_25 = (safe_rshift_func_int8_t_s_u((func_4(l_7, g_8) <= l_7.f0), 3));
  return g_23[1][2][3];
}

static uint64_t func_4(union U1 p_5, int32_t p_6) {
  int32_t l_24 = (-1L);
  if (g_8) {
    (*g_10) = g_9;
  } else {
    union U1 l_17[4][4][4] = {{{{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}}, {{{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}}, {{{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}}, {{{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}}};
    uint32_t l_21 = 0x90AE7359L;
    int i, j, k;
    (*g_22) = (safe_add_func_uint8_t_u_u(0xCEL, ((g_8, ((safe_rshift_func_uint32_t_u_u(0xD40A1650L, g_8)) >= (((safe_sub_func_uint64_t_u_u((l_17[1][3][0], 0UL), 0UL)), (safe_sub_func_uint8_t_u_u(0x65L, (!250UL)))) & l_21))), g_9.f0)));
  }
  return l_24;
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
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
  transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_23[i][j][k], "g_23[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
