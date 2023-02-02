// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  volatile unsigned f0 : 26;
  unsigned f1 : 7;
  const signed f2 : 13;
  uint32_t f3;
  unsigned f4 : 22;
};

static int32_t g_5[1][4][4] = {{{0xBA095A97L, 0x666A756AL, 0x666A756AL, 0xBA095A97L}, {0xBA095A97L, 0x666A756AL, 0x666A756AL, 0xBA095A97L}, {0xBA095A97L, 0x666A756AL, 0x666A756AL, 0xBA095A97L}, {0xBA095A97L, 0x666A756AL, 0x666A756AL, 0xBA095A97L}}};
static int32_t *g_4[1] = {&g_5[0][2][1]};
static struct S0 g_26 = {1201, 5, -58, 0UL, 1978};
static int64_t g_33 = 0xB4D2C298C245E320LL;
static uint8_t g_35[5][2] = {{0xFBL, 0x9CL}, {0xFBL, 0xFBL}, {0x9CL, 0xFBL}, {0xFBL, 0x9CL}, {0xFBL, 0xFBL}};
static int32_t g_37 = 1L;

static uint64_t func_1(void);
static int32_t *func_2(int32_t *p_3);

static uint64_t func_1(void) {
  int32_t **l_53 = &g_4[0];
  (*l_53) = func_2(g_4[0]);
  return g_37;
}

static int32_t *func_2(int32_t *p_3) {
  int16_t l_8 = (-1L);
  int32_t *l_11 = &g_5[0][2][1];
  int32_t l_31 = 0L;
  int64_t *l_32 = &g_33;
  uint8_t *l_34[4] = {&g_35[0][0], &g_35[0][0], &g_35[0][0], &g_35[0][0]};
  int32_t *l_36[5][4] = {{&g_37, &g_37, (void *)0, &g_37}, {&g_37, &g_37, &g_37, &g_37}, {&g_37, &g_37, &g_37, &g_37}, {&g_37, &g_37, (void *)0, &g_37}, {&g_37, (void *)0, (void *)0, &g_37}};
  int8_t l_38 = 0x92L;
  int8_t l_48 = 0x0DL;
  int64_t l_49 = 0xE5F43C7198F9F05BLL;
  int i, j;
  l_38 = (l_8 > (((safe_unary_minus_func_uint8_t_u(((g_35[0][0] = (((((*l_32) = (+((*p_3) = ((l_11 != (void *)0) <= (safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s((-1L), (safe_sub_func_uint16_t_u_u((g_26, (safe_div_func_uint64_t_u_u(((((*l_11) >= (safe_add_func_uint32_t_u_u(4294967295UL, (-1L)))) <= (*l_11)) | (*p_3)), 0xFA9EF8169C1477A1LL))), (*l_11))))), (*l_11))), (*p_3))), (*l_11)), g_5[0][2][1])), (*l_11))), l_31)))))) | g_26.f4) ^ g_26.f2) == g_26.f4)) < g_26.f4))) && (*l_11)) < 3L));
  for (l_8 = 0; (l_8 <= 9); l_8++) {
    uint16_t l_43 = 0xACABL;
    int32_t l_46 = 0xDA6125F8L;
    int32_t l_47[5];
    uint32_t l_50 = 0UL;
    int i;
    for (i = 0; i < 5; i++)
      l_47[i] = 0x746A6ECCL;
    for (g_26.f3 = (-20); (g_26.f3 == 39); ++g_26.f3) {
      --l_43;
    }
    l_50++;
  }
  return &g_5[0][2][1];
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
  transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
  transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
  transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
  transparent_crc(g_26.f4, "g_26.f4", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_35[i][j], "g_35[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
