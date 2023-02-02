// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 16;
  const signed f1 : 5;
};

static volatile uint64_t g_18 = 8UL;
static int64_t g_21 = 0xE3CA3691F6F49C23LL;
static int64_t *g_34 = &g_21;
static int64_t *g_35 = &g_21;
static int64_t *g_36[5] = {&g_21, &g_21, &g_21, &g_21, &g_21};
static uint32_t g_39 = 0UL;
static uint64_t g_42 = 18446744073709551608UL;
static uint32_t g_43 = 0UL;
static uint32_t g_44[2][2][3] = {{{18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL}, {18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL}}, {{18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL}, {18446744073709551611UL, 18446744073709551611UL, 18446744073709551611UL}}};
static uint32_t g_46 = 1UL;
static uint32_t g_47 = 0UL;
static int32_t g_52 = 0x4D9913D7L;
static struct S0 g_53 = {188, -4};

static struct S0 func_1(void);
static uint8_t func_2(uint32_t p_3);

static struct S0 func_1(void) {
  uint64_t l_4[4] = {0x67B8F5F4990069F3LL, 0x67B8F5F4990069F3LL, 0x67B8F5F4990069F3LL, 0x67B8F5F4990069F3LL};
  int64_t l_19[3][3] = {{0x1CE3CB5AF9F7C8B1LL, 0x1CE3CB5AF9F7C8B1LL, 0x1CE3CB5AF9F7C8B1LL}, {(-1L), (-1L), (-1L)}, {0x1CE3CB5AF9F7C8B1LL, 0x1CE3CB5AF9F7C8B1LL, 0x1CE3CB5AF9F7C8B1LL}};
  int64_t *l_20[3];
  int32_t l_22 = 1L;
  int64_t **l_33[3][5] = {{&l_20[1], &l_20[1], &l_20[2], &l_20[0], &l_20[0]}, {(void *)0, &l_20[0], &l_20[0], (void *)0, &l_20[1]}, {(void *)0, &l_20[0], &l_20[0], &l_20[0], &l_20[0]}};
  uint32_t *l_37 = (void *)0;
  uint32_t *l_38[4][1][5] = {{{&g_39, (void *)0, &g_39, (void *)0, &g_39}}, {{&g_39, &g_39, (void *)0, (void *)0, &g_39}}, {{&g_39, (void *)0, &g_39, (void *)0, &g_39}}, {{&g_39, (void *)0, (void *)0, &g_39, &g_39}}};
  uint8_t l_40 = 0x12L;
  uint64_t *l_41 = &g_42;
  int32_t l_45 = 0xFE767E79L;
  int32_t *l_48 = &l_22;
  int32_t *l_49 = (void *)0;
  int32_t *l_50 = (void *)0;
  int32_t *l_51 = &g_52;
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_20[i] = &g_21;
  (*l_51) &=
      ((*l_48) =
           (func_2((g_47 &= ((l_4[0] == ((safe_sub_func_int64_t_s_s(((g_46 = (!(((safe_lshift_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((l_45 = (safe_div_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(((-1L) <= 65535UL), (safe_lshift_func_int64_t_s_u((l_22 &= (g_18 < l_19[2][1])), (safe_mod_func_int64_t_s_s(((void *)0 != &g_21), ((((((safe_mod_func_uint64_t_u_u((g_43 = ((*l_41) ^= (safe_sub_func_int32_t_s_s((safe_rshift_func_int64_t_s_s(l_4[0], 0)), ((safe_mul_func_uint8_t_u_u((((g_39 = ((g_36[4] = (g_35 = (g_34 = &l_19[0][0]))) == &g_21)) >= l_19[1][0]) & 1UL), l_40)), l_4[0]))))), g_21)) != 65535UL), g_44[0][1][2]), &g_21) != (void *)0) || (*g_34)))))))) > g_44[0][0][1]), g_44[0][1][2]))), 0xA04C7C9AL)), l_4[0])) & l_4[2]), g_42))) ^ g_21), 0x874D2D97B6EB5C50LL)) && l_19[2][1])) ||
                             g_44[0][1][2]))) < g_44[0][1][2]));
  return g_53;
}

static uint8_t func_2(uint32_t p_3) { return g_39; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_43, "g_43", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_44[i][j][k], "g_44[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
  transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
