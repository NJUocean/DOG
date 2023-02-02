// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  signed f0 : 13;
};

static volatile uint64_t g_11 = 18446744073709551615UL;
static const int32_t g_13[4] = {0xF2BA167CL, 0xF2BA167CL, 0xF2BA167CL, 0xF2BA167CL};
static int32_t g_18 = (-10L);
static const int32_t *g_22 = &g_18;
static const int32_t **volatile g_21 = &g_22;

static uint32_t func_1(void);
static int64_t func_7(uint32_t p_8, const int8_t p_9, struct S0 p_10);

static uint32_t func_1(void) {
  uint8_t l_6[2];
  struct S0 l_14 = {-59};
  const int32_t *l_20 = &g_18;
  int i;
  for (i = 0; i < 2; i++)
    l_6[i] = 0xBFL;
  if ((safe_mul_func_int16_t_s_s(0x568DL, (safe_rshift_func_uint16_t_u_s(l_6[0], 3))))) {
    struct S0 l_12 = {-30};
    int32_t *l_17 = &g_18;
    (*l_17) = ((l_6[0], (((l_6[0], (func_7((g_11 && (l_12, (g_11 > l_12.f0))), g_13[2], l_14) ^ (-1L))) ^ g_13[2]), g_13[2])) < g_13[2]);
  } else {
    uint16_t l_19 = 6UL;
    return l_19;
  }
  (*g_21) = l_20;
  return (*l_20);
}

static int64_t func_7(uint32_t p_8, const int8_t p_9, struct S0 p_10) {
  for (p_8 = (-1); (p_8 == 53); ++p_8) {
    return p_10.f0;
  }
  return g_13[2];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_13[i], "g_13[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_18, "g_18", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
