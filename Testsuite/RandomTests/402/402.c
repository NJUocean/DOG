// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  volatile int64_t f0;
  uint32_t f1;
  volatile uint32_t f2;
  uint64_t f3;
  const int32_t f4;
};

union U3 {
  uint64_t f0;
};

static int32_t g_2 = 0x0CB8CE3EL;
static int32_t g_18 = 0xE64F6CBCL;
static uint32_t g_21 = 4294967291UL;
static int64_t g_24 = 0xC2A41B870004DDC8LL;
static uint16_t g_26 = 0xDF78L;
static int32_t *g_29 = &g_18;
static int32_t **volatile g_30 = (void *)0;
static int32_t *g_32[3][3] = {{&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}};
static int32_t **volatile g_31 = &g_32[0][2];
static union U1 g_33 = {-1L};
static int32_t **volatile g_44 = &g_32[0][2];
static int32_t *g_46 = &g_2;

static int16_t func_1(void);
static union U1 func_5(int8_t p_6, int64_t p_7);

static int16_t func_1(void) {
  uint64_t l_19 = 0xA18461E7071658A6LL;
  int32_t l_27 = 0x56540F21L;
  int32_t l_34 = 0xA4A603D2L;
  uint32_t l_40 = 0x17999919L;
  for (g_2 = (-27); (g_2 >= (-4)); ++g_2) {
    uint32_t l_15 = 2UL;
    int32_t *l_16 = (void *)0;
    int32_t *l_17[2];
    uint32_t *l_20 = &g_21;
    union U3 l_22[2] = {{0x90AE735984225189LL}, {0x90AE735984225189LL}};
    int64_t *l_23 = &g_24;
    uint16_t *l_25[4][2] = {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}};
    int i, j;
    for (i = 0; i < 2; i++)
      l_17[i] = (void *)0;
    l_34 = (func_5(((safe_mul_func_uint16_t_u_u(0xB2BCL, 0xED3CL)) > (((safe_mul_func_int32_t_s_s((!((l_27 = ((l_15, g_2) != (((*l_23) |= ((g_18 = (-2L)) & ((l_19 || ((*l_20) = l_19)) && ((-1L) | (l_22[0], 0x56L))))) <= l_19))) == l_19)), g_2)) >= 65535UL) < g_26)), g_26), 0xE34F9A32L);
  }
  for (l_34 = 0; (l_34 == 20); l_34 = safe_add_func_int8_t_s_s(l_34, 1)) {
    int32_t *l_43 = &l_34;
    for (g_26 = 0; (g_26 != 12); g_26 = safe_add_func_uint64_t_u_u(g_26, 6)) {
      if ((*g_29)) {
        int32_t *l_39[4][1][1] = {{{&g_18}}, {{(void *)0}}, {{&g_18}}, {{(void *)0}}};
        int i, j, k;
        --l_40;
      } else {
        int32_t **l_45[1][1][5];
        int i, j, k;
        for (i = 0; i < 1; i++) {
          for (j = 0; j < 1; j++) {
            for (k = 0; k < 5; k++)
              l_45[i][j][k] = &g_29;
          }
        }
        (*g_44) = l_43;
        g_46 = (*g_44);
      }
    }
  }
  return l_27;
}

static union U1 func_5(int8_t p_6, int64_t p_7) {
  int32_t *l_28 = &g_18;
  (*g_31) = (g_29 = l_28);
  return g_33;
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
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
