// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile int64_t f0;
  int32_t f1;
  const int64_t f2;
  uint8_t f3;
};

static const uint32_t g_8 = 0xA3367F5EL;
static uint16_t g_23 = 65532UL;
static int32_t g_25 = 0x867A7BF7L;
static int32_t *volatile g_26[2] = {&g_25, &g_25};
static int32_t *volatile g_27 = &g_25;
static volatile union U0 g_29 = {0x821F997EC53A21B7LL};
static volatile union U0 *volatile g_28 = &g_29;

static int32_t func_1(void);
static uint32_t func_4(const uint16_t p_5, uint32_t p_6, int8_t p_7);

static int32_t func_1(void) {
  uint8_t l_9 = 0UL;
  int32_t l_12 = 0x8F0D0714L;
  if ((safe_mul_func_int32_t_s_s((func_4(g_8, l_9, ((g_8 ^ l_9) ^ (safe_rshift_func_int64_t_s_s(l_9, ((l_12 || 0x38DC5336L) | (safe_sub_func_uint16_t_u_u(g_8, l_9))))))) & 4UL), 2UL))) {
    (*g_27) &= g_8;
  } else {
    g_28 = g_28;
  }
  return g_29.f0;
}

static uint32_t func_4(const uint16_t p_5, uint32_t p_6, int8_t p_7) {
  int32_t l_21[2][4];
  uint16_t *l_22 = &g_23;
  int32_t *l_24[2][2] = {{&g_25, &g_25}, {&g_25, &g_25}};
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++)
      l_21[i][j] = 0x75DAA08BL;
  }
  g_25 |= (((g_8 > p_7), 0xEBFB2C41AC3DC99CLL) != (((*l_22) = (p_6 != (safe_mul_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(g_8, (g_8 < (1UL >= (p_7 >= ((safe_sub_func_uint16_t_u_u(g_8, 0xB146L)) ^ p_5)))))), l_21[0][3])))) & (-1L)));
  g_25 = g_23;
  return p_7;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
