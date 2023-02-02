// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x659D568DL;
static volatile int32_t g_5 = 0x48C443EBL;
static int32_t g_6 = 1L;
static volatile int32_t g_9 = 6L;
static volatile int32_t g_10 = 3L;
static int32_t g_11 = 0L;
static int32_t **volatile g_14 = (void *)0;
static int32_t g_16 = (-7L);
static int32_t *g_15 = &g_16;
static uint64_t g_28 = 0UL;

static uint32_t func_1(void);
static int64_t func_17(uint32_t p_18, int32_t **p_19, int32_t **p_20, uint64_t p_21);

static uint32_t func_1(void) {
  uint8_t l_26[1];
  int32_t l_38 = 0xDDA5659CL;
  int i;
  for (i = 0; i < 1; i++)
    l_26[i] = 0x6DL;
  for (g_2 = 24; (g_2 <= (-28)); g_2 = safe_sub_func_int16_t_s_s(g_2, 1)) {
    int32_t l_22 = (-2L);
    int32_t **l_23 = (void *)0;
    uint64_t *l_27[3][4] = {{&g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28}};
    int i, j;
    for (g_6 = (-10); (g_6 == (-21)); g_6--) {
      for (g_11 = (-24); (g_11 == 20); g_11++) {
        g_15 = &g_11;
      }
    }
    l_38 &= (func_17(l_22, &g_15, l_23, (g_2, ((safe_rshift_func_int64_t_s_u(l_26[0], (g_28 = (l_23 == &g_15)))), (safe_rshift_func_uint64_t_u_u((((safe_mul_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_26[0], ((*g_15) || g_6))), g_6)) && g_5) != g_28), 0))))) > l_26[0]);
  }
  return g_9;
}

static int64_t func_17(uint32_t p_18, int32_t **p_19, int32_t **p_20, uint64_t p_21) {
  uint16_t l_35 = 0xD076L;
  --l_35;
  return g_11;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
