// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile uint16_t f0;
  uint16_t f1;
  const volatile uint32_t f2;
};

static int32_t g_3 = 0x811F07B4L;
static union U0 g_15[1] = {{0x5466L}};
static volatile int16_t g_17 = 0x5D76L;
static int32_t g_18 = (-9L);
static volatile uint64_t g_20 = 0x084EDC0223DEC995LL;
static union U0 g_42 = {0x8169L};
static union U0 *g_41[3] = {&g_42, &g_42, &g_42};
static int64_t g_44 = 0L;
static int32_t *volatile g_51 = &g_18;

static uint8_t func_1(void);
static union U0 *func_6(int32_t *p_7, uint64_t p_8, int8_t p_9, union U0 *const p_10, uint8_t p_11);

static uint8_t func_1(void) {
  int64_t l_2[1][4] = {{0xF94964A53AA9AC70LL, 0xF94964A53AA9AC70LL, 0xF94964A53AA9AC70LL, 0xF94964A53AA9AC70LL}};
  union U0 *const l_14 = &g_15[0];
  int i, j;
  for (g_3 = 0; (g_3 <= 0); g_3 += 1) {
    int32_t *l_5 = &g_3;
    int32_t **l_4 = &l_5;
    union U0 **l_46 = &g_41[0];
    (*l_4) = (void *)0;
    (*l_46) = func_6(&g_3, ((safe_rshift_func_uint32_t_u_u((0xFEL > g_3), 9)) >= l_2[0][1]), g_3, l_14, l_2[0][3]);
    for (g_42.f1 = 0; (g_42.f1 <= 0); g_42.f1 += 1) {
      int32_t *l_50 = (void *)0;
      int i, j;
      (*g_51) |= (safe_mul_func_int8_t_s_s((!l_2[g_3][(g_3 + 3)]), (&g_41[0] != (l_46 = &g_41[0]))));
    }
  }
  return l_2[0][2];
}

static union U0 *func_6(int32_t *p_7, uint64_t p_8, int8_t p_9, union U0 *const p_10, uint8_t p_11) {
  int32_t l_16 = 0xBD850270L;
  int32_t l_39[3];
  uint16_t l_43 = 4UL;
  union U0 *l_45 = &g_15[0];
  int i;
  for (i = 0; i < 3; i++)
    l_39[i] = (-9L);
  if (((p_9 < (g_15[0], l_16)) > 4294967293UL)) {
    int32_t *l_19[4][2] = {{(void *)0, (void *)0}, {(void *)0, (void *)0}, {(void *)0, (void *)0}, {(void *)0, (void *)0}};
    int i, j;
    g_20--;
    g_18 ^= g_20;
  } else {
    union U0 *l_40 = &g_15[0];
    g_44 ^= (safe_lshift_func_int16_t_s_s((g_18 && (p_11 && (((((((((l_39[2] ^= ((0x807CL == (((p_9 == (((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int64_t_s_s((safe_mul_func_uint32_t_u_u(p_9, 4294967295UL)), 23)) ^ 0xC359L) ^ (l_16 == (safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((&p_7 == &p_7), 1UL)), 18446744073709551615UL)))), p_9)), p_9)) & l_16) > g_17)) > g_18) && (-1L))), 0xBBL)) >= g_3) == (-3L)), l_40) != g_41[0]) != p_9) && 9L) <= l_43), l_16))), g_18));
  }
  return l_45;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_15[i].f0, "g_15[i].f0", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
