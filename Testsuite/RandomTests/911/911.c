// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const uint64_t f0;
  const unsigned f1 : 10;
  const uint32_t f2;
};

union U5 {
  int16_t f0;
  uint8_t f1;
  uint16_t f2;
  uint32_t f3;
  int16_t f4;
};

static union U5 g_6[2] = {{0L}, {0L}};
static union U5 *g_9 = (void *)0;
static union U5 **volatile g_8 = &g_9;
static uint16_t g_26 = 0xE676L;
static union U1 g_35[3][1][3] = {{{{0UL}, {0UL}, {0UL}}}, {{{0UL}, {0UL}, {0UL}}}, {{{0UL}, {0UL}, {0UL}}}};
static int32_t g_47 = 0L;
static int32_t *g_46 = &g_47;
static int64_t g_50 = 0L;
static union U5 **volatile g_56 = &g_9;

static uint64_t func_1(void);
static union U5 *func_2(union U5 *p_3, union U5 *p_4);

static uint64_t func_1(void) {
  union U5 *l_5 = &g_6[1];
  union U5 *l_7 = &g_6[1];
  (*g_56) = func_2(l_5, l_7);
  return g_26;
}

static union U5 *func_2(union U5 *p_3, union U5 *p_4) {
  union U5 **volatile *l_10 = &g_8;
  uint16_t *l_19 = &g_6[1].f2;
  uint16_t *l_20 = &g_6[1].f2;
  uint16_t *l_21 = &g_6[1].f2;
  uint16_t *l_22 = (void *)0;
  uint16_t *l_23 = (void *)0;
  uint16_t *l_24 = (void *)0;
  uint16_t *l_25[3][2] = {{&g_6[1].f2, &g_26}, {&g_6[1].f2, &g_6[1].f2}, {&g_26, &g_6[1].f2}};
  int32_t l_38 = (-1L);
  int32_t *l_39 = (void *)0;
  int32_t *l_40 = &l_38;
  int32_t **l_45[5];
  uint16_t l_49 = 0UL;
  int32_t l_51 = (-3L);
  int64_t l_52 = 0x255375BB799E6047LL;
  int64_t *l_53[1][2][5] = {{{(void *)0, (void *)0, (void *)0, (void *)0, &l_52}, {(void *)0, (void *)0, (void *)0, (void *)0, &l_52}}};
  uint32_t l_54[1];
  uint16_t l_55 = 65535UL;
  int i, j, k;
  for (i = 0; i < 5; i++)
    l_45[i] = &l_39;
  for (i = 0; i < 1; i++)
    l_54[i] = 0xD7AFF79CL;
  (*l_10) = g_8;
  l_55 |= ((safe_rshift_func_int64_t_s_s(
               (((safe_mul_func_uint32_t_u_u(0xBA4D3EC9L, (((safe_sub_func_uint64_t_u_u((((safe_sub_func_uint64_t_u_u((((g_26--), (0xCC013CEF33920027LL | (safe_add_func_uint32_t_u_u(8UL, (((*l_10) == &p_3), (safe_mod_func_int8_t_s_s((safe_mul_func_int64_t_s_s(((g_35[2][0][1], (l_54[0] = ((((safe_rshift_func_int32_t_s_s(((*l_40) = l_38), (safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((g_50 ^= ((g_46 = l_40) != (((safe_unary_minus_func_int32_t_s(((0x387C7A5019003123LL ^ g_47) ^ l_49))) < g_6[1].f0), (void *)0))), 18446744073709551615UL), 7L)), l_51)))) < g_35[2][0][1].f0), g_47) == l_52))) < g_35[2][0][1].f0), g_26)), g_35[2][0][1].f0))))))) >= g_6[1].f0), 18446744073709551612UL)) | g_6[1].f0) <= g_6[1].f0), 0xE49ED226F84B879CLL)), (*g_46)) <= g_47))), 1UL) && (*l_40)), g_47)) &&
           (*l_40));
  return (**l_10);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    transparent_crc(g_6[i].f0, "g_6[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_26, "g_26", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_35[i][j][k].f0, "g_35[i][j][k].f0", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
