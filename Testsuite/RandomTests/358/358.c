// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S1 {
  unsigned f0 : 25;
  signed f1 : 1;
  volatile unsigned f2 : 2;
};
#pragma pack(pop)

static volatile struct S1 g_2 = {5610, 0, 0};
static volatile struct S1 *volatile g_3 = &g_2;
static int8_t g_20 = 0xA3L;
static struct S1 g_22 = {414, 0, 0};
static struct S1 g_24 = {4762, 0, 1};
static struct S1 *g_23 = &g_24;
static volatile struct S1 g_29 = {2691, -0, 1};
static volatile struct S1 *g_28 = &g_29;
static const struct S1 g_31 = {3825, 0, 1};
static uint16_t g_33[5][2][5] = {{{0x2406L, 0xE18BL, 0x0B56L, 0xE18BL, 0x2406L}, {0x1289L, 0UL, 0x818AL, 0xE18BL, 1UL}}, {{0UL, 0x1289L, 0xF2DDL, 1UL, 0x49A7L}, {0x0B56L, 0x818AL, 1UL, 0UL, 1UL}}, {{1UL, 1UL, 65535UL, 0xF2DDL, 0x2406L}, {1UL, 65535UL, 0x2406L, 0x8ACCL, 65535UL}}, {{0x0B56L, 1UL, 0x49A7L, 0x2E84L, 0xE18BL}, {0UL, 65535UL, 65535UL, 0UL, 0xBF77L}}, {{0x1289L, 1UL, 65535UL, 0x2406L, 0x8ACCL}, {0x2406L, 0xBF77L, 0x8ACCL, 0UL, 0x49A7L}}};
static struct S1 **volatile g_35 = &g_23;
static int32_t g_45 = 0xF25AD92EL;
static int32_t *volatile g_44 = &g_45;

static uint8_t func_1(void);
static uint32_t func_9(int16_t p_10, uint64_t p_11, const uint32_t p_12, int32_t p_13);

static uint8_t func_1(void) {
  int32_t l_6 = (-4L);
  int32_t l_19 = 0x28787D63L;
  struct S1 *l_21 = &g_22;
  struct S1 **l_25 = &g_23;
  const struct S1 *l_30 = &g_31;
  uint16_t *l_32[2];
  int32_t l_34 = 0xBFA08552L;
  uint32_t l_39 = 1UL;
  int i;
  for (i = 0; i < 2; i++)
    l_32[i] = &g_33[0][1][0];
  (*g_3) = g_2;
  if ((safe_mod_func_uint64_t_u_u(l_6, (safe_add_func_uint32_t_u_u(func_9(((l_34 = ((((l_21 = ((((!g_2.f0), (+(l_19 = (~(safe_rshift_func_uint8_t_u_u(g_2.f0, l_6)))))) >= g_20), l_21)) == ((*l_25) = g_23)) < ((-1L) ^ ((l_6, g_28) != l_30))) != l_6)) > l_6), g_22.f1, l_6, g_20), 1L))))) {
    for (g_20 = (-4); (g_20 <= 29); g_20 = safe_add_func_int64_t_s_s(g_20, 6)) {
      return g_24.f1;
    }
  } else {
    uint32_t l_38 = 0xDE6A6B93L;
    (*g_44) = ((((((*g_3), (l_38 ^ (l_38 > (((l_39 | g_22.f0) | (safe_add_func_int64_t_s_s((((*l_25) = (*g_35)) == (void *)0), (safe_lshift_func_uint16_t_u_u((((0xD318431BL >= 0x7CF3D009L), g_20) > 65535UL), g_33[0][1][0]))))) >= g_31.f0)))) != l_19) || 0xC743L) >= 0x0EL) > l_38);
  }
  return g_45;
}

static uint32_t func_9(int16_t p_10, uint64_t p_11, const uint32_t p_12, int32_t p_13) {
  (*g_35) = &g_24;
  return p_12;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
  transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
  transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
  transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
  transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
  transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
  transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
  transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
  transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
  transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
  transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
  transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
  transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
  transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_33[i][j][k], "g_33[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_45, "g_45", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
