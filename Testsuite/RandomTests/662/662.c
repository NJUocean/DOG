// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int16_t g_17 = (-7L);
static int64_t g_24 = 0xEBFB2C41AC3DC99CLL;
static uint32_t g_33[4][4][1] = {{{0x4A9C79EBL}, {0xE7EB6652L}, {0x4A9C79EBL}, {0xE7EB6652L}}, {{0x4A9C79EBL}, {0xE7EB6652L}, {0x4A9C79EBL}, {0xE7EB6652L}}, {{0x4A9C79EBL}, {0xE7EB6652L}, {0x4A9C79EBL}, {0xE7EB6652L}}, {{0x4A9C79EBL}, {0xE7EB6652L}, {0x4A9C79EBL}, {0xE7EB6652L}}};
static int32_t g_35 = 0L;
static int32_t *volatile g_34 = &g_35;
static int32_t *g_36[1] = {&g_35};
static int16_t g_40 = 1L;

static int32_t func_1(void);
static const uint64_t func_4(const int32_t p_5, int16_t p_6, const int32_t p_7, uint8_t p_8, uint8_t p_9);

static int32_t func_1(void) {
  int32_t l_14 = 0x095A9796L;
  int16_t *l_39 = &g_40;
  int32_t *l_41 = &g_35;
  (*l_41) = (((*l_39) = ((safe_sub_func_uint64_t_u_u((func_4((((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(l_14, ((safe_mul_func_int64_t_s_s((g_17 != (safe_sub_func_int8_t_s_s(l_14, (safe_mod_func_int16_t_s_s(((((safe_lshift_func_int64_t_s_u((g_24 < g_24), (l_14 < 0x11BBB4F5AC3D6C1DLL))) & (safe_div_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((g_24, (safe_div_func_uint16_t_u_u(l_14, 0xDBF4L))), g_24)) < g_24) ^ g_24), 1L))) & 1UL) == l_14), 0x0095L))))), g_24)) || g_24))), g_24)) | g_24), g_24), g_24, g_24, g_24, l_14) == g_33[1][1][0]), g_33[3][2][0])), 4L)) & 0UL);
  return (*l_41);
}

static const uint64_t func_4(const int32_t p_5, int16_t p_6, const int32_t p_7, uint8_t p_8, uint8_t p_9) {
  int16_t l_38 = (-1L);
  for (p_9 = 16; (p_9 >= 50); ++p_9) {
    for (p_8 = 0; (p_8 <= 0); p_8 += 1) {
      for (g_24 = 0; (g_24 >= 0); g_24 -= 1) {
        int i, j, k;
        (*g_34) = g_33[g_24][g_24][p_8];
      }
      for (g_24 = 0; (g_24 <= 0); g_24 += 1) {
        int32_t **l_37 = &g_36[0];
        (*l_37) = g_36[0];
        if (l_38)
          break;
      }
    }
  }
  return g_35;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
