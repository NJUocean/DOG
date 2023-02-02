// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 5;
};

struct S1 {
  const volatile signed f0 : 14;
  signed f1 : 24;
  const unsigned f2 : 29;
  signed f3 : 21;
};

static int32_t g_2[2][2][3] = {{{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}};
static uint8_t g_22[2] = {254UL, 254UL};
static volatile uint8_t g_24[1] = {248UL};
static volatile uint8_t *g_23 = &g_24[0];
static uint8_t g_27 = 0xC3L;
static uint8_t *g_30[1] = {(void *)0};
static uint8_t **g_29 = &g_30[0];
static int8_t g_35 = 0x4DL;
static uint32_t g_37 = 1UL;
static int32_t g_39 = 7L;
static volatile int32_t g_52 = 0x04BAE914L;
static uint8_t g_53 = 0x8FL;
static struct S0 g_58 = {2};
static struct S0 *volatile g_57 = &g_58;
static struct S1 g_59 = {59, -3789, 6792, -105};
static struct S1 g_75 = {25, -2425, 13475, 778};

static struct S1 func_1(void);
static const struct S0 func_5(int32_t p_6, int64_t p_7, int16_t p_8);

static struct S1 func_1(void) {
  uint8_t *l_28[1];
  uint8_t **l_31 = &g_30[0];
  int32_t l_33 = 0xF992DB75L;
  int32_t l_36 = 0xF944DCD6L;
  uint32_t l_72 = 8UL;
  int i;
  for (i = 0; i < 1; i++)
    l_28[i] = &g_27;
  for (g_2[0][0][2] = 0; (g_2[0][0][2] != (-14)); g_2[0][0][2] = safe_sub_func_int8_t_s_s(g_2[0][0][2], 1)) {
    int8_t l_9 = 0L;
    uint8_t *l_21 = &g_22[1];
    uint8_t *l_26 = &g_27;
    uint8_t **l_25[1];
    uint8_t ***l_32 = &l_25[0];
    int8_t *l_34 = &g_35;
    int i;
    for (i = 0; i < 1; i++)
      l_25[i] = &l_26;
    (*g_57) = func_5(l_9, (g_2[1][1][1], 1L), ((safe_add_func_uint8_t_u_u(((((((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(((*l_34) &= ((l_9 ^ (safe_add_func_uint32_t_u_u((((*l_21) = l_9) && (g_23 != (l_28[0] = (void *)0))), ((((*l_32) = (l_31 = g_29)) == ((l_33 = l_33), (void *)0)), l_9)))) & 1L)), l_36)), g_24[0])) || g_24[0]))), l_33) || 9UL), 65535UL) != l_36) > g_2[0][1][0]), 0x50L)) >= g_37));
  }
  for (g_39 = 1; (g_39 >= 0); g_39 -= 1) {
    int32_t *l_60 = &l_33;
    int32_t *l_61 = &l_36;
    int32_t *l_62 = &g_2[0][0][2];
    int32_t *l_63 = (void *)0;
    int32_t *l_64 = &l_36;
    int32_t *l_65 = &l_33;
    int32_t *l_66 = &l_36;
    int32_t *l_67 = (void *)0;
    int32_t *l_68 = &l_36;
    int32_t *l_69 = &l_36;
    int32_t l_70[2];
    int32_t *l_71[2];
    int i;
    for (i = 0; i < 2; i++)
      l_70[i] = 0x576189EFL;
    for (i = 0; i < 2; i++)
      l_71[i] = &l_70[0];
    for (g_27 = 0; (g_27 <= 1); g_27 += 1) {
      return g_59;
    }
    l_72--;
  }
  return g_75;
}

static const struct S0 func_5(int32_t p_6, int64_t p_7, int16_t p_8) {
  int32_t *l_38 = &g_39;
  int32_t *l_40 = (void *)0;
  int32_t *l_41 = &g_39;
  int32_t l_42 = 0xBB9CEC02L;
  int32_t *l_43 = &g_39;
  int32_t *l_44 = &l_42;
  int32_t *l_45 = (void *)0;
  int32_t *l_46 = &g_39;
  int32_t *l_47 = &g_39;
  int32_t *l_48 = &g_39;
  int32_t *l_49 = &g_39;
  int32_t l_50 = (-9L);
  int32_t *l_51[2];
  const struct S0 l_56 = {2};
  int i;
  for (i = 0; i < 2; i++)
    l_51[i] = &g_39;
  g_53--;
  return l_56;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  for (i = 0; i < 2; i++) {
    transparent_crc(g_22[i], "g_22[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    transparent_crc(g_24[i], "g_24[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  transparent_crc(g_53, "g_53", print_hash_value);
  transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
  transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
  transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
  transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
  transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
  transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
  transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
  transparent_crc(g_75.f2, "g_75.f2", print_hash_value);
  transparent_crc(g_75.f3, "g_75.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
