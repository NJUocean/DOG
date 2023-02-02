// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  uint32_t f0;
  volatile uint8_t f1;
  uint16_t f2;
  const int64_t f3;
};

static int32_t g_3 = 6L;
static volatile int32_t g_4 = 0x6EB6B9DDL;
static volatile int32_t g_5 = (-8L);
static int32_t g_6 = 1L;
static volatile int32_t g_7 = (-10L);
static int32_t g_8 = (-3L);
static const int32_t g_18 = (-2L);
static const int32_t *g_17 = &g_18;
static uint32_t g_33[2] = {0x87B332E0L, 0x87B332E0L};
static volatile struct S1 g_37[1] = {{0x46F9F111L, 0x91L, 0xB17CL, 0x8A59C2D16CF05746LL}};

static uint8_t func_1(void);
static int32_t *func_9(uint64_t p_10, uint16_t p_11, int8_t p_12, const int16_t p_13, uint16_t p_14);

static uint8_t func_1(void) {
  uint16_t l_2[3];
  int32_t *l_19 = (void *)0;
  int32_t *l_20 = (void *)0;
  int i;
  for (i = 0; i < 3; i++)
    l_2[i] = 0x48F6L;
  for (g_3 = 0; (g_3 <= 2); g_3 += 1) {
    int32_t l_28 = (-4L);
    int32_t *l_42 = (void *)0;
    for (g_6 = 0; (g_6 <= 2); g_6 += 1) {
      for (g_8 = 2; (g_8 >= 0); g_8 -= 1) {
        return l_2[0];
      }
    }
    l_42 = func_9(g_3, (((((g_17 = &g_6) == ((l_19 == l_20), &g_3)) < (+(((safe_div_func_int32_t_s_s((((7L <= g_3), (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int64_t_s_s(l_28, 61)) | (0UL && g_6)) & 0x82B357F0L), g_3))) < 0x624B6749L), 0x5CAB4306L)), (void *)0) == (void *)0))) >= 0x2AB2BC8F9611CA4BLL) == 0L), g_5, l_28, g_3);
  }
  return g_6;
}

static int32_t *func_9(uint64_t p_10, uint16_t p_11, int8_t p_12, const int16_t p_13, uint16_t p_14) {
  int32_t *l_41 = (void *)0;
  for (g_6 = 0; (g_6 == (-1)); --g_6) {
    int32_t *l_38 = (void *)0;
    int32_t *l_39 = (void *)0;
    int32_t *l_40 = &g_8;
    for (p_12 = 3; (p_12 <= (-23)); --p_12) {
      for (p_10 = 0; (p_10 <= 1); p_10 += 1) {
        int32_t *l_36[3];
        int i;
        for (i = 0; i < 3; i++)
          l_36[i] = &g_8;
        g_7 = ((safe_rshift_func_int16_t_s_s(g_33[p_10], 3)) | (1UL > p_13));
        g_8 &= (g_6 & (g_37[0], (p_12 > p_11)));
      }
    }
    (*l_40) ^= p_12;
  }
  return l_41;
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
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_33[i], "g_33[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    transparent_crc(g_37[i].f0, "g_37[i].f0", print_hash_value);
    transparent_crc(g_37[i].f1, "g_37[i].f1", print_hash_value);
    transparent_crc(g_37[i].f2, "g_37[i].f2", print_hash_value);
    transparent_crc(g_37[i].f3, "g_37[i].f3", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
