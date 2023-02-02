// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  signed f0 : 23;
  signed f1 : 16;
};
#pragma pack(pop)

union U1 {
  int32_t f0;
};

union U2 {
  const uint16_t f0;
  volatile uint8_t f1;
  uint32_t f2;
};

static int32_t g_3 = 0x073FF82FL;
static int32_t g_11 = 0x303F0244L;
static int16_t g_12 = 1L;
static int32_t *volatile *const volatile g_23 = (void *)0;
static int16_t g_25 = 0xD1D2L;
static int32_t *volatile g_26 = (void *)0;
static uint32_t g_28 = 4294967295UL;
static volatile union U2 g_30 = {0x0D28L};
static struct S0 g_32 = {682, 128};
static struct S0 g_34 = {-2129, 229};
static struct S0 *volatile g_33 = &g_34;
static union U1 g_35 = {0xDA259C42L};

static union U1 func_1(void);
static uint64_t func_6(uint32_t p_7);

static union U1 func_1(void) {
  int16_t l_2[1][2];
  int64_t l_29 = 0L;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_2[i][j] = 0x04B2L;
  }
  for (g_3 = 0; (g_3 >= 0); g_3 -= 1) {
    int32_t *l_20 = &g_3;
    int32_t **l_19 = &l_20;
    int16_t *l_24 = &g_25;
    int32_t *l_27[3];
    struct S0 l_31 = {229, 167};
    int i;
    for (i = 0; i < 3; i++)
      l_27[i] = &g_11;
    g_28 = ((safe_div_func_uint64_t_u_u((g_3, func_6(g_3)), (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((*l_24) ^= ((safe_mul_func_int8_t_s_s((((*l_19) = &g_3) != &g_3), (((safe_sub_func_uint8_t_u_u(3UL, ((l_19 != g_23) || l_2[0][1]))) > 1L) == g_3))) & g_3)) <= 0xF9A4L), 0UL)), g_3)))) <= g_3);
    if (l_29)
      break;
    for (l_29 = 0; (l_29 <= 0); l_29 += 1) {
      (*l_19) = (g_30, &g_3);
      for (g_28 = 0; (g_28 <= 0); g_28 += 1) {
        (*g_33) = (g_32 = l_31);
      }
    }
  }
  return g_35;
}

static uint64_t func_6(uint32_t p_7) {
  uint64_t l_8 = 18446744073709551615UL;
  uint64_t l_9 = 0x1D594D0357257EA0LL;
  int32_t *l_10 = &g_11;
  g_12 = ((*l_10) = (g_3 <= ((l_8, g_3), (l_9 = g_3))));
  return (*l_10);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
  transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
  transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
  transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
