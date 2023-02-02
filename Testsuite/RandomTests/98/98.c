// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const uint8_t f0;
  const int32_t f1;
};

struct S1 {
  int8_t f0;
};

static uint64_t g_10 = 0xA86BA47C9D5FAC12LL;
static int64_t g_20 = 0x2B5F7919ADB82134LL;
static int64_t g_22 = 2L;
static int64_t g_24 = 0x8B166C1932E3CA36LL;
static uint16_t g_28 = 6UL;
static struct S0 g_30 = {249UL, 0x5FC1C575L};
static int32_t g_33 = 1L;
static volatile uint32_t g_40 = 0x394A737BL;
static struct S1 g_43 = {1L};
static struct S1 *volatile g_44 = &g_43;

static uint32_t func_1(void);
static struct S1 func_2(int32_t p_3, int8_t p_4, const int8_t p_5, struct S0 p_6, int16_t p_7);

static uint32_t func_1(void) {
  int64_t l_8 = 0x867B8F5F4990069FLL;
  uint16_t *l_9 = (void *)0;
  int64_t *l_19 = &g_20;
  int64_t *l_21 = &g_22;
  int64_t *l_23[5][2] = {{&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}, {&g_24, &g_24}};
  uint16_t *l_27[5][3][2] = {{{&g_28, &g_28}, {(void *)0, &g_28}, {&g_28, &g_28}}, {{&g_28, &g_28}, {&g_28, &g_28}, {(void *)0, &g_28}}, {{&g_28, &g_28}, {&g_28, &g_28}, {&g_28, &g_28}}, {{&g_28, (void *)0}, {&g_28, &g_28}, {&g_28, &g_28}}, {{&g_28, &g_28}, {&g_28, &g_28}, {(void *)0, &g_28}}};
  int32_t l_29 = (-9L);
  int8_t l_31 = 1L;
  uint16_t l_45 = 0UL;
  int i, j, k;
  (*g_44) = func_2(((g_10 = l_8), (l_8 != (safe_lshift_func_uint16_t_u_u((l_29 = (safe_mod_func_int32_t_s_s((((safe_lshift_func_uint32_t_u_u((0UL != (safe_mul_func_uint16_t_u_u(l_8, ((((*l_21) = ((*l_19) = (-1L))) >= (g_24 = g_10)), (-1L))))), 11)), (l_8 <= (safe_add_func_uint16_t_u_u(g_24, g_22)))) == 0x8EL), l_8))), 7)))), l_8, l_8, g_30, l_31);
  return l_45;
}

static struct S1 func_2(int32_t p_3, int8_t p_4, const int8_t p_5, struct S0 p_6, int16_t p_7) {
  int32_t *l_32 = &g_33;
  int32_t l_34 = 0x9405DBD5L;
  int32_t *l_35 = &l_34;
  int32_t *l_36 = &g_33;
  int32_t *l_37 = &g_33;
  int32_t *l_38 = &g_33;
  int32_t *l_39[2];
  int i;
  for (i = 0; i < 2; i++)
    l_39[i] = &l_34;
  g_40--;
  return g_43;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
