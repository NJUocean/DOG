// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  unsigned f0 : 31;
  int64_t f1;
};

static uint16_t g_8 = 2UL;
static union U0 g_18 = {0x8B78ACC4L};
static uint32_t g_20[2][3][4] = {{{0x044653FFL, 0x21462CCDL, 0x21462CCDL, 0x044653FFL}, {0x21462CCDL, 0x044653FFL, 1UL, 0x402DA3C3L}, {0x21462CCDL, 1UL, 0x21462CCDL, 0UL}}, {{0x044653FFL, 0x402DA3C3L, 0UL, 0UL}, {1UL, 1UL, 4294967295UL, 0x402DA3C3L}, {0x402DA3C3L, 0x044653FFL, 4294967295UL, 0x044653FFL}}};
static uint32_t g_22 = 0x95A2E712L;

static int32_t func_1(void);
static int16_t func_15(union U0 p_16, int64_t p_17);

static int32_t func_1(void) {
  int8_t l_7 = 1L;
  uint32_t *l_19[3];
  int32_t l_21[2];
  int i;
  for (i = 0; i < 3; i++)
    l_19[i] = &g_20[1][2][1];
  for (i = 0; i < 2; i++)
    l_21[i] = 0x11914CC5L;
  g_22 = ((l_21[1] &= (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint64_t_u(0x52C58FB770A77C87LL)) && ((l_7 && g_8) && ((safe_add_func_int16_t_s_s((l_7 > (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint64_t_u_u(((!((func_15(g_18, g_18.f0) | 0xE314L), (0x0CL < l_7))), 8UL), g_18.f0))))), l_7)) < 1L))), g_8))) == g_20[0][2][2]);
  return g_20[1][2][3];
}

static int16_t func_15(union U0 p_16, int64_t p_17) { return g_18.f0; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_20[i][j][k], "g_20[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_22, "g_22", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
