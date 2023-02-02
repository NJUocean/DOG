// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const uint8_t f0;
};

static int8_t g_2 = 5L;
static uint64_t g_4 = 18446744073709551606UL;
static uint64_t g_20 = 1UL;
static uint64_t *g_19 = &g_20;
static uint64_t *g_22 = &g_20;
static uint64_t *g_23[2][1] = {{&g_20}, {&g_20}};
static struct S0 g_25 = {255UL};
static struct S0 *g_24 = &g_25;
static struct S0 **volatile g_26 = (void *)0;
static struct S0 **volatile g_27 = &g_24;
static int32_t g_29 = (-6L);
static int8_t g_32 = 1L;
static volatile int32_t g_33 = 5L;
static uint8_t g_34 = 0x08L;

static int32_t func_1(void);
static uint64_t func_7(int32_t p_8, uint64_t *p_9, uint64_t *p_10, uint64_t *p_11);

static int32_t func_1(void) {
  uint64_t *l_3 = &g_4;
  const int32_t l_16[2] = {0xF1ADB2BCL, 0xF1ADB2BCL};
  uint64_t **l_21[3];
  int32_t *l_28[3];
  uint32_t l_30 = 4294967289UL;
  int32_t l_31 = 0L;
  int i;
  for (i = 0; i < 3; i++)
    l_21[i] = (void *)0;
  for (i = 0; i < 3; i++)
    l_28[i] = &g_29;
  l_30 ^= ((--(*l_3)) < func_7((safe_lshift_func_int64_t_s_s((safe_rshift_func_uint64_t_u_s(l_16[1], 44)), (0UL ^ (safe_lshift_func_uint8_t_u_s(l_16[1], 2))))), (g_19 = g_19), &g_20, (g_23[1][0] = (g_22 = &g_20))));
  ++g_34;
  return g_34;
}

static uint64_t func_7(int32_t p_8, uint64_t *p_9, uint64_t *p_10, uint64_t *p_11) {
  (*g_27) = g_24;
  return (*p_11);
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
