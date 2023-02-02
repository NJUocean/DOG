// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  signed f0 : 4;
};
#pragma pack(pop)

static volatile int32_t g_2[1] = {0x3099CFE0L};
static uint32_t g_16 = 18446744073709551615UL;
static struct S0 g_17 = {-2};
static uint32_t g_19 = 0x223DEC99L;
static uint32_t g_21 = 0xA9D9E177L;
static uint64_t g_22 = 18446744073709551611UL;
static int32_t *volatile g_24 = (void *)0;
static int32_t g_26 = (-4L);
static int32_t *const volatile g_25 = &g_26;

static uint8_t func_1(void);
static int32_t func_5(struct S0 p_6, uint32_t p_7, int32_t p_8, int8_t p_9, int8_t p_10);

static uint8_t func_1(void) {
  struct S0 l_11[4][2][4] = {{{{0}, {0}, {-3}, {0}}, {{0}, {3}, {3}, {0}}}, {{{3}, {0}, {3}, {3}}, {{0}, {0}, {-3}, {0}}}, {{{0}, {3}, {3}, {0}}, {{3}, {0}, {3}, {3}}}, {{{0}, {0}, {-3}, {0}}, {{0}, {3}, {3}, {0}}}};
  uint32_t *l_18 = &g_19;
  uint32_t *l_20 = &g_21;
  int i, j, k;
  (*g_25) = (((g_2[0], ((safe_rshift_func_int8_t_s_u(((((g_2[0], func_5(l_11[1][0][3], l_11[1][0][3].f0, ((safe_sub_func_int64_t_s_s(g_2[0], ((246UL <= ((((safe_mod_func_uint64_t_u_u(((g_22 &= (g_16 == ((0xD76270E7L == ((*l_20) = ((*l_18) ^= (g_17, 1UL)))) < g_17.f0))) && l_11[1][0][3].f0), (-6L))) >= l_11[1][0][3].f0) & l_11[1][0][3].f0) & 4UL)) & l_11[1][0][3].f0))) < l_11[1][0][3].f0), g_17.f0, g_16)), 1UL) || l_11[1][0][3].f0) >= l_11[1][0][3].f0), 2)) >= l_11[1][0][3].f0)) >= l_11[1][0][3].f0) != 0xF9531DEFL);
  return l_11[1][0][3].f0;
}

static int32_t func_5(struct S0 p_6, uint32_t p_7, int32_t p_8, int8_t p_9, int8_t p_10) {
  int64_t l_23 = 0xB64B6930509B9552LL;
  return l_23;
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
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
