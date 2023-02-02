// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  signed f0 : 3;
  volatile int16_t f1;
  signed f2 : 20;
};
#pragma pack(pop)

struct S1 {
  signed f0 : 26;
};

static uint64_t g_5 = 18446744073709551609UL;
static struct S1 g_15 = {-1406};
static struct S1 *volatile g_19[5][2] = {{&g_15, &g_15}, {&g_15, &g_15}, {&g_15, &g_15}, {&g_15, &g_15}, {&g_15, &g_15}};
static struct S1 *volatile *volatile g_18 = &g_19[3][1];
static uint8_t g_32 = 1UL;
static int16_t g_42 = (-6L);
static int32_t g_49 = 0x128B293CL;
static int32_t *volatile g_57 = (void *)0;
static int32_t g_59 = 0x1863D476L;
static int32_t *volatile g_58[2] = {&g_59, &g_59};
static int32_t *volatile g_60 = &g_59;
static int64_t g_65 = 0x3486B686461D90BCLL;
static int32_t *volatile g_67 = &g_49;
static struct S0 g_68 = {-1, 0L, 535};
static volatile struct S0 g_77 = {-0, 0xBE05L, 646};

static int8_t func_1(void);
static uint64_t *func_7(uint8_t p_8, uint32_t p_9);

static int8_t func_1(void) {
  uint64_t *l_4[1];
  int32_t l_6 = 0xC79E672CL;
  uint64_t *l_11 = &g_5;
  uint64_t **l_10 = &l_11;
  int32_t l_63[5] = {1L, 1L, 1L, 1L, 1L};
  int64_t *l_64 = &g_65;
  uint32_t l_66 = 0UL;
  int32_t *l_79 = &g_49;
  int32_t **l_78[3][3][1] = {{{&l_79}, {&l_79}, {&l_79}}, {{&l_79}, {&l_79}, {&l_79}}, {{&l_79}, {&l_79}, {&l_79}}};
  int i, j, k;
  for (i = 0; i < 1; i++)
    l_4[i] = &g_5;
  (*g_67) = (safe_div_func_uint64_t_u_u((l_6 &= 9UL), (l_66 &= ((l_4[0] != ((*l_10) = func_7(g_5, ((-1L) && (&g_5 != ((*l_10) = l_4[0])))))) <= (((g_42, ((*l_64) = (l_63[3] ^ g_15.f0))) | 0x2286E0DAEE255298LL), g_65)))));
  g_67 = (g_68, (((safe_lshift_func_int64_t_s_s((((((safe_sub_func_uint8_t_u_u(l_63[3], (((void *)0 != &g_42) < 0xC0A08677L))) && (g_49 <= ((safe_mul_func_int32_t_s_s(l_63[1], g_32)) > ((safe_mod_func_int16_t_s_s(((g_77, g_49), 0xCEC9L), 65529UL)), g_68.f1)))), &g_32) != &g_32) & g_68.f0), l_6)) & 5UL), &l_63[0]));
  return g_59;
}

static uint64_t *func_7(uint8_t p_8, uint32_t p_9) {
  struct S1 *const l_12 = (void *)0;
  struct S1 *l_14 = &g_15;
  struct S1 **l_13 = &l_14;
  int32_t l_30 = 0xC87778E1L;
  uint8_t *l_31 = &g_32;
  int32_t l_43 = 0xC66883CEL;
  int32_t l_55 = 0xB6842A45L;
  uint64_t *l_62 = &g_5;
lbl_61:
  (*l_13) = l_12;
  if (((safe_sub_func_int8_t_s_s(8L, ((void *)0 != g_18))) != (((*l_31) = (((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s(g_5, g_15.f0)), (0x1348L && ((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint64_t_u_s((p_8 == g_15.f0), 7)), l_30)), 0x78B15B45L) == 0xAC3EFC16L) > 0UL))), l_30)) > l_30), 249UL)) | l_30))) {
    return &g_5;
  } else {
    int16_t *l_41[5];
    int32_t *l_48 = &g_49;
    uint8_t *l_54 = (void *)0;
    int32_t *l_56 = &l_55;
    int i;
    for (i = 0; i < 5; i++)
      l_41[i] = &g_42;
    (*g_60) &= ((*l_56) = (((g_32 < 1L) < (safe_lshift_func_uint16_t_u_u((((l_43 = (safe_mul_func_int64_t_s_s(((safe_mod_func_int16_t_s_s(((l_30 = l_30) == ((g_42 <= p_9) == (l_43 >= ((((((safe_rshift_func_uint64_t_u_u(((safe_lshift_func_int32_t_s_u((((*l_48) = g_15.f0) ^ (safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(p_9, 0xFC5CL)), 1UL))), 8)) <= 0xC7F5L), 55)) || g_32) < 0x05E2L) >= g_15.f0) ^ p_9) | g_42)))), 5UL)), 1L), l_43))), l_54) == &g_32), l_55))) > 0UL));
    if (l_55)
      goto lbl_61;
  }
  return l_62;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_49, "g_49", print_hash_value);
  transparent_crc(g_59, "g_59", print_hash_value);
  transparent_crc(g_65, "g_65", print_hash_value);
  transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
  transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
  transparent_crc(g_68.f2, "g_68.f2", print_hash_value);
  transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
  transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
  transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
