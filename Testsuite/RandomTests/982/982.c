// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_5 = 0UL;
static int32_t g_8[4] = {1L, 1L, 1L, 1L};
static int32_t *g_14 = &g_8[3];
static int32_t *volatile *volatile g_13 = &g_14;
static int64_t g_30 = 0x2C2A4E630971CF71LL;
static uint32_t g_31[2][3][2] = {{{0xFB66C146L, 0xFB66C146L}, {0x69896260L, 0xFB66C146L}, {0xFB66C146L, 0x69896260L}}, {{0xFB66C146L, 0xFB66C146L}, {0x69896260L, 0xFB66C146L}, {0xFB66C146L, 0x69896260L}}};
static int32_t g_34 = 0x88485BDFL;
static int32_t *volatile *volatile g_35[5][5] = {{&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}};

static int16_t func_1(void);
static int32_t func_2(uint8_t p_3, int8_t p_4);

static int16_t func_1(void) {
  int32_t **l_28[1];
  int i;
  for (i = 0; i < 1; i++)
    l_28[i] = &g_14;
  if (func_2(g_5, g_5)) {
    uint64_t l_21 = 18446744073709551611UL;
    for (g_5 = 0; (g_5 < 59); g_5 = safe_add_func_uint64_t_u_u(g_5, 6)) {
      int64_t *l_29 = &g_30;
      int32_t l_32 = 0x19AC4E69L;
      int32_t *l_33 = &g_34;
      (*l_33) ^= (+(((g_13 == (void *)0) && (2L | ((((((safe_mod_func_int8_t_s_s(0xE7L, 0x44L)) <= (safe_rshift_func_uint64_t_u_s((safe_mod_func_int64_t_s_s(1L, l_21)), 12))) ^ ((safe_lshift_func_int32_t_s_u((safe_mul_func_int8_t_s_s((g_31[0][0][1] = ((((((safe_sub_func_int64_t_s_s(((*l_29) = ((l_28[0] = &g_14) == (void *)0)), 0UL)) != g_5), g_5) || 0x58L) ^ l_21) | l_21)), 0x45L)), l_32)) > 0xF7F7L)) == l_32) >= 0xDA6603FA8B742D63LL) || g_31[0][0][0]))) < g_8[2]));
    }
  } else {
    int32_t *volatile *l_36 = (void *)0;
    int32_t *volatile *l_37 = &g_14;
    (*l_37) = (*g_13);
  }
  (*g_14) = (*g_14);
  return g_34;
}

static int32_t func_2(uint8_t p_3, int8_t p_4) {
  int32_t l_6[2];
  int32_t *l_7[4][3][3] = {{{&g_8[2], (void *)0, (void *)0}, {(void *)0, (void *)0, &g_8[3]}, {(void *)0, &g_8[3], (void *)0}}, {{&g_8[0], &g_8[3], &g_8[3]}, {(void *)0, &g_8[3], &g_8[3]}, {(void *)0, &g_8[3], (void *)0}}, {{&g_8[0], &g_8[3], &g_8[3]}, {(void *)0, &g_8[3], &g_8[3]}, {(void *)0, &g_8[3], (void *)0}}, {{&g_8[0], &g_8[3], &g_8[3]}, {(void *)0, &g_8[3], &g_8[3]}, {(void *)0, &g_8[3], (void *)0}}};
  int i, j, k;
  for (i = 0; i < 2; i++)
    l_6[i] = 0L;
  for (p_4 = 1; (p_4 >= 0); p_4 -= 1) {
    int32_t **l_9 = &l_7[1][2][1];
    (*l_9) = l_7[2][0][2];
    (*l_9) = l_7[0][0][0];
  }
  g_8[3] = 0x4B5C6F8BL;
  return g_5;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_8[i], "g_8[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_30, "g_30", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_31[i][j][k], "g_31[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
