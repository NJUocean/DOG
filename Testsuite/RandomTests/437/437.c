// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t *g_4 = (void *)0;
static volatile int32_t g_8 = 0x1151C3C3L;
static uint16_t g_18 = 0x07DDL;
static uint32_t g_25 = 18446744073709551614UL;
static int64_t g_27 = 0xC638299FA9EF8169LL;
static uint16_t g_31[2][2] = {{1UL, 1UL}, {1UL, 1UL}};
static const int64_t *g_38 = &g_27;
static const int64_t **g_37 = &g_38;
static const int64_t ***volatile g_36 = &g_37;
static uint8_t g_41 = 0xC1L;

static int16_t func_1(void);
static int32_t *func_2(uint8_t p_3);

static int16_t func_1(void) {
  int16_t l_15[4][5][3] = {{{1L, 0xC3DCL, 0xB66FL}, {(-1L), 1L, (-1L)}, {(-1L), 1L, (-1L)}, {0xBFB2L, 2L, 0xB66FL}, {0xAF5BL, 1L, 5L}}, {{5L, 1L, 0x9CDFL}, {1L, 0x9CDFL, 1L}, {5L, 5L, 1L}, {0xAF5BL, 0xB66FL, 2L}, {0xBFB2L, (-1L), 1L}}, {{(-1L), (-1L), 1L}, {(-1L), 0xB66FL, 0xC3DCL}, {1L, 5L, 1L}, {1L, 0x9CDFL, 2L}, {0xBFB2L, 0xAF5BL, (-1L)}}, {{1L, 0xC3DCL, 0x9CDFL}, {5L, 1L, 2L}, {(-9L), 0x065CL, 0x065CL}, {(-9L), 2L, 1L}, {5L, 0x9CDFL, 0xC3DCL}}};
  int32_t l_16 = 0x9B996A53L;
  uint16_t *l_17 = &g_18;
  int64_t *l_26 = &g_27;
  uint16_t *l_28 = (void *)0;
  uint16_t *l_29 = (void *)0;
  uint16_t *l_30 = &g_31[0][0];
  int32_t **l_44 = &g_4;
  int i, j, k;
  (*l_44) = func_2((((void *)0 != g_4) != ((*l_30) = (!(safe_sub_func_int32_t_s_s((((g_8, ((safe_mul_func_int32_t_s_s((-1L), (safe_mod_func_uint64_t_u_u((((safe_add_func_int64_t_s_s((l_16 = (g_8 < l_15[3][2][2])), ((*l_26) = ((((*l_17)++) <= (((void *)0 == g_4) | ((safe_mul_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(l_15[3][2][2], g_25)), 18446744073709551606UL)) >= 65532UL))) == 65535UL)))) >= g_25) & l_15[3][2][2]), l_15[3][3][0])))) != l_15[3][2][2])), (void *)0) == g_4), g_25))))));
  return l_16;
}

static int32_t *func_2(uint8_t p_3) {
  const int64_t *l_35 = (void *)0;
  const int64_t **l_34 = &l_35;
  int32_t *l_39 = (void *)0;
  int32_t l_40 = 9L;
  for (p_3 = (-6); (p_3 < 50); ++p_3) {
    (*g_36) = l_34;
  }
  g_41++;
  return g_4;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_31[i][j], "g_31[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_41, "g_41", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
