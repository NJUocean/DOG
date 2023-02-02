// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  signed f0 : 17;
  uint16_t f1;
  int8_t f2;
  uint64_t f3;
  volatile int16_t f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
  volatile signed f0 : 27;
};
#pragma pack(pop)

static int32_t g_13 = 5L;
static volatile struct S0 g_14 = {284, 0x064BL, 0xE0L, 0xC36FE5AB06C0E263LL, 3L};
static uint64_t g_17 = 0x71A6E483BBB66EFELL;
static int8_t g_21 = 0x57L;
static int16_t g_22 = 0x211EL;
static uint8_t g_23 = 246UL;
static int32_t g_25 = 0x188B9ABCL;
static int8_t g_28[2] = {0x4BL, 0x4BL};
static int32_t g_29 = 8L;
static volatile int16_t g_30[3] = {(-3L), (-3L), (-3L)};
static struct S1 g_34 = {3100};
static struct S1 *volatile g_35 = &g_34;
static uint32_t g_51 = 0xD623911DL;
static const struct S1 g_63 = {-9867};
static int64_t g_72 = 0x9521466050866D82LL;

static struct S0 func_1(void);
static struct S1 func_2(uint8_t p_3, uint32_t p_4, int8_t p_5, const int32_t p_6, const int32_t p_7);

static struct S0 func_1(void) {
  uint16_t l_8 = 0x6957L;
  int32_t l_20 = 8L;
  int32_t l_43 = 0L;
  int32_t l_44 = 0xDA0BF3FDL;
  int32_t l_45 = 0L;
  int32_t l_46 = 0xE4D50110L;
  int32_t l_47 = 0L;
  int32_t l_48 = (-3L);
  int32_t l_49 = 0xB921586CL;
  int32_t l_50 = 0xFA607100L;
  int8_t l_68 = 0L;
lbl_82:
  (*g_35) = func_2(l_8, ((((((safe_mod_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s(((l_8 && ((((g_13 |= 8UL), g_14), g_13), (safe_mul_func_int16_t_s_s(l_8, (g_22 = (g_21 |= ((--g_17) < (((((l_20 <= (l_20 != g_14.f4)), g_14.f2) | 4294967295UL) || 6L) == l_8)))))))), g_14.f4), 0x420EA1BCL)), 0x6D56A426232C2A4ELL) ^ 0x0971CF717C925701LL), 0xE20EEB4983CA3077LL)) <= (-1L)) | g_23) || l_8) != g_23) ^ g_23), l_8, l_20, l_20);
  for (g_22 = 0; (g_22 >= (-22)); --g_22) {
    int64_t l_38 = 0xF39352A55CCBD95DLL;
    int32_t *l_39 = &l_20;
    int32_t *l_40 = (void *)0;
    int32_t *l_41 = &g_29;
    int32_t *l_42[3][5] = {{&g_25, &l_20, &l_20, &g_25, &l_20}, {(void *)0, (void *)0, &l_20, (void *)0, (void *)0}, {&l_20, &g_25, &l_20, &l_20, &g_25}};
    uint16_t l_69 = 0xF18CL;
    int i, j;
    ++g_51;
    if ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int64_t_s_u((!0x18L), 2)), (g_63, (((void *)0 == l_42[2][0]) & (safe_lshift_func_int8_t_s_u(g_14.f4, (safe_mod_func_int8_t_s_s((l_20 || (g_21 | (l_68 && ((g_28[1] > 0x88C1B93FB8B7E04BLL) < l_69)))), l_44)))))))), 0xCF9CL)), (*l_41)))) {
      for (l_8 = 0; (l_8 == 38); l_8++) {
        uint16_t l_73 = 0xAC72L;
        l_73--;
      }
    } else {
      uint64_t l_78 = 0x7A87E153341C0C23LL;
      int8_t *l_79 = &g_28[1];
      (*l_41) ^= (safe_mod_func_int8_t_s_s(((*l_79) = l_78), (-1L)));
      for (l_44 = 1; (l_44 <= (-10)); l_44--) {
        if (l_78)
          goto lbl_82;
      }
    }
  }
  return g_14;
}

static struct S1 func_2(uint8_t p_3, uint32_t p_4, int8_t p_5, const int32_t p_6, const int32_t p_7) {
  int32_t *l_24 = &g_25;
  int32_t *l_26 = (void *)0;
  int32_t *l_27[1];
  uint32_t l_31 = 0xB60A95A2L;
  int i;
  for (i = 0; i < 1; i++)
    l_27[i] = &g_25;
  l_31--;
  return g_34;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
  transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
  transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
  transparent_crc(g_14.f4, "g_14.f4", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_28[i], "g_28[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_29, "g_29", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_30[i], "g_30[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
  transparent_crc(g_72, "g_72", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
