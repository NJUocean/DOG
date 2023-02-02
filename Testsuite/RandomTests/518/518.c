// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  volatile int32_t f0;
  int64_t f1;
};

union U4 {
  volatile struct S1 f0;
};

static int32_t g_7 = 0x9CEC79E6L;
static int32_t *g_6 = &g_7;
static union U4 g_17 = {{0x2758E92EL, 0L}};

static int32_t func_1(void);
static int32_t *const func_2(int32_t *p_3, uint32_t p_4, uint16_t p_5);

static int32_t func_1(void) {
  uint16_t l_10 = 0x15D0L;
  int32_t *l_22 = &g_7;
  l_22 = func_2(g_6, (g_7 < (((safe_lshift_func_uint32_t_u_s(l_10, (safe_add_func_uint32_t_u_u((((-9L) ^ (safe_add_func_uint64_t_u_u(g_7, l_10))) ^ (safe_sub_func_int64_t_s_s(((g_17, &g_7) == &g_7), l_10))), 0xEFD06BDEL)))) > 0xF6CBCB1AL), g_7)), g_7);
  return g_17.f0.f0;
}

static int32_t *const func_2(int32_t *p_3, uint32_t p_4, uint16_t p_5) {
  int16_t l_20 = 0x1846L;
  int32_t l_21 = 0x7F59EC13L;
  l_21 |= (l_20 | ((*p_3) != 0x0016488AL));
  return p_3;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_17.f0.f0, "g_17.f0.f0", print_hash_value);
  transparent_crc(g_17.f0.f1, "g_17.f0.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
