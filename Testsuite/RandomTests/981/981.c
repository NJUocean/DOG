// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  volatile uint16_t f0;
  uint32_t f1;
};

struct S1 {
  volatile int16_t f0;
  uint64_t f1;
  int16_t f2;
  volatile uint32_t f3;
  signed f4 : 12;
};

static volatile int32_t g_2 = 0xE58D020BL;
static volatile int32_t g_3 = 0xB60E704FL;
static int32_t g_4 = 0xE677B568L;
static volatile int32_t g_8 = 0x969161D5L;
static volatile int32_t g_9 = 0x0357257EL;
static int32_t g_10 = 0x018D303FL;
static volatile int32_t g_11[2] = {1L, 1L};
static int32_t g_12 = 0x5A945CB8L;
static const struct S1 g_24 = {0x05ABL, 4UL, 0L, 0x65721867L, 0};
static uint64_t g_34[2] = {18446744073709551615UL, 18446744073709551615UL};
static uint32_t g_38 = 0x46158E9DL;
static struct S0 g_43 = {0x4653L, 0x2FB38A83L};
static int16_t g_45 = (-5L);
static uint8_t g_48 = 247UL;
static int32_t *g_58 = &g_12;
static int32_t **volatile g_57[4][3] = {{&g_58, &g_58, &g_58}, {(void *)0, (void *)0, &g_58}, {&g_58, &g_58, &g_58}, {(void *)0, (void *)0, &g_58}};

static struct S1 func_1(void);
static int32_t *func_14(int32_t *p_15, int32_t *p_16);

static struct S1 func_1(void) {
  int32_t l_49 = 0x78CAFACAL;
  for (g_4 = 0; (g_4 <= 20); ++g_4) {
    int8_t l_7[2][4] = {{(-1L), (-1L), 0x32L, (-1L)}, {(-1L), 0x56L, 0x56L, (-1L)}};
    int32_t *l_46 = &g_12;
    int i, j;
    for (g_10 = 0; (g_10 <= 1); g_10 += 1) {
      int32_t l_19 = 8L;
      int32_t l_50 = 1L;
      for (g_12 = 1; (g_12 >= 0); g_12 -= 1) {
        int32_t *l_13 = (void *)0;
        uint64_t *l_33 = &g_34[1];
        uint32_t *l_37 = &g_38;
        const int32_t l_44 = (-8L);
        uint8_t *l_47[3][1];
        int32_t **l_59 = &g_58;
        int i, j;
        for (i = 0; i < 3; i++) {
          for (j = 0; j < 1; j++)
            l_47[i][j] = &g_48;
        }
        g_8 &= l_7[g_12][(g_10 + 1)];
                (*l_59) = func_14(&g_12, (((safe_mod_func_int64_t_s_s((((l_49 = (l_19 = ((((l_19 ^ (safe_lshift_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((((g_24 , (l_19 <= ((&g_2 != ((((((((((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_7[1][0], (safe_rshift_func_uint16_t_u_u(((g_45 = (l_19 , (((safe_sub_func_uint32_t_u_u(((*l_37) = (l_19 & (--(*l_33)))), (safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((g_43 , g_4), 8UL)) >= 0xB915F744L) == g_4), l_44)))) && 0UL) | 0xF732L))) <= g_43.f1), l_7[1][0])))), g_4)) , &g_12) != l_46) , g_34[1]) || 0xFCBDFAC8L) > g_12) & (*l_46)) || g_34[0]) | g_24.f4) , &g_10)) , 65527UL))) , (*l_46)) ^ g_10), (-1L))) , g_2) && g_24.f3), 0))) || g_34[0]) , (*l_46)) != 0x91L))) >= 0x13L) < (-1L)), l_50)) < g_24.f4) , &l_19));
      }
    }
  }
  (*g_58) ^= l_49;
  return g_24;
}

static int32_t *func_14(int32_t *p_15, int32_t *p_16) {
  for (g_38 = 4; (g_38 < 48); g_38 = safe_add_func_int16_t_s_s(g_38, 6)) {
    struct S0 *l_55 = (void *)0;
    for (g_43.f1 = 0; (g_43.f1 == 34); g_43.f1++) {
      struct S0 **l_56 = &l_55;
      (*l_56) = l_55;
    }
  }
  return &g_10;
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
  transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
  transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
  transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
  transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_34[i], "g_34[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
  transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
