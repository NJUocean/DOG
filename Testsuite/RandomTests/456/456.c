// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  signed f0 : 8;
  signed f1 : 31;
  unsigned f2 : 10;
};

static volatile int32_t g_2[5][2] = {{(-7L), 0L}, {0L, (-7L)}, {0L, 0L}, {(-7L), 0L}, {0L, (-7L)}};
static volatile int32_t g_3 = 0x1AC48889L;
static volatile int32_t g_4 = (-10L);
static volatile int32_t g_5 = 0x13281D21L;
static volatile int32_t g_6 = 0xB32A831DL;
static volatile int32_t g_7 = 0xC17E5C28L;
static volatile int32_t g_8[1][3] = {{0x96B779C6L, 0x96B779C6L, 0x96B779C6L}};
static int32_t g_9 = 0L;
static int32_t g_12 = 7L;
static int32_t g_14 = 0x73A4C924L;
static struct S1 g_27 = {-5, 28763, 21};
static int8_t g_41 = 0L;
static int32_t g_47 = 1L;
static const volatile struct S1 g_50 = {-5, 8723, 12};
static const volatile struct S1 *volatile g_49 = &g_50;

static uint16_t func_1(void);
static int16_t func_19(int32_t *p_20, uint32_t p_21, struct S1 *p_22, int32_t p_23, uint64_t p_24);

static uint16_t func_1(void) {
  int32_t *l_25 = &g_12;
  struct S1 *l_26 = &g_27;
  for (g_9 = (-21); (g_9 > 29); g_9++) {
    uint32_t l_16 = 0x14383674L;
    for (g_12 = 0; (g_12 <= 1); g_12 += 1) {
      int32_t *l_13 = &g_14;
      int32_t *l_15 = &g_14;
      int8_t *l_40[5] = {&g_41, &g_41, &g_41, &g_41, &g_41};
      int32_t *l_46 = &g_47;
      int32_t l_48 = 0x9D376396L;
      int i, j;
      l_16++;
      g_49 = ((func_19(l_25, g_2[g_12][g_12], l_26, ((*l_46) = (safe_add_func_uint64_t_u_u((g_27.f0 | ((safe_rshift_func_uint16_t_u_s((g_27.f1, ((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(((((*l_13) = g_27.f0), ((safe_sub_func_int64_t_s_s((g_14 >= l_16), (safe_rshift_func_int64_t_s_s((*l_25), 12)))) & 0x104ACD6BL)) > 0x2AL), g_12)) && 0x12D4L) < 0x140A9711F64DB2A9LL), (*l_25))), 8)) && 0x56L), g_27.f2)), g_41)), 2)), 0x52L)), g_27.f2))), l_48) | g_9), (void *)0);
    }
    (*l_25) |= g_47;
  }
  return g_5;
}

static int16_t func_19(int32_t *p_20, uint32_t p_21, struct S1 *p_22, int32_t p_23, uint64_t p_24) { return g_8[0][1]; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++) {
      transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
  transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
  transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
  transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
  transparent_crc(g_50.f2, "g_50.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
