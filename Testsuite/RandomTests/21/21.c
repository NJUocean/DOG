// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const volatile uint32_t f0;
  volatile int8_t f1;
  int64_t f2;
};

union U2 {
  unsigned f0 : 2;
  int32_t f1;
  int8_t f2;
  signed f3 : 2;
};

static int64_t g_13 = 0xF66B17B722BA7B7ELL;
static uint16_t g_22 = 65528UL;
static int8_t g_26 = (-1L);
static int32_t g_33 = 0xC3DC4D7EL;
static int32_t *g_51 = &g_33;
static uint8_t g_52 = 1UL;
static union U1 g_59 = {18446744073709551615UL};
static volatile union U2 g_63[4][4] = {{{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}, {{7UL}, {7UL}, {7UL}, {7UL}}};
static uint32_t g_71 = 6UL;
static int16_t g_73[2][3][4] = {{{1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}}, {{1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}}};
static uint32_t g_74 = 0xB6FF5786L;
static int32_t g_77[4][1] = {{9L}, {9L}, {9L}, {9L}};
static int32_t **volatile g_93 = &g_51;
static int64_t g_94 = 0xFF1C73263BB6FCE1LL;

static int16_t func_1(void);
static uint16_t func_2(uint32_t p_3, uint8_t p_4, uint8_t p_5);

static int16_t func_1(void) {
  uint16_t l_10 = 65532UL;
  uint16_t *l_20 = (void *)0;
  uint16_t *l_21 = &g_22;
  uint64_t l_25 = 0xF4CC511EC1FCC8AFLL;
  uint32_t *l_27[1][2];
  int32_t l_28 = 0L;
  int32_t l_29 = 0xF77D900DL;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_27[i][j] = (void *)0;
  }
  g_52 |= (0x5E08L == func_2((l_29 = (l_28 = ((safe_lshift_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((((g_26 = (((l_10 <= (safe_mul_func_int16_t_s_s(g_13, ((g_13 != ((safe_div_func_int64_t_s_s(l_10, ((((18446744073709551611UL >= (safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((*l_21)++) >= ((l_10 == g_13) & (l_25 & l_25))), (-10L))) >= l_10), l_25))), 0UL), l_10) | l_25))) & g_13)) || l_25)))) == l_25), g_22)) || l_25) | g_13) | 0xE41BL), 1L)), l_25)), 18446744073709551607UL))), g_13, l_25));
  for (g_13 = 0; (g_13 >= 0); g_13 -= 1) {
    uint64_t l_68 = 18446744073709551615UL;
    uint32_t *l_81[1][4] = {{&g_71, &g_71, &g_71, &g_71}};
    int32_t l_91 = 0x0B1A5561L;
    int i, j;
  }
  return g_94;
}

static uint16_t func_2(uint32_t p_3, uint8_t p_4, uint8_t p_5) {
  int32_t *l_32 = &g_33;
  int32_t *l_34 = &g_33;
  int32_t **l_35 = &l_34;
  int8_t l_49 = (-1L);
  union U2 l_50 = {0UL};
  g_51 = (((safe_rshift_func_uint16_t_u_u(((l_32 == ((*l_35) = l_34)), (safe_add_func_uint32_t_u_u((~0xDDL), (g_33, ((((0x7276L | (((safe_lshift_func_int16_t_s_s(1L, 5)) != ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((*l_32), ((safe_div_func_int16_t_s_s((g_26 > (safe_sub_func_uint16_t_u_u(65535UL, 0xE206L))), p_3)), g_33))), l_49)) | 0x9BABL)) < (**l_35))), l_50), 4294967289UL) < 9UL))))), (*l_32))) | g_33), &g_33);
  return p_5;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_63[i][j].f0, "g_63[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_71, "g_71", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_73[i][j][k], "g_73[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_74, "g_74", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_77[i][j], "g_77[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_94, "g_94", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
