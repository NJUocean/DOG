// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const uint64_t f0;
};

union U1 {
  uint8_t f0;
};

static union U1 g_7 = {0x75L};
static int32_t g_16 = 6L;
static int16_t g_21 = (-9L);
static struct S0 g_22 = {0xC80FC3A065C2DD78LL};
static uint16_t g_24 = 0xB2C4L;

static uint32_t func_1(void);
static int32_t *func_2(union U1 p_3, uint16_t p_4, uint32_t p_5, uint32_t p_6);

static uint32_t func_1(void) {
  union U1 *l_8 = &g_7;
  int32_t l_9 = (-5L);
  int16_t *l_19 = (void *)0;
  int16_t *l_20 = &g_21;
  uint16_t *l_23 = &g_24;
  int32_t *l_31 = &g_16;
  int32_t **l_30 = &l_31;
  int16_t **l_37 = &l_19;
  (*l_30) = func_2(((*l_8) = g_7), (l_9 | ((*l_23) = (safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_16, (safe_sub_func_int16_t_s_s(((*l_20) = 0x8F0DL), g_16)))), (g_22, g_16))) ^ 9L), l_9)))), l_9, l_9);
  g_16 = (+(safe_add_func_int16_t_s_s((((void *)0 != &g_24) ^ (safe_add_func_uint8_t_u_u((*l_31), ((1L < (g_22, 0xD188380095520530LL)) || (((**l_30), l_20) != ((*l_37) = l_23)))))), 65533UL)));
  return g_24;
}

static int32_t *func_2(union U1 p_3, uint16_t p_4, uint32_t p_5, uint32_t p_6) {
  int16_t *l_25 = &g_21;
  int16_t **l_26 = &l_25;
  int16_t *l_28 = &g_21;
  int16_t **l_27 = &l_28;
  int32_t *l_29 = &g_16;
  (*l_29) &= (&g_21 != ((*l_27) = ((*l_26) = l_25)));
  return l_29;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
