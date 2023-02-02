// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  signed f0 : 11;
  signed f1 : 20;
  signed f2 : 6;
};
#pragma pack(pop)

static volatile int32_t *volatile g_2 = (void *)0;
static int32_t *g_3 = (void *)0;
static int32_t g_9 = 0xFA42B483L;
static const struct S0 g_28[4][4] = {{{14, -50, -4}, {14, 587, 5}, {14, -50, -4}, {14, -50, -4}}, {{14, 587, 5}, {14, 587, 5}, {-1, 243, -3}, {14, 587, 5}}, {{14, 587, 5}, {14, -50, -4}, {14, -50, -4}, {14, 587, 5}}, {{14, -50, -4}, {14, 587, 5}, {14, -50, -4}, {14, -50, -4}}};
static struct S0 g_30 = {-25, 886, -0};
static struct S0 *volatile g_29 = &g_30;
static int32_t g_34 = 0L;

static uint64_t func_1(void);
static int32_t *func_4(int32_t *p_5, uint8_t p_6, int32_t *p_7);

static uint64_t func_1(void) {
  int32_t *l_8[5][2][4] = {{{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}, {{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}, {{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}, {{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}, {{&g_9, &g_9, &g_9, &g_9}, {&g_9, &g_9, &g_9, &g_9}}};
  int32_t **l_14 = &g_3;
  int32_t *l_16 = &g_9;
  int32_t **l_15 = &l_16;
  const uint32_t l_25 = 2UL;
  uint32_t l_35 = 1UL;
  int i, j, k;
  (*l_14) = ((g_2 != g_3), func_4(l_8[4][0][1], (((safe_add_func_int16_t_s_s(g_9, ((safe_add_func_uint32_t_u_u(g_9, (((((*l_14) = l_8[2][1][1]) == ((*l_15) = &g_9)) <= ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((g_9, (safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(l_25, g_9)), g_9))) <= 0UL), g_9)), 0xD1L)), g_9)) >= g_9))), g_9))) && (**l_15)), 0x98L), &g_9));
  --l_35;
  return (*l_16);
}

static int32_t *func_4(int32_t *p_5, uint8_t p_6, int32_t *p_7) {
  for (p_6 = 0; (p_6 != 34); p_6++) {
    (*g_29) = g_28[2][0];
  }
  for (g_9 = (-14); (g_9 != 5); g_9 = safe_add_func_uint64_t_u_u(g_9, 1)) {
    int32_t *l_33 = &g_34;
    (*l_33) ^= 0x80563ADEL;
  }
  return p_7;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_28[i][j].f0, "g_28[i][j].f0", print_hash_value);
      transparent_crc(g_28[i][j].f1, "g_28[i][j].f1", print_hash_value);
      transparent_crc(g_28[i][j].f2, "g_28[i][j].f2", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
  transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
