// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_10 = 0x194DDBC3L;
static int32_t g_12 = 1L;
static uint8_t g_19 = 3UL;
static uint8_t g_22[5] = {0xEEL, 0xEEL, 0xEEL, 0xEEL, 0xEEL};
static int32_t g_25[2][3][4] = {{{(-10L), 0x79BDD86BL, (-9L), (-9L)}, {0xB8A87EA8L, 0xB8A87EA8L, (-10L), (-9L)}, {6L, 0x79BDD86BL, 6L, (-10L)}}, {{6L, (-10L), (-10L), 6L}, {0xB8A87EA8L, (-10L), (-9L), (-10L)}, {(-10L), 0x79BDD86BL, (-9L), (-9L)}}};

static int64_t func_1(void);
static int32_t func_2(int64_t p_3, uint64_t p_4, int64_t p_5, uint64_t p_6, uint16_t p_7);

static int64_t func_1(void) {
  int64_t l_11 = (-4L);
  int16_t l_15 = 0xDFA8L;
  uint8_t *l_18 = &g_19;
  uint8_t *l_20 = (void *)0;
  uint8_t *l_21 = &g_22[1];
  int32_t *l_26 = &g_25[1][2][0];
  (*l_26) = func_2(((safe_mod_func_uint8_t_u_u(((g_10 != (-1L)) == l_11), ((g_12 | ((safe_lshift_func_uint64_t_u_s((l_15 >= ((0x2AEE5A98L < (((*l_21) &= ((*l_18) |= ((((((safe_add_func_int64_t_s_s((-5L), (0x919AL | ((-9L) & l_11)))) & 4294967290UL) != l_11) || 0x32E3L) < l_11) | g_12))), 0xB32E2659L)) > g_12)), g_12)) && 0xB76E1EE67B38EB16LL)) && (-1L)))), l_15), l_15, l_15, g_12, l_11);
  return (*l_26);
}

static int32_t func_2(int64_t p_3, uint64_t p_4, int64_t p_5, uint64_t p_6, uint16_t p_7) {
  uint8_t *const l_23[3] = {&g_19, &g_19, &g_19};
  int32_t *l_24[1];
  int i;
  for (i = 0; i < 1; i++)
    l_24[i] = &g_25[0][1][0];
  g_25[0][1][0] = (g_10 == ((void *)0 != l_23[0]));
  return g_19;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_22[i], "g_22[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_25[i][j][k], "g_25[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
