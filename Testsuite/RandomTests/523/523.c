// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  const volatile unsigned f0 : 4;
};

struct S2 {
  volatile unsigned f0 : 10;
  signed f1 : 4;
  signed f2 : 25;
};

static int8_t g_6 = 0L;
static uint32_t g_8 = 0x47ADF1ADL;
static uint32_t g_10 = 0xED3C15D0L;
static uint8_t g_16 = 0xA6L;
static int8_t g_31 = 6L;
static int32_t g_33 = 0x23A34071L;
static int8_t g_35 = 0x04L;
static struct S2 g_37 = {22, 0, -1266};
static int32_t g_54 = 3L;
static int32_t *volatile g_53 = &g_54;
static struct S1 g_58[5][5] = {{{3}, {3}, {3}, {3}, {3}}, {{0}, {1}, {1}, {0}, {1}}, {{3}, {3}, {0}, {3}, {3}}, {{1}, {0}, {1}, {1}, {0}}, {{3}, {3}, {3}, {3}, {3}}};
static struct S1 g_60 = {1};

static int32_t func_1(void);
static struct S2 func_2(int64_t p_3);

static int32_t func_1(void) {
  uint32_t *l_7 = &g_8;
  uint32_t *l_9[3][5] = {{(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}, {&g_10, &g_10, &g_10, &g_10, &g_10}, {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}};
  uint8_t *l_15 = &g_16;
  int32_t l_27 = (-8L);
  uint16_t *l_28 = (void *)0;
  int32_t l_29[4] = {0L, 0L, 0L, 0L};
  int8_t *l_30 = &g_31;
  int32_t *l_32 = &g_33;
  int8_t *l_34[1];
  uint8_t l_52 = 0UL;
  struct S1 *l_59 = &g_60;
  int i, j;
  for (i = 0; i < 1; i++)
    l_34[i] = &g_35;
  if ((func_2(((safe_div_func_int16_t_s_s((((g_10 |= ((*l_7) &= (g_6 & g_6))) <= (safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((++(*l_15)), (safe_lshift_func_uint64_t_u_s((0xB44CF592758E92EDLL < (((safe_rshift_func_int8_t_s_u((g_35 = (((2L > ((*l_32) &= (((*l_30) ^= (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(l_27, (l_29[1] = (((l_15 == (void *)0) | 0UL) ^ (((6L >= g_6), (void *)0) != l_15))))), g_6))) >= g_6))) <= 0UL) >= 18446744073709551608UL)), 7)) <= g_6) | l_27)), 43)))), g_6))), (-1L)), g_6)) | g_6)), (*l_32))) {
  lbl_38:
    (*l_32) = 0xA2AAFA0BL;
  } else {
    uint16_t l_41 = 3UL;
    int32_t *l_50 = (void *)0;
    const int32_t l_51 = 0x9B6842A4L;
    if (g_37.f1)
      goto lbl_38;
    (*g_53) = (safe_mul_func_int32_t_s_s(0x947A332AL, ((*l_32) = (l_41 == ((*l_32) && (safe_mul_func_uint32_t_u_u((*l_32), (((*l_32), ((g_31 > ((0x4F6128B293C34F97LL < (safe_mul_func_uint32_t_u_u(((*l_7) &= (safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((((l_41 ^ (l_50 != &g_33)) || 0x144DB285L) > (-1L)) <= g_37.f0), l_51)), 0x9993L), g_37.f1))), g_37.f2))) && (*l_32))) & 0x37L)) || l_52))))))));
  }
  for (g_31 = (-21); (g_31 != 11); g_31++) {
    struct S1 *l_57 = &g_58[2][2];
    l_59 = l_57;
  }
  return (*l_32);
}

static struct S2 func_2(int64_t p_3) {
  int32_t *l_36 = &g_33;
  (*l_36) = 6L;
  return g_37;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
  transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
  transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
  transparent_crc(g_54, "g_54", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_58[i][j].f0, "g_58[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
