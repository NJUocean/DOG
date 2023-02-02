// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int16_t f0;
};

static volatile uint64_t g_11 = 0xD193E0566A927213LL;
static const int64_t g_16 = 1L;
static int32_t g_18 = 0x718BD850L;
static volatile struct S0 g_23 = {0xEDC0L};
static int32_t *g_25[5] = {&g_18, &g_18, &g_18, &g_18, &g_18};
static int32_t g_31 = 0x7A772BE7L;
static int64_t g_33 = 0L;
static int32_t g_35 = (-1L);

static uint64_t func_1(void);
static uint16_t func_4(int8_t p_5);

static uint64_t func_1(void) {
  uint16_t l_8[2][4][1] = {{{0UL}, {0xC662L}, {0UL}, {0xC662L}}, {{0UL}, {0xC662L}, {0UL}, {0xC662L}}};
  int64_t *l_32 = &g_33;
  int32_t *l_34 = &g_35;
  int i, j, k;
  (*l_34) ^= (safe_mod_func_int64_t_s_s(((*l_32) = ((func_4(((1L >= (l_8[1][0][0] <= ((safe_div_func_int8_t_s_s(l_8[1][0][0], g_11)) > (l_8[1][0][0] ^ (safe_rshift_func_int32_t_s_s(l_8[1][0][0], l_8[1][0][0])))))) != (safe_mod_func_int8_t_s_s((l_8[1][0][0] == (g_16 && g_16)), g_16)))), g_18) != g_16)), l_8[0][2][0]));
  return g_11;
}

static uint16_t func_4(int8_t p_5) {
  int32_t *const l_17 = &g_18;
  int32_t *l_19 = &g_18;
  int32_t **l_24[2][3][1] = {{{&l_19}, {&l_19}, {&l_19}}, {{&l_19}, {&l_19}, {&l_19}}};
  uint32_t l_30 = 4294967287UL;
  int i, j, k;
  l_19 = l_17;
  g_31 ^= (safe_add_func_uint32_t_u_u((((~(*l_19)), (&g_18 != (g_23, l_19))), (((((&g_18 == (g_25[3] = (void *)0)), (((((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((*l_19), (((&g_25[3] != &g_25[3]), &g_18) != (void *)0)), p_5)), (*l_19))) ^ 0x7CL), p_5) > (-3L)) < (*l_19))), p_5) >= l_30), 0x3592E7BAL)), p_5));
  return g_11;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
