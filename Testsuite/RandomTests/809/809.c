// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  unsigned f0 : 30;
  signed f1 : 27;
};
#pragma pack(pop)

static uint8_t g_2 = 0xD0L;
static int32_t g_4[3][4] = {{0x0F4F2301L, 0x0F4F2301L, 0x0F4F2301L, 0x0F4F2301L}, {0x0F4F2301L, 0x0F4F2301L, 0x0F4F2301L, 0x0F4F2301L}, {0x0F4F2301L, 0x0F4F2301L, 0x0F4F2301L, 0x0F4F2301L}};
static int32_t g_6 = 0xA7790412L;
static volatile struct S0 g_9[3] = {{4279, -6311}, {4279, -6311}, {4279, -6311}};
static int32_t *g_15 = &g_4[1][2];
static int32_t *const *g_23 = (void *)0;
static int32_t *const **const volatile g_22[1][4][1] = {{{&g_23}, {(void *)0}, {&g_23}, {(void *)0}}};
static int32_t *const **volatile g_24 = &g_23;
static int8_t g_27[5] = {0xB1L, 0xB1L, 0xB1L, 0xB1L, 0xB1L};

static int16_t func_1(void);
static int64_t func_17(uint32_t p_18, int32_t *p_19, int32_t *const p_20);

static int16_t func_1(void) {
  int32_t *l_3 = &g_4[1][2];
  int32_t *l_5[3][3] = {{(void *)0, (void *)0, (void *)0}, {&g_6, &g_6, &g_6}, {(void *)0, (void *)0, (void *)0}};
  uint32_t l_28 = 0x60039C1DL;
  struct S0 l_34 = {6433, 666};
  int i, j;
  g_6 ^= ((*l_3) ^= g_2);
  for (g_6 = 0; (g_6 == 1); g_6 = safe_add_func_int8_t_s_s(g_6, 3)) {
    int32_t *l_21 = &g_4[1][2];
    struct S0 *l_35[3];
    int i;
    for (i = 0; i < 3; i++)
      l_35[i] = &l_34;
    if ((g_9[1], g_4[1][1])) {
      for (g_2 = 0; (g_2 < 12); g_2 = safe_add_func_uint64_t_u_u(g_2, 8)) {
        const uint8_t l_16 = 0x4DL;
        g_27[4] ^= (((*l_21) ^= (+(((safe_rshift_func_uint64_t_u_s((((((g_15 = (void *)0) != (void *)0), l_16) && ((void *)0 == &g_6)) || g_6), func_17((&g_4[1][2] != l_21), &g_6, l_21))) <= 0x18L) > 0x954EL))) == l_16);
      }
      if (l_28)
        break;
    } else {
      uint8_t l_29 = 249UL;
      l_29--;
      for (g_2 = 0; (g_2 > 46); g_2 = safe_add_func_int8_t_s_s(g_2, 9)) {
        if ((*l_21))
          break;
        if ((*l_21))
          break;
      }
    }
    g_9[1] = l_34;
  }
  return g_2;
}

static int64_t func_17(uint32_t p_18, int32_t *p_19, int32_t *const p_20) {
  int32_t **l_26 = (void *)0;
  int32_t ***l_25 = &l_26;
  (*g_24) = &p_20;
  (*l_25) = (void *)0;
  return p_18;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_9[i].f0, "g_9[i].f0", print_hash_value);
    transparent_crc(g_9[i].f1, "g_9[i].f1", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 5; i++) {
    transparent_crc(g_27[i], "g_27[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
