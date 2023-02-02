// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  const volatile uint8_t f0;
};
#pragma pack(pop)

static int32_t g_3 = (-5L);
static int16_t g_12 = 0x70A5L;
static struct S0 g_19 = {0x42L};
static int64_t g_21 = 8L;
static uint32_t g_45 = 0x717C9257L;
static uint8_t g_47 = 3UL;
static uint64_t g_49 = 0xB66C146DF8000858LL;
static int8_t g_51 = 3L;
static int32_t g_61 = 0xD326D35DL;

static int32_t func_1(void);
static int32_t func_4(int8_t p_5, uint8_t p_6, int32_t *p_7);

static int32_t func_1(void) {
  int32_t *l_2 = &g_3;
  int16_t *l_11 = &g_12;
  l_2 = (void *)0;
  if (func_4((g_3, (+((safe_mod_func_uint64_t_u_u(0x38C08872FA4AD744LL, g_3)) <= ((*l_11) ^= 0x9576L)))), g_3, &g_3)) {
    for (g_21 = 0; (g_21 <= (-25)); g_21 = safe_sub_func_int32_t_s_s(g_21, 9)) {
      int16_t l_58 = 5L;
      return l_58;
    }
  } else {
    for (g_47 = 23; (g_47 > 41); g_47 = safe_add_func_uint16_t_u_u(g_47, 6)) {
      return g_49;
    }
  }
  return g_61;
}

static int32_t func_4(int8_t p_5, uint8_t p_6, int32_t *p_7) {
  int64_t *l_20[3];
  int32_t l_22 = 0x04B064BAL;
  const int32_t l_43[2] = {(-1L), (-1L)};
  int16_t *l_44 = (void *)0;
  uint8_t *l_46 = &g_47;
  uint64_t *l_48 = &g_49;
  int8_t *l_50 = &g_51;
  int i;
  for (i = 0; i < 3; i++)
    l_20[i] = &g_21;
  (*p_7) = (((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_3, (safe_lshift_func_int64_t_s_u((l_22 = (g_19, p_6)), 32)))), ((!((safe_mul_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_12, g_21)), (((*l_50) = ((((-1L) == ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint64_t_u_s(((*l_48) = (safe_mul_func_uint8_t_u_u(((*l_46) = (((safe_sub_func_int64_t_s_s(2L, (((safe_add_func_uint32_t_u_u(((g_45 &= (((((~(0UL || (safe_mod_func_uint32_t_u_u((p_6 != 0L), l_43[1])))), (void *)0) == p_7) ^ g_12) > p_5)) < 0x32D7L), l_43[1])) < 0UL) || g_21))) >= 5UL) != 1UL)), g_12))), l_43[1])), g_21)), g_21)) | l_43[0])), g_12) > (*p_7))) ^ l_43[0]))), l_43[1])) ^ g_3))) == 4294967295UL), (*p_7));
  for (g_51 = 0; (g_51 != 0); ++g_51) {
    int32_t l_55 = 0x257DE97EL;
    (*p_7) = g_12;
    for (p_5 = 0; (p_5 <= 2); p_5 += 1) {
      uint32_t l_54 = 18446744073709551614UL;
      if (l_54)
        break;
      if (l_55) {
        (*p_7) = (-1L);
      } else {
        if ((*p_7))
          break;
      }
    }
  }
  return l_43[1];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  transparent_crc(g_61, "g_61", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
