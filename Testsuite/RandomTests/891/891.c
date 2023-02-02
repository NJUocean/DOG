// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int64_t g_16 = 0x4BA8B35EDADE0980LL;
static uint32_t g_22 = 4UL;
static uint64_t g_26 = 1UL;
static int64_t g_28 = (-3L);
static volatile uint32_t *volatile *g_31[1] = {(void *)0};
static volatile uint32_t g_34 = 0x2E26A8ACL;
static int32_t g_37 = 0xC1418E8DL;

static uint64_t func_1(void);
static uint16_t func_5(uint16_t p_6, int32_t p_7, uint16_t p_8, const uint32_t p_9);

static uint64_t func_1(void) {
  int32_t l_4 = 0L;
  const uint64_t l_19 = 7UL;
  uint32_t *l_20 = (void *)0;
  uint32_t *l_21[4][3][1] = {{{&g_22}, {&g_22}, {&g_22}}, {{&g_22}, {&g_22}, {&g_22}}, {{&g_22}, {&g_22}, {&g_22}}, {{&g_22}, {&g_22}, {&g_22}}};
  int32_t l_23[3];
  int32_t l_24 = 0x8CDC14C3L;
  uint64_t *l_25[4][4][1] = {{{&g_26}, {&g_26}, {&g_26}, {&g_26}}, {{&g_26}, {&g_26}, {&g_26}, {&g_26}}, {{&g_26}, {&g_26}, {&g_26}, {&g_26}}, {{&g_26}, {&g_26}, {&g_26}, {&g_26}}};
  int16_t l_27 = 0x988FL;
  const int8_t l_29[3] = {0x19L, 0x19L, 0x19L};
  int32_t *l_36 = (void *)0;
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_23[i] = 0L;
  g_37 = (safe_mod_func_int64_t_s_s(((((l_4 >= func_5(l_4, (g_28 = ((safe_mul_func_int64_t_s_s(l_4, (((g_26 |= (safe_lshift_func_int32_t_s_u((l_4 || ((safe_add_func_uint32_t_u_u((l_24 ^= ((g_16 >= ((safe_add_func_int8_t_s_s(l_4, (0L != (((((((g_22 ^= ((l_23[2] &= ((l_19 < g_16) && l_19)) <= 8UL)) | 0x40C9BA5BL), g_16) && (-3L)) && l_19) == l_4), g_22)))), 5L)) > 253UL)), 0UL)) | 0x405DBD55L)), l_4))) != g_16), l_27))) >= l_19)), g_16, l_29[0])) <= (-1L)) > 0UL) && 0x2A53EBFF7828E972LL), l_27));
  return g_16;
}

static uint16_t func_5(uint16_t p_6, int32_t p_7, uint16_t p_8, const uint32_t p_9) {
  int8_t l_30 = 0x87L;
  volatile uint32_t *l_33 = &g_34;
  volatile uint32_t *volatile *l_32[5] = {&l_33, &l_33, &l_33, &l_33, &l_33};
  uint8_t l_35 = 0x0DL;
  int i;
  l_32[1] = (l_30, g_31[0]);
  return l_35;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
