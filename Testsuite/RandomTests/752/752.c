// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int16_t f0;
  unsigned f1 : 25;
  signed f2 : 23;
  const unsigned f3 : 7;
};

static uint8_t g_14[2] = {0xBFL, 0xBFL};
static volatile int8_t g_24 = 1L;
static uint8_t g_26 = 0UL;
static uint8_t *g_25 = &g_26;
static uint8_t g_27 = 0x76L;
static struct S0 g_30 = {0xE177L, 540, -2276, 7};
static int16_t g_33 = 0xB63EL;
static int32_t g_35 = 0xB6930509L;

static uint64_t func_1(void);
static uint32_t func_7(uint8_t p_8, uint8_t p_9, int64_t p_10, int64_t p_11, int64_t p_12);

static uint64_t func_1(void) {
  uint8_t *l_13 = &g_14[1];
  int32_t l_21 = 0x7D50F82BL;
  uint32_t l_28[4][2] = {{0x06721F7DL, 0x06721F7DL}, {0x06721F7DL, 0x06721F7DL}, {0x06721F7DL, 0x06721F7DL}, {0x06721F7DL, 0x06721F7DL}};
  int32_t *l_34[4][2][1] = {{{&g_35}, {&g_35}}, {{&l_21}, {&g_35}}, {{&g_35}, {&l_21}}, {{&g_35}, {&g_35}}};
  int i, j, k;
  g_35 |= (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((!251UL), func_7((++(*l_13)), (0x06310FECAFE8B0D1LL & (safe_rshift_func_uint32_t_u_s((safe_sub_func_int64_t_s_s(l_21, 0xF6E229EDCA8FECF7LL)), (safe_mul_func_uint8_t_u_u((g_24 == ((*g_25) = ((0xAB6DL && 0x816FL), (g_25 == (void *)0)))), 5UL))))), g_27, g_27, l_28[0][0]))), g_33));
  return g_14[0];
}

static uint32_t func_7(uint8_t p_8, uint8_t p_9, int64_t p_10, int64_t p_11, int64_t p_12) {
  struct S0 *l_29 = &g_30;
  struct S0 **l_31 = &l_29;
  int32_t l_32 = 4L;
  (*l_31) = l_29;
  return l_32;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    transparent_crc(g_14[i], "g_14[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
  transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
  transparent_crc(g_30.f3, "g_30.f3", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
