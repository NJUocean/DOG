// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 2;
};

static int32_t g_9 = 1L;
static int32_t *g_8[2][2][1] = {{{&g_9}, {&g_9}}, {{&g_9}, {&g_9}}};
static int8_t g_14 = 0x96L;
static int32_t **g_18 = &g_8[0][1][0];
static int32_t ***volatile g_17 = &g_18;
static uint8_t g_25 = 0xCDL;
static int16_t g_33 = 0xD475L;
static int32_t g_40 = 0L;
static int32_t *volatile g_39 = &g_40;

static int32_t func_1(void);
static int32_t *func_2(const int32_t *p_3, int32_t *p_4, int8_t p_5, int32_t *p_6);

static int32_t func_1(void) {
  const int32_t *l_7 = (void *)0;
  const int32_t l_12 = 0x81D21F1EL;
  int8_t *l_13 = &g_14;
  struct S0 l_15 = {1};
  l_7 = func_2(l_7, g_8[1][1][0], ((safe_add_func_uint8_t_u_u(l_12, l_12)), ((*l_13) &= l_12)), ((g_9, l_15), &g_9));
  return (*g_39);
}

static int32_t *func_2(const int32_t *p_3, int32_t *p_4, int8_t p_5, int32_t *p_6) {
  int32_t **l_16 = &g_8[0][1][0];
  int8_t *l_38[5][4][5] = {{{&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, (void *)0, (void *)0, &g_14}, {&g_14, &g_14, (void *)0, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, (void *)0}},
                           {{&g_14, (void *)0, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, (void *)0}, {&g_14, &g_14, &g_14, &g_14, (void *)0}, {&g_14, &g_14, &g_14, &g_14, &g_14}},
                           {{&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, (void *)0, &g_14, &g_14}, {(void *)0, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, (void *)0, &g_14, &g_14}},
                           {{&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}},
                           {{&g_14, (void *)0, &g_14, &g_14, &g_14}, {&g_14, &g_14, &g_14, &g_14, &g_14}, {&g_14, (void *)0, &g_14, &g_14, &g_14}, {&g_14, &g_14, (void *)0, &g_14, &g_14}}};
  int i, j, k;
  (*g_17) = l_16;
  for (p_5 = 0; (p_5 == 12); p_5 = safe_add_func_int16_t_s_s(p_5, 6)) {
    int8_t l_37[4];
    int i;
    for (i = 0; i < 4; i++)
      l_37[i] = (-8L);
    for (g_14 = (-10); (g_14 != 11); g_14 = safe_add_func_int8_t_s_s(g_14, 7)) {
      uint8_t *l_23 = (void *)0;
      uint8_t *l_24 = &g_25;
      int32_t *l_31 = &g_9;
      int16_t *l_32 = &g_33;
      int32_t l_36 = 0x9E149CFFL;
      (*g_39) &= (0x333C7D24B5E49576LL | (g_14 >= (((*l_24) = 0xB8L), (((((safe_mul_func_int32_t_s_s(0x9B4AF7BDL, ((~(safe_mul_func_uint16_t_u_u((0xDAL > ((void *)0 == l_31)), ((*l_32) = p_5)))) <= (safe_mod_func_uint32_t_u_u(((l_36, g_9), l_37[1]), 4294967295UL))))) | p_5) ^ g_14), l_38[1][2][3]) == &l_37[1]))));
      if ((**l_16))
        break;
    }
  }
  return (**g_17);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
