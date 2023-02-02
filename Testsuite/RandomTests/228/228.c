// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_3[3] = {0x6FE7D8A8L, 0x6FE7D8A8L, 0x6FE7D8A8L};
static volatile int32_t *g_2 = &g_3[2];
static int64_t g_25 = 0x52B4B5A9CEA445A8LL;
static int32_t g_28 = 0xD1D2A6F9L;
static int64_t g_42 = 9L;
static int16_t g_44 = 0L;
static uint16_t g_50 = 0x5465L;
static uint32_t g_52 = 0x21EB1ED3L;

static uint64_t func_1(void);
static uint32_t func_6(int8_t p_7);

static uint64_t func_1(void) {
  volatile int32_t *l_4 = (void *)0;
  int32_t l_40 = 1L;
  int64_t *l_41 = &g_42;
  int16_t *l_43 = &g_44;
  uint16_t *l_49 = &g_50;
  uint32_t *l_51 = &g_52;
  l_4 = g_2;
  (*g_2) = ((+(((func_6(g_3[2]) ^ ((*l_51) = (0xDDA259C4L & (((safe_mod_func_uint64_t_u_u((l_40 < ((*l_43) = (l_41 != &g_42))), (safe_div_func_uint16_t_u_u(((*l_49) = (g_42 & (safe_lshift_func_int64_t_s_u(((((void *)0 == &g_42) & g_42), l_40), 62)))), g_42)))), g_50) || l_40)))) ^ 0x1E9426CEL) >= g_42)), (*g_2));
  return g_28;
}

static uint32_t func_6(int8_t p_7) {
  const int32_t l_13[3][5] = {{0x0CBEB969L, 0x9141A9C2L, 0x0CBEB969L, 0x0CBEB969L, 0x9141A9C2L}, {0x9141A9C2L, 0x0CBEB969L, 0x0CBEB969L, 0x9141A9C2L, 0x0CBEB969L}, {0x9141A9C2L, 0x9141A9C2L, 0L, 0x9141A9C2L, 0x9141A9C2L}};
  int64_t *l_24 = &g_25;
  int32_t l_26 = 0x7758B39DL;
  int32_t *l_27 = &g_28;
  int i, j;
  if ((safe_unary_minus_func_int32_t_s(((((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((l_13[0][1], (1L == ((safe_lshift_func_uint64_t_u_s((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((g_3[2] | (safe_rshift_func_uint8_t_u_s(p_7, 3))), g_3[0]), (0x5EBEC5EC62BB2C59LL >= (l_26 ^= ((*l_24) = (-1L)))))) >= (((l_27 != (void *)0), (void *)0) != &g_28)), g_28)), 1UL)), g_28)) & 0xCBL))), 0L), 0xE072L), (*l_27))), 0xC24489BE67E784B5LL)), 0xD8607F47L) ^ 8L), (-4L))))) {
    uint64_t l_29 = 0xC8A0C0902002449ELL;
    ++l_29;
  } else {
  lbl_37:
    for (g_28 = 0; (g_28 >= (-19)); g_28 = safe_sub_func_uint16_t_u_u(g_28, 9)) {
      uint8_t l_34 = 1UL;
      return l_34;
    }
    for (l_26 = 4; (l_26 < (-24)); l_26 = safe_sub_func_int16_t_s_s(l_26, 2)) {
      if (l_26)
        goto lbl_37;
    }
  }
  return p_7;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
