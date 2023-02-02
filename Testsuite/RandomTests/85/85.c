// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U1 {
  const unsigned f0 : 23;
  volatile unsigned : 0;
  uint8_t f1;
  int16_t f2;
  unsigned f3 : 18;
};

union U2 {
  uint16_t f0;
  volatile uint8_t f1;
  volatile uint32_t f2;
  volatile int64_t f3;
};

union U3 {
  uint32_t f0;
  int64_t f1;
  const uint8_t f2;
};

static uint8_t g_8 = 0xA7L;
static int32_t g_10 = 0xA3267E6AL;
static int32_t *g_9 = &g_10;
static const union U1 g_27 = {0x05243B9CL};
static uint64_t g_29 = 1UL;
static volatile union U2 g_41 = {0xFDE6L};
static int64_t g_44 = 0x0453D47EBDCF28D0LL;
static int32_t g_49[4][1] = {{0xAC6AA04DL}, {0xAC6AA04DL}, {0xAC6AA04DL}, {0xAC6AA04DL}};
static int32_t *const g_48 = &g_49[2][0];
static int32_t *const *g_47 = &g_48;
static int32_t g_52 = 0x8ECDCC21L;
static int32_t *const g_51 = &g_52;
static int32_t *const *g_50 = &g_51;
static union U3 g_53[1][1][4] = {{{{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}}};

static union U3 func_1(void);
static int32_t *func_2(int32_t p_3, int32_t *p_4, int32_t *p_5, int8_t p_6, uint8_t p_7);

static union U3 func_1(void) {
  int32_t *l_12 = &g_10;
  int32_t **l_11 = &l_12;
  uint32_t l_13 = 4294967294UL;
  uint8_t l_42 = 0x7BL;
  int64_t *l_43 = &g_44;
  int32_t *const *l_45 = &g_9;
  int32_t *const **l_46[1];
  int i;
  for (i = 0; i < 1; i++)
    l_46[i] = &l_45;
  (*l_11) = func_2(g_8, g_9, ((*l_11) = &g_10), l_13, g_10);
  (*l_11) = func_2(((safe_add_func_int32_t_s_s(0xF2FFA36FL, ((safe_div_func_uint8_t_u_u(g_27.f0, (safe_lshift_func_int32_t_s_s(((*g_9) & ((g_41, (-1L)) > l_42)), 19)))) == ((*l_43) |= g_27.f0)))) >= ((g_47 = l_45) != (g_50 = &g_48))), &g_10, (*l_11), (**l_45), (**l_11));
  return g_53[0][0][0];
}

static int32_t *func_2(int32_t p_3, int32_t *p_4, int32_t *p_5, int8_t p_6, uint8_t p_7) {
  union U3 l_23 = {4294967293UL};
  const uint8_t l_26 = 1UL;
  for (p_7 = 0; (p_7 == 46); ++p_7) {
    uint64_t *l_28 = &g_29;
    const int32_t l_34 = 0x74643A64L;
    for (p_6 = (-27); (p_6 <= 28); p_6 = safe_add_func_int8_t_s_s(p_6, 1)) {
      return &g_10;
    }
    (*p_4) |= (((safe_div_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u(((~(p_3 & (((l_23, (safe_rshift_func_uint16_t_u_s((l_26, 0UL), 3))) < (((void *)0 != &p_3) || p_7)) > (((g_27, (((*l_28)++) < ((safe_div_func_uint16_t_u_u(0x7B8BL, 65532UL)), 0xB14898D08F492357LL))) == p_6) <= l_26)))) & 0x97911697L), l_34)) && p_6) != g_27.f0), g_27.f0)) && 0xFEBDAB6AC39B398ELL) >= 0x44BD1A6F32215F8FLL);
  }
  return &g_10;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_49[i][j], "g_49[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_52, "g_52", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 4; k++) {
        transparent_crc(g_53[i][j][k].f0, "g_53[i][j][k].f0", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
