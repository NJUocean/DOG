// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const uint32_t g_15[5][1][4] = {{{0x15D7249AL, 0x15D7249AL, 0x15D7249AL, 0x15D7249AL}}, {{0x15D7249AL, 0x15D7249AL, 0x15D7249AL, 0x15D7249AL}}, {{0x15D7249AL, 0x15D7249AL, 0x15D7249AL, 0x15D7249AL}}, {{0x15D7249AL, 0x15D7249AL, 0x15D7249AL, 0x15D7249AL}}, {{0x15D7249AL, 0x15D7249AL, 0x15D7249AL, 0x15D7249AL}}};
static int32_t g_19 = (-5L);
static uint64_t g_40 = 0x47C914A3A6D7D045LL;
static int8_t g_42 = (-4L);
static int64_t g_45 = 5L;

static uint16_t func_1(void);
static uint16_t func_3(int8_t p_4, int64_t p_5, uint64_t p_6);

static uint16_t func_1(void) {
  int64_t l_10 = 0xE6F7FBF2121F90EFLL;
  int32_t l_36 = 0x6AED1D25L;
  int32_t l_37[3];
  int16_t l_38 = 0x4FA7L;
  uint64_t *l_39 = &g_40;
  int8_t *l_41 = &g_42;
  uint32_t l_43 = 18446744073709551615UL;
  int32_t *l_44[3][1];
  int i, j;
  for (i = 0; i < 3; i++)
    l_37[i] = 0x38CA8C98L;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++)
      l_44[i][j] = &l_36;
  }
  g_45 = ((+((func_3(((*l_41) ^= (!((safe_div_func_int8_t_s_s(l_10, (safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(l_10, l_10)), g_15[4][0][3])))) >= ((safe_sub_func_int8_t_s_s(((~(g_19 = 4294967288UL)), ((safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(g_15[0][0][0], (safe_mod_func_uint64_t_u_u(((*l_39) |= ((safe_rshift_func_uint16_t_u_s(0xA3D7L, 1)) > (((safe_rshift_func_int32_t_s_s(((g_15[4][0][3], (safe_mod_func_int64_t_s_s((safe_mul_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u((l_36 = (g_19 <= l_10)), l_10)) < 0xE6966EF3L), l_10), g_15[2][0][1])), l_10))) >= l_37[1]), l_38)) <= l_37[0]) == g_19))), 0x50E352601C8D535DLL)))), (-1L))), l_37[2])), 254UL)), g_40)))), g_15[4][0][3], g_15[4][0][3]), g_15[2][0][0]) < 0xFEL)) && l_43);
  return g_15[0][0][0];
}

static uint16_t func_3(int8_t p_4, int64_t p_5, uint64_t p_6) { return g_15[2][0][3]; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_15[i][j][k], "g_15[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
