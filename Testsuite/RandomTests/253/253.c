// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0xD214C405L;
static uint32_t g_14 = 18446744073709551615UL;
static uint16_t g_20 = 0x9C2BL;
static uint16_t g_24[3] = {0UL, 0UL, 0UL};
static uint16_t g_36 = 1UL;
static int32_t g_38 = 0x2CE3C489L;
static int32_t g_39 = (-10L);

static uint8_t func_1(void);
static uint64_t func_5(int32_t p_6, uint32_t p_7, int64_t p_8, int8_t p_9);

static uint8_t func_1(void) {
  uint16_t l_10 = 0xCBA8L;
  for (g_2 = 0; (g_2 < (-18)); --g_2) {
    uint32_t *l_13 = &g_14;
    g_39 &= (func_5(l_10, ((*l_13) |= ((l_10, 0x3EDFL) || ((((1L && ((g_2 <= (((safe_mod_func_uint64_t_u_u(((7L || (g_2 | g_2)) == ((g_2 || l_10) > g_2)), 0xE3CA3691F6F49C23LL)) || g_2) | g_2)) && g_2)) >= l_10) || g_2) ^ 0x5AD3380EL))), g_2, g_2) < 18446744073709551607UL);
  }
  return g_2;
}

static uint64_t func_5(int32_t p_6, uint32_t p_7, int64_t p_8, int8_t p_9) {
  uint32_t *l_16 = &g_14;
  uint32_t **l_15 = &l_16;
  uint32_t *l_18 = &g_14;
  uint32_t **l_17 = &l_18;
  uint16_t *l_19 = &g_20;
  uint16_t *l_23 = &g_24[0];
  uint16_t *l_35 = &g_36;
  int32_t l_37 = (-1L);
  g_38 = (((((((*l_15) = (void *)0) == ((*l_17) = &g_14)) & (((*l_23) = (--(*l_19))) & ((p_8 > ((((*l_35) = ((safe_add_func_int32_t_s_s(0xBC906383L, (safe_mod_func_uint16_t_u_u(p_6, ((safe_mul_func_uint64_t_u_u(((safe_div_func_uint8_t_u_u((g_2, (((g_14 > 0xB01197BA27438E21LL) == (safe_div_func_int32_t_s_s(p_7, g_14))) || g_2)), 0x84L)) <= g_14), p_6)) | 0L))))) >= g_14)) && g_14), 4UL)), l_37))), &g_14) != (void *)0) <= g_14);
  return l_37;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_24[i], "g_24[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
