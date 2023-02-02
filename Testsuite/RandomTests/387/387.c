// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_6 = 0L;
static uint64_t g_28 = 0UL;
static uint32_t g_35[1][2][5] = {{{0x2C39D5B6L, 0xA2324015L, 0UL, 0UL, 0xA2324015L}, {0x2C39D5B6L, 0xA2324015L, 0UL, 0UL, 0xA2324015L}}};
static int32_t g_36 = 0x8ABFF5ECL;

static int32_t func_1(void);
static uint64_t func_18(uint32_t p_19, int32_t p_20);

static int32_t func_1(void) {
  int32_t l_13 = (-4L);
  uint64_t *l_27 = &g_28;
  uint32_t *l_34 = &g_35[0][0][1];
  int32_t *l_52 = &l_13;
  (*l_52) = (safe_lshift_func_uint64_t_u_u((safe_mul_func_int32_t_s_s(g_6, ((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((0x9BACC5D9L & g_6) || g_6), l_13)), (safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((l_13 || ((func_18((safe_add_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(2L, (safe_add_func_uint64_t_u_u(((*l_27)++), ((safe_rshift_func_uint8_t_u_s(((g_36 ^= (+(l_13 >= (((*l_34) = 0x9B8FA48AL) || g_35[0][0][1])))) >= 0x2A2EL), 7)), g_35[0][1][3]))))) || g_6), g_6)), g_6) < (-9L)) == g_6)) >= g_6), 0xDB22L)), g_6)))), 0x76L)) | l_13))), g_6));
  return g_6;
}

static uint64_t func_18(uint32_t p_19, int32_t p_20) {
  int32_t *l_49 = &g_36;
  for (p_20 = 0; (p_20 >= 0); p_20 -= 1) {
    uint64_t l_42[5][1][3] = {{{18446744073709551612UL, 0xBB9CEC02DFCE9586LL, 1UL}}, {{0UL, 0xBB9CEC02DFCE9586LL, 0UL}}, {{0xB3883FAA058A13C4LL, 18446744073709551612UL, 1UL}}, {{0xB3883FAA058A13C4LL, 0xB3883FAA058A13C4LL, 18446744073709551612UL}}, {{0UL, 18446744073709551612UL, 18446744073709551612UL}}};
    int32_t l_48 = (-1L);
    int32_t *l_51 = (void *)0;
    int i, j, k;
    if (g_28) {
      int8_t l_41 = 0x50L;
      for (g_28 = 0; (g_28 <= 0); g_28 += 1) {
        int32_t *l_38[1][3][3];
        int32_t **l_37 = &l_38[0][2][0];
        int32_t *l_40 = (void *)0;
        int32_t **l_39 = &l_40;
        int i, j, k;
        for (i = 0; i < 1; i++) {
          for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++)
              l_38[i][j][k] = &g_36;
          }
        }
        (*l_39) = ((*l_37) = &g_36);
        l_42[0][0][1]++;
      }
    } else {
      int32_t **l_45 = (void *)0;
      int32_t *l_47[1][1][4] = {{{&g_36, &g_36, &g_36, &g_36}}};
      int32_t **l_46 = &l_47[0][0][3];
      int i, j, k;
      (*l_46) = (void *)0;
    }
    for (g_28 = 0; (g_28 <= 0); g_28 += 1) {
      l_48 = (p_20 | p_19);
      for (g_36 = 0; (g_36 <= 0); g_36 += 1) {
        int32_t **l_50 = &l_49;
        l_51 = ((*l_50) = l_49);
      }
    }
  }
  (*l_49) = g_28;
  return p_20;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_35[i][j][k], "g_35[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
