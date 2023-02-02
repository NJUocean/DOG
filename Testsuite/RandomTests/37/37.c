// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  uint64_t f0;
  volatile int32_t f1;
  uint32_t f2;
  int8_t f3;
};

union U2 {
  uint32_t f0;
  uint16_t f1;
  const uint64_t f2;
  uint32_t f3;
};

static union U1 g_14 = {18446744073709551615UL};
static int32_t g_26 = 0L;
static int32_t *g_30 = &g_26;
static int32_t *g_31 = &g_26;
static int32_t **volatile g_40 = (void *)0;
static int32_t **volatile g_41 = &g_30;
static union U2 g_42 = {0x32215F8FL};

static union U2 func_1(void);
static int32_t *func_2(uint32_t p_3, int32_t *p_4, const uint32_t p_5, int32_t *const p_6, uint8_t p_7);

static union U2 func_1(void) {
  const int32_t l_15 = 0xAA165420L;
  uint64_t l_16[5][1] = {{7UL}, {0xD9DCEE34EDF6B3E7LL}, {7UL}, {0xD9DCEE34EDF6B3E7LL}, {7UL}};
  int32_t *l_25[3][2][2] = {{{&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}}, {{&g_26, &g_26}, {&g_26, &g_26}}};
  int32_t **l_27 = &l_25[0][1][1];
  int32_t *l_29 = (void *)0;
  int32_t **l_28[3];
  int8_t l_32 = 0xC3L;
  const uint16_t l_33 = 65535UL;
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_28[i] = &l_29;
  (*l_27) = func_2((safe_lshift_func_uint32_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_14, (l_15 == (l_16[0][0] ^ (safe_lshift_func_int32_t_s_u((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((((((void *)0 != &l_15) || 0xFEAF86F2L) ^ (safe_mod_func_int16_t_s_s((l_15 < ((g_31 = (g_30 = ((*l_27) = l_25[0][1][1]))) == &g_26)), g_26))), 0UL), 0xECL)) == 9L), 18446744073709551612UL)), l_32))))), g_26)), 0UL)), g_26)), &g_26, l_33, &g_26, g_14.f0);
  return g_42;
}

static int32_t *func_2(uint32_t p_3, int32_t *p_4, const uint32_t p_5, int32_t *const p_6, uint8_t p_7) {
  int16_t l_36 = 0x4643L;
  int32_t *l_39[2];
  int i;
  for (i = 0; i < 2; i++)
    l_39[i] = &g_26;
  (*g_30) = ((safe_div_func_int32_t_s_s(l_36, 0x4E785C2FL)), (safe_lshift_func_uint64_t_u_s(g_14.f0, 52)));
  (*g_41) = l_39[0];
  return p_4;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
