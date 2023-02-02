// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  uint16_t f0;
  const unsigned f1 : 19;
  uint64_t f2;
};

static int32_t g_2 = 0x2EAC4530L;
static int32_t g_20 = (-1L);
static int8_t g_25 = 9L;
static int64_t g_29 = 0xEA3A7221EBC5F93BLL;
static int16_t g_31 = 0x4EDBL;

static int16_t func_1(void);
static uint16_t func_6(uint8_t p_7, int32_t p_8, uint32_t p_9, uint64_t p_10, uint32_t p_11);

static int16_t func_1(void) {
  struct S0 l_15[4] = {{0x66B1L, 87, 0x722BA7B7E80D68F9LL}, {0x66B1L, 87, 0x722BA7B7E80D68F9LL}, {0x66B1L, 87, 0x722BA7B7E80D68F9LL}, {0x66B1L, 87, 0x722BA7B7E80D68F9LL}};
  uint32_t l_33 = 1UL;
  int32_t *l_52 = &g_20;
  int32_t *l_53 = &g_2;
  int32_t *l_54[5];
  uint64_t l_55 = 0x4EE4B4BC07302220LL;
  uint64_t l_58 = 0x44C677CCB2DC5075LL;
  int i;
  for (i = 0; i < 5; i++)
    l_54[i] = (void *)0;
  for (g_2 = (-4); (g_2 < (-4)); g_2++) {
    int16_t l_12[4];
    uint64_t l_22 = 0x77AE2718B9628EAFLL;
    int32_t l_23 = (-9L);
    int8_t *l_24 = &g_25;
    int64_t *l_28 = &g_29;
    int16_t *l_30 = &g_31;
    int32_t l_32 = (-2L);
    struct S0 l_46 = {0x5AB8L, 31, 3UL};
    int i;
    for (i = 0; i < 4; i++)
      l_12[i] = 8L;
    if ((!(func_6(l_12[2], (l_32 |= (((safe_mul_func_int8_t_s_s(l_12[2], ((((*l_30) = ((l_15[1], ((safe_div_func_uint32_t_u_u((((((safe_mod_func_int64_t_s_s((g_20 |= l_15[1].f1), ((*l_28) |= (((*l_24) |= ((~(255UL ^ ((l_22 = 9UL) & l_23))) && l_15[1].f0)) ^ ((safe_add_func_uint32_t_u_u(g_2, g_2)), l_15[1].f0))))) && g_29) ^ (-1L)) && l_12[1]) & l_15[1].f0), (-1L))) ^ g_2)) && g_2)) | l_15[1].f0), 255UL))) ^ g_2) && l_22)), g_2, g_2, l_33) != g_2))) {
      int64_t *l_47 = &g_29;
      int64_t **l_48 = &l_47;
      int32_t l_49[1][1];
      uint16_t *l_50 = (void *)0;
      int32_t *l_51 = &l_23;
      int i, j;
      for (i = 0; i < 1; i++) {
        for (j = 0; j < 1; j++)
          l_49[i][j] = 0x06CCCE42L;
      }
      (*l_51) |= ((((0L | (safe_div_func_int32_t_s_s(((l_49[0][0] = ((((l_15[0], (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint32_t_u_s(l_15[1].f0, 24)), g_25))) ^ (((safe_mod_func_uint32_t_u_u(((!(safe_mod_func_int32_t_s_s((((l_46, g_29) & (l_46, (((*l_48) = l_47) != (void *)0))) <= g_29), l_15[1].f2))) >= g_2), 0x6723FF49L)) > 0x86L) > l_15[1].f1)) || l_49[0][0]) || g_25)) && l_49[0][0]), 0xC76BF08EL))) & 0x35178915L) < (-1L)), l_15[1].f0);
    } else {
      return g_20;
    }
    return l_15[1].f2;
  }
  --l_55;
  return l_58;
}

static uint16_t func_6(uint8_t p_7, int32_t p_8, uint32_t p_9, uint64_t p_10, uint32_t p_11) {
  int32_t *l_34 = &g_20;
  (*l_34) = p_9;
  (*l_34) = 1L;
  return (*l_34);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
