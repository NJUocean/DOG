// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  uint32_t f0;
  int32_t f1;
  const int16_t f2;
};

union U2 {
  const uint8_t f0;
  int64_t f1;
  uint32_t f2;
};

static uint64_t g_3[1] = {0xED9A924C00011151LL};
static union U2 g_13 = {0x36L};
static int64_t g_35[2] = {0x02BE2FF5FF74F57BLL, 0x02BE2FF5FF74F57BLL};
static uint8_t g_37 = 0xE3L;
static int8_t g_40 = 3L;
static uint64_t g_42 = 0x6315BFEB1EC6C048LL;
static int32_t g_44 = 0xCA8B1460L;
static int64_t g_49 = 0L;
static volatile int32_t g_50 = (-1L);
static uint8_t g_53 = 0UL;

static uint64_t func_1(void);
static int32_t func_6(union U1 p_7, union U2 p_8, uint64_t p_9, uint32_t p_10, const union U2 p_11);

static uint64_t func_1(void) {
  union U1 l_12 = {0x0D0714ADL};
  int32_t l_48 = (-3L);
  int32_t l_51 = 1L;
  if (((g_3[0] ^= (!4294967288UL)), (safe_mod_func_uint32_t_u_u(g_3[0], func_6(l_12, g_13, l_12.f0, g_13.f0, g_13))))) {
    int32_t *l_45[3];
    int i;
    for (i = 0; i < 3; i++)
      l_45[i] = &g_44;
    g_44 = 2L;
    for (g_37 = 0; (g_37 == 55); g_37 = safe_add_func_int8_t_s_s(g_37, 6)) {
      int32_t l_52 = 0x441147C0L;
      g_53++;
    }
  } else {
    for (g_49 = 22; (g_49 <= (-27)); --g_49) {
      return l_48;
    }
  }
  return l_12.f0;
}

static int32_t func_6(union U1 p_7, union U2 p_8, uint64_t p_9, uint32_t p_10, const union U2 p_11) {
  int32_t l_21 = 0xC27F355CL;
  int64_t *l_34 = &g_35[0];
  int64_t *l_36 = (void *)0;
  int32_t l_38 = (-5L);
  int8_t *l_39 = &g_40;
  uint64_t *l_41 = &g_42;
  int32_t *l_43[1];
  int i;
  for (i = 0; i < 1; i++)
    l_43[i] = &g_44;
  g_44 ^= ((safe_mul_func_int32_t_s_s((safe_div_func_int64_t_s_s(0L, (~(((g_3[0] == (p_11, (((g_13.f0 && 0x6DFC9B996A530863LL) & ((0L > (((*l_41) = (safe_mul_func_int32_t_s_s(l_21, (safe_lshift_func_uint8_t_u_u(g_13.f0, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((*l_39) ^= (((l_38 ^= ((((safe_sub_func_int16_t_s_s((((safe_div_func_int64_t_s_s((g_37 ^= ((*l_34) |= ((safe_rshift_func_uint8_t_u_s(p_7.f0, l_21)) | g_3[0]))), g_3[0])) ^ l_21) | 0xB7L), p_8.f0)) || 0x9A5C1B09C821F997LL) < p_7.f0), l_21)) == g_13.f0) || 4294967295UL)) == (-1L)), 4)), 0x10L))))))) > g_3[0])) & p_10)), p_8.f0))) <= l_21) || l_38)))), l_21)) != p_7.f0);
  return p_9;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_35[i], "g_35[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_53, "g_53", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
