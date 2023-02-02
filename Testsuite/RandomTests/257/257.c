// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile int16_t f0;
};

static int32_t g_12 = 0x3E8E1B88L;
static union U0 g_18 = {0L};
static int64_t g_28 = 0x12A2EF7E291920B2LL;
static int64_t g_30 = 0L;
static int32_t g_34 = 8L;
static int32_t *volatile g_33 = &g_34;
static uint16_t g_38 = 0UL;
static uint16_t g_44 = 0x8A13L;
static uint16_t *g_43 = &g_44;
static int32_t *volatile g_47[3] = {&g_34, &g_34, &g_34};
static int32_t *volatile g_49[3][3][1] = {{{&g_34}, {&g_34}, {&g_34}}, {{&g_34}, {&g_34}, {&g_34}}, {{&g_34}, {&g_34}, {&g_34}}};
static int32_t *g_52 = &g_34;
static int32_t **volatile g_51 = &g_52;

static int8_t func_1(void);
static uint8_t func_6(int16_t p_7, int32_t p_8, uint16_t p_9);

static int8_t func_1(void) {
  uint64_t l_11 = 1UL;
  int8_t l_17[1];
  int64_t *l_27 = &g_28;
  int64_t *l_29 = &g_30;
  int32_t *l_50 = &g_34;
  int i;
  for (i = 0; i < 1; i++)
    l_17[i] = 9L;
  (*l_50) = (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(func_6((!l_11), g_12, (safe_rshift_func_int32_t_s_u((safe_mod_func_int16_t_s_s(l_17[0], (4294967292UL || (l_11 <= (((*l_29) = ((*l_27) = ((((g_18, 0x215256EEL), (((((safe_mul_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(((g_12 || 0L) && 0x8A2BL), 14)) & 255UL) ^ g_18.f0), 1)), g_12)), l_11)) != g_12) || (-7L)) <= 0x2B7B88CDL) < g_12)) == g_12) != g_12))) ^ 0xFD8C658163090707LL))))), g_12))), (-8L))), l_11));
  (*g_51) = l_50;
  return g_44;
}

static uint8_t func_6(int16_t p_7, int32_t p_8, uint16_t p_9) {
  for (g_30 = (-29); (g_30 <= 24); ++g_30) {
    uint16_t *l_37 = &g_38;
    int32_t l_39 = 0xB0D69B45L;
    int16_t l_40 = 4L;
    uint16_t *l_46 = (void *)0;
    uint16_t **l_45 = &l_46;
    int32_t *l_48 = &g_34;
    (*g_33) |= g_28;
    (*l_48) |= (((safe_sub_func_uint16_t_u_u(((*l_37) &= 0x6760L), l_39)) <= (l_40 && ((safe_div_func_uint64_t_u_u(((g_43 != ((*l_45) = &g_44)) != (&g_30 != (void *)0)), p_7)) >= l_39))) ^ g_12);
  }
  return g_30;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
