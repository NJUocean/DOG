// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 28;
  signed f1 : 1;
};

static uint32_t g_17 = 0x97515801L;
static volatile int32_t g_24 = (-4L);
static struct S0 *volatile g_30 = (void *)0;
static struct S0 g_32 = {5854, 0};
static struct S0 *volatile g_31 = &g_32;
static uint32_t g_41 = 4294967295UL;
static uint8_t g_47 = 7UL;
static uint32_t g_51 = 0x13AABDC9L;
static uint8_t g_54 = 0UL;
static int32_t g_56 = 0x396434D1L;
static int32_t g_59 = (-8L);

static uint32_t func_1(void);
static uint8_t func_11(uint32_t p_12, uint64_t p_13, uint8_t p_14, const uint16_t p_15, int32_t p_16);

static uint32_t func_1(void) {
  const int8_t l_6 = 8L;
  const uint32_t l_23 = 0x5DB2B058L;
  int8_t l_57[1];
  int32_t *l_58 = &g_59;
  int i;
  for (i = 0; i < 1; i++)
    l_57[i] = (-1L);
  (*l_58) |= (safe_mul_func_int8_t_s_s(0x0CL, (((safe_mod_func_uint64_t_u_u(l_6, l_6)) != ((safe_mul_func_int64_t_s_s((safe_mul_func_int32_t_s_s(0x8591B68DL, (((func_11(g_17, g_17, g_17, (((((l_6 >= (safe_div_func_int32_t_s_s((+(safe_div_func_uint16_t_u_u((l_6, l_6), l_23))), g_24))), 0L) == g_17) == 0xD7FEL) | l_23), l_6), l_6) > g_51) || 0x0869L))), 0x4F4D21FD00955DF9LL)) | l_57[0])), g_32.f0)));
  return g_41;
}

static uint8_t func_11(uint32_t p_12, uint64_t p_13, uint8_t p_14, const uint16_t p_15, int32_t p_16) {
  int32_t l_39[4];
  int32_t l_52 = 0L;
  int i;
  for (i = 0; i < 4; i++)
    l_39[i] = (-7L);
  for (g_17 = 0; (g_17 <= 19); ++g_17) {
    struct S0 l_29 = {4540, -0};
    uint32_t *l_40 = &g_41;
    uint8_t *l_46 = &g_47;
    uint32_t *l_50[4][5][5] = {{{&g_17, (void *)0, &g_17, &g_17, (void *)0}, {&g_17, &g_17, &g_51, &g_17, &g_51}, {(void *)0, (void *)0, &g_51, (void *)0, &g_51}, {&g_51, &g_17, &g_51, (void *)0, (void *)0}, {&g_51, &g_17, &g_17, &g_51, &g_17}},
                               {{(void *)0, &g_17, &g_17, &g_17, (void *)0}, {&g_17, (void *)0, &g_17, &g_17, (void *)0}, {(void *)0, &g_17, &g_51, &g_17, &g_51}, {&g_51, (void *)0, &g_51, (void *)0, (void *)0}, {&g_51, &g_17, &g_17, (void *)0, &g_51}},
                               {{&g_17, &g_51, (void *)0, &g_17, (void *)0}, {&g_51, &g_17, &g_17, &g_17, &g_51}, {&g_51, &g_17, (void *)0, (void *)0, &g_17}, {&g_51, &g_51, &g_17, (void *)0, &g_51}, {&g_17, &g_17, (void *)0, &g_17, &g_17}},
                               {{&g_17, &g_17, &g_17, (void *)0, &g_51}, {&g_17, &g_51, &g_51, &g_17, (void *)0}, {&g_51, &g_17, &g_17, &g_17, &g_51}, {&g_51, &g_17, &g_51, (void *)0, &g_17}, {&g_51, &g_51, &g_51, &g_17, &g_51}}};
    uint8_t *l_53 = &g_54;
    int32_t *l_55 = &g_56;
    int i, j, k;
    for (p_13 = (-5); (p_13 >= 56); p_13 = safe_add_func_int16_t_s_s(p_13, 4)) {
      (*g_31) = l_29;
    }
    (*l_55) &= (safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((*l_53) = (0x42796A450C197911LL != ((((*l_40) = l_39[1]), g_41) && (g_17 ^ ((safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint32_t_u_s((((*l_46) = l_39[1]), (safe_sub_func_int64_t_s_s((0xDFL == ((*l_46) &= (l_39[1] == p_12))), (((l_52 = (l_39[2], g_41)), &g_41) != (void *)0)))), p_14)) || p_15), g_32.f1), 18446744073709551615UL)) && 0x1C6C8ECDCC21D2CFLL))))), 0x6CL)), l_29.f0)), 3UL));
  }
  return g_32.f0;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  transparent_crc(g_54, "g_54", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  transparent_crc(g_59, "g_59", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
