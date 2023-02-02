// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S1 {
  const signed f0 : 9;
  signed f1 : 20;
  const unsigned f2 : 27;
};
#pragma pack(pop)

static volatile int32_t g_2 = 0x265AB3E9L;
static int32_t g_3 = 0x24CDB8FAL;
static volatile int32_t g_7[3] = {1L, 1L, 1L};
static volatile int32_t g_8 = (-1L);
static volatile int32_t g_9 = 0x9E2A8D3AL;
static volatile int32_t g_10 = (-9L);
static int32_t g_11 = 1L;
static int32_t g_31 = 0L;
static volatile struct S1 g_40 = {-15, -773, 3886};
static uint64_t g_53 = 0xFC3DE15252EC4757LL;
static int64_t g_60 = 0x26F71A791DEB0A87LL;

static const uint16_t func_1(void);
static uint64_t func_17(int32_t p_18, uint32_t p_19, const int16_t p_20, uint32_t p_21);

static const uint16_t func_1(void) {
  const uint32_t l_27[3] = {0UL, 0UL, 0UL};
  const int16_t l_56 = 0x0635L;
  int i;
  for (g_3 = 0; (g_3 < 20); g_3 = safe_add_func_int64_t_s_s(g_3, 1)) {
    int16_t l_6[5] = {0x4445L, 0x4445L, 0x4445L, 0x4445L, 0x4445L};
    uint32_t l_16 = 0x2301355FL;
    int32_t l_41 = 0L;
    int i;
    for (g_11 = 4; (g_11 >= 1); g_11 -= 1) {
      uint64_t *l_51 = (void *)0;
      uint64_t *l_52 = &g_53;
      int32_t *l_58[2];
      int64_t *l_59 = &g_60;
      int i;
      for (i = 0; i < 2; i++)
        l_58[i] = &g_31;
      if ((safe_mod_func_uint16_t_u_u(7UL, (safe_mod_func_int8_t_s_s(((((l_6[g_11] != ((((l_16 == (g_3, func_17(((safe_div_func_uint16_t_u_u(((!0x4B11F381L) & l_6[g_11]), ((safe_add_func_uint8_t_u_u(l_27[0], ((g_9 <= (((safe_mul_func_uint64_t_u_u(l_27[0], g_3)) && g_3) <= 0xE8L)) & g_11))) || g_7[2]))) >= l_16), g_11, l_27[2], g_11))), g_40), l_16), l_16)) ^ 0x3DC045D86B46617FLL) > l_6[g_11]) == l_41), l_27[1]))))) {
        int32_t *l_42 = &g_31;
        (*l_42) &= g_40.f2;
      } else {
        if (l_6[g_11])
          break;
      }
      g_7[1] = (((*l_59) |= ((safe_add_func_uint16_t_u_u((0x0B6939AD6F16DAB5LL > ((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int64_t_s_s((safe_lshift_func_uint64_t_u_s((--(*l_52)), 45)), l_6[g_11])) | g_7[2]) != l_56), l_56)) || (~(&g_53 != (void *)0)))), ((((void *)0 != l_58[1]) < g_31), l_6[1]))) & l_16)) || 0xA545A54E765359DELL);
    }
    return g_40.f1;
  }
  return g_31;
}

static uint64_t func_17(int32_t p_18, uint32_t p_19, const int16_t p_20, uint32_t p_21) {
  int32_t *l_30 = &g_31;
  int32_t *l_32[2][5][5] = {{{&g_31, (void *)0, &g_11, &g_31, &g_3}, {&g_31, &g_31, &g_31, &g_31, &g_31}, {&g_3, &g_31, &g_11, (void *)0, &g_31}, {&g_31, (void *)0, &g_11, &g_31, &g_3}, {&g_31, &g_31, &g_31, &g_31, &g_31}}, {{&g_3, &g_31, &g_11, (void *)0, &g_31}, {&g_31, (void *)0, &g_11, &g_31, &g_3}, {(void *)0, &g_3, (void *)0, &g_3, (void *)0}, {&g_3, &g_3, (void *)0, &g_11, (void *)0}, {(void *)0, &g_11, (void *)0, &g_3, &g_3}}};
  int16_t l_33[3];
  int16_t l_34 = 0xF256L;
  int32_t l_35 = 0L;
  uint16_t l_36 = 0UL;
  uint64_t l_39 = 0xEE60EB54A4BB2EE2LL;
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_33[i] = 0L;
  ++l_36;
  return l_39;
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
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_7[i], "g_7[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
  transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
  transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
  transparent_crc(g_53, "g_53", print_hash_value);
  transparent_crc(g_60, "g_60", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
