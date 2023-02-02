// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_12 = 0xEB969161L;
static int16_t g_14 = 0x0357L;
static int16_t g_16 = (-1L);
static int32_t *g_19 = &g_12;
static int32_t g_24 = 0xE784B52DL;
static uint64_t g_39 = 0x5654A13735CA718BLL;

static uint16_t func_1(void);
static int32_t func_2(uint64_t p_3, int8_t p_4, uint32_t p_5);

static uint16_t func_1(void) {
  uint32_t l_6 = 4294967291UL;
  uint64_t l_7 = 18446744073709551615UL;
  uint64_t *l_8 = &l_7;
  int16_t *l_13 = &g_14;
  int16_t *l_15 = &g_16;
  uint64_t l_17 = 0x039D6B9C2D621EC2LL;
  int32_t l_20[4][3][4] = {{{0L, 0xC44D4E2BL, 0xC44D4E2BL, 0L}, {0xC44D4E2BL, 0L, 0x9CEA445AL, 9L}, {0xC44D4E2BL, 0x9CEA445AL, 0xC44D4E2BL, (-1L)}}, {{0L, 9L, (-1L), (-1L)}, {0x9CEA445AL, 0x9CEA445AL, 0x1F06E85FL, 9L}, {9L, 0L, 0x1F06E85FL, 0L}}, {{0x9CEA445AL, 0xC44D4E2BL, (-1L), 0x1F06E85FL}, {0L, 0xC44D4E2BL, 0xC44D4E2BL, 0L}, {0xC44D4E2BL, 0L, 0x9CEA445AL, 9L}}, {{0xC44D4E2BL, 0x9CEA445AL, 0xC44D4E2BL, (-1L)}, {0L, 9L, (-1L), (-1L)}, {0x9CEA445AL, 0x9CEA445AL, 0x9CEA445AL, (-1L)}}};
  uint8_t l_36[5] = {0x17L, 0x17L, 0x17L, 0x17L, 0x17L};
  int32_t l_38 = 0L;
  int i, j, k;
  if (func_2(((*l_8) = (l_6, (l_6 && l_7))), ((+0x272A72759951EA66LL), 3L), (((0x568BE135E1F6F084LL < (safe_add_func_uint16_t_u_u((((*l_15) = ((*l_13) = g_12)) && ((l_17 | l_17), 0x45CBL)), g_12))) <= g_12) | l_17))) {
    g_19 = &g_12;
  } else {
    const int32_t l_26 = 0x42FA43DEL;
    int32_t **l_40 = &g_19;
    for (g_16 = 2; (g_16 >= 0); g_16 -= 1) {
      int32_t *l_23[3][5] = {{&g_24, (void *)0, &g_24, &g_24, &g_24}, {&g_24, (void *)0, &g_24, &g_24, &g_24}, {&g_24, (void *)0, &g_24, &g_24, &g_24}};
      int32_t l_25[4][4] = {{1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L}};
      int i, j;
      l_25[0][3] |= (safe_add_func_uint32_t_u_u(3UL, (g_24 &= (*g_19))));
      for (l_17 = 0; (l_17 <= 2); l_17 += 1) {
        uint8_t l_29 = 0UL;
        uint32_t *l_37[5] = {&l_6, &l_6, &l_6, &l_6, &l_6};
        int i;
        g_24 &= ((*g_19) = (((g_12 || 18446744073709551614UL) == l_26) ^ (g_39 &= (l_17 || (safe_rshift_func_uint64_t_u_u(((*l_8) = ((((((l_29 > (g_12 & (((void *)0 == &l_26) ^ (l_38 &= (safe_add_func_int16_t_s_s((l_36[0] = ((safe_sub_func_int8_t_s_s((((0x22L & l_26) & 0L) < 6L), 252UL)), g_14)), g_16)))))) == l_29), &l_26) != &g_12) ^ 0x02A9564FCBDFAC86LL) != l_26)), l_26))))));
        l_40 = &g_19;
      }
    }
  }
  return g_39;
}

static int32_t func_2(uint64_t p_3, int8_t p_4, uint32_t p_5) {
  int32_t *l_18 = &g_12;
  l_18 = l_18;
  return (*l_18);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
