// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S1 {
  volatile uint8_t f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
  unsigned f0 : 7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
  volatile struct S2 f0;
  volatile int32_t f1;
  struct S1 f2;
  uint8_t f3;
  uint16_t f4;
};
#pragma pack(pop)

struct S4 {
  unsigned f0 : 17;
  signed f1 : 6;
  const signed f2 : 12;
};

static struct S4 g_9 = {329, -2, -15};
static uint8_t g_11 = 249UL;
static int32_t g_15 = 0x4ADCA1A1L;
static uint8_t g_30 = 0x73L;
static uint8_t *g_29 = &g_30;
static uint32_t g_32 = 18446744073709551612UL;
static uint16_t g_35 = 0x5009L;
static uint16_t g_41[5][1] = {{65532UL}, {65532UL}, {65532UL}, {65532UL}, {65532UL}};
static uint16_t *volatile g_40 = &g_41[4][0];
static uint64_t g_42 = 18446744073709551607UL;
static int64_t g_44 = 0xD2C82F3C076A5D0CLL;
static int32_t *g_49 = &g_15;
static int32_t **volatile g_48 = &g_49;
static struct S1 g_52 = {255UL};
static uint32_t g_56 = 0x2AFB55E8L;
static int32_t **volatile g_68[5][4][4] = {{{&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}}, {{&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}}, {{&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}}, {{&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}}, {{&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}, {&g_49, &g_49, &g_49, &g_49}}};
static volatile struct S3 g_77 = {{10}, 1L, {0x83L}, 1UL, 1UL};
static volatile struct S3 g_79 = {{5}, -6L, {0x6EL}, 0x89L, 65535UL};

static uint8_t func_1(void);
static int16_t func_6(struct S4 p_7, uint16_t p_8);

static uint8_t func_1(void) {
  uint8_t *l_10 = &g_11;
  int32_t *l_14 = &g_15;
  uint32_t *l_31 = &g_32;
  int32_t l_33 = 0x4BA09A16L;
  uint16_t *l_34 = &g_35;
  int64_t *l_43 = &g_44;
  uint16_t *l_45 = (void *)0;
  uint16_t *l_46 = &g_41[4][0];
  const int8_t l_53 = 1L;
  uint8_t l_54[1][2];
  int32_t *l_80 = (void *)0;
  int32_t *l_81 = &l_33;
  int32_t *l_82 = &g_15;
  int32_t *l_83 = &l_33;
  int32_t *l_84 = &l_33;
  int32_t *l_85 = &g_15;
  int32_t *l_86 = &l_33;
  int32_t *l_87 = (void *)0;
  int32_t *l_88 = &g_15;
  int32_t *l_89 = &l_33;
  int32_t *l_90 = &g_15;
  int32_t *l_91 = &l_33;
  uint16_t l_92 = 9UL;
  uint64_t l_95[4];
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_54[i][j] = 0x3DL;
  }
  for (i = 0; i < 4; i++)
    l_95[i] = 0x54819E5EE4ADB81CLL;
    if (((((((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(func_6(g_9, (((*l_46) = (((*l_10) = g_9.f1) <= ((safe_mod_func_int32_t_s_s(((*l_14) = (-7L)), 4294967294UL)) , ((safe_lshift_func_int32_t_s_u(((((*g_29) ^= (safe_mod_func_int32_t_s_s((+(((*l_43) = (((safe_add_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((g_42 = (safe_rshift_func_int64_t_s_u((safe_mul_func_uint16_t_u_u((((*l_31) |= ((void*)0 == g_29)) , (((*l_34)--) < (((safe_add_func_int64_t_s_s(((((((void*)0 != g_40) != (((void*)0 == &g_15) == 0x58L)) || g_9.f1) , (void*)0) == (void*)0), g_41[4][0])) && (*l_14)) | g_41[0][0]))), 65527UL)), 24))), (*l_14))) && (*l_14)), (*l_14))) != 18446744073709551615UL) != 0UL)) ^ 2UL)), (*l_14)))) < 1L) > 1UL), (*l_14))) & g_9.f0)))) || (*g_40))), g_9.f1)), l_33)) , g_52) , 0x8E16L) != 65530UL) > l_53) <= l_54[0][1]))
    {
      int32_t *l_55[5];
      int32_t **l_59 = (void *)0;
      const int32_t *l_61 = (void *)0;
      const int32_t **l_60[5][4] = {{(void *)0, (void *)0, &l_61, (void *)0}, {(void *)0, &l_61, &l_61, (void *)0}, {&l_61, (void *)0, &l_61, &l_61}, {(void *)0, (void *)0, &l_61, (void *)0}, {(void *)0, &l_61, &l_61, (void *)0}};
      int i, j;
      for (i = 0; i < 5; i++)
        l_55[i] = &l_33;
      g_56--;
      (*g_48) = (void *)0;
    } else {
      for (g_15 = 0; (g_15 == (-5)); g_15 = safe_sub_func_int8_t_s_s(g_15, 1)) {
        uint16_t l_74 = 65535UL;
        for (g_42 = 0; (g_42 <= 52); g_42 = safe_add_func_int32_t_s_s(g_42, 1)) {
          int32_t *l_66 = &l_33;
          int32_t **l_67 = (void *)0;
          (*l_66) &= 0x34807DA0L;
          (*g_48) = l_66;
        }
        if ((*l_14)) {
          int32_t *l_69 = &l_33;
          int32_t *l_70 = &l_33;
          int32_t *l_71[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
          int64_t l_72 = 0x86CE7EF2A96A4AF1LL;
          int16_t l_73 = 0L;
          int i;
          l_74--;
        } else {
          volatile struct S3 *l_78 = (void *)0;
          g_79 = g_77;
          if ((*g_49))
            continue;
        }
      }
    }
    l_92--;
    return l_95[1];
}

static int16_t func_6(struct S4 p_7, uint16_t p_8) {
  int32_t *l_47 = &g_15;
  (*g_48) = l_47;
  for (p_8 = 0; (p_8 >= 20); p_8++) {
    return g_9.f1;
  }
  return (*l_47);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
  transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  transparent_crc(g_77.f0.f0, "g_77.f0.f0", print_hash_value);
  transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
  transparent_crc(g_77.f2.f0, "g_77.f2.f0", print_hash_value);
  transparent_crc(g_77.f3, "g_77.f3", print_hash_value);
  transparent_crc(g_77.f4, "g_77.f4", print_hash_value);
  transparent_crc(g_79.f0.f0, "g_79.f0.f0", print_hash_value);
  transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
  transparent_crc(g_79.f2.f0, "g_79.f2.f0", print_hash_value);
  transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
  transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
