// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S2 {
  const unsigned f0 : 12;
  signed f1 : 19;
  const volatile signed f2 : 8;
  volatile unsigned f3 : 30;
};
#pragma pack(pop)

static int32_t g_2 = 1L;
static struct S2 g_27 = {29, -186, 5, 10849};
static int64_t g_30 = 0L;
static int16_t g_44 = 0L;
static int16_t g_46 = (-3L);
static int16_t g_50 = (-7L);
static int32_t g_56 = 0xAC28C4F4L;
static int32_t *volatile g_55 = &g_56;
static int32_t **volatile g_68 = (void *)0;
static int32_t g_74 = 0xDB887736L;

static uint16_t func_1(void);
static uint64_t func_18(int8_t p_19, uint32_t p_20, int16_t p_21, int16_t p_22, uint64_t p_23);

static uint16_t func_1(void) {
  uint16_t l_24[1][4];
  int32_t l_31 = 0L;
  uint32_t l_72 = 0xB5DAE8CEL;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++)
      l_24[i][j] = 65535UL;
  }
  for (g_2 = 0; (g_2 == (-3)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 1)) {
    const int16_t l_28 = 0xE6A4L;
    int64_t *l_29[4][5] = {{&g_30, &g_30, &g_30, &g_30, &g_30}, {&g_30, &g_30, &g_30, &g_30, &g_30}, {&g_30, &g_30, &g_30, &g_30, &g_30}, {&g_30, &g_30, &g_30, &g_30, &g_30}};
    int32_t *l_73 = &g_74;
    int i, j;
  }
  return l_31;
}

static uint64_t func_18(int8_t p_19, uint32_t p_20, int16_t p_21, int16_t p_22, uint64_t p_23) {
  int64_t *l_36 = &g_30;
  int8_t l_37 = 0x03L;
  int16_t *l_43 = &g_44;
  int16_t *l_45 = &g_46;
  int16_t *l_49 = &g_50;
  int32_t l_53 = (-2L);
  int32_t *l_71 = &g_56;
  if ((0xD9751230L == ((p_21 & ((safe_sub_func_int8_t_s_s(((((((*l_36) = (safe_add_func_uint64_t_u_u(g_27.f1, p_23))) && l_37) || (((l_53 |= ((-10L) | (safe_mul_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((*l_45) = ((*l_43) = (!g_2))), 8)), (safe_lshift_func_uint16_t_u_s((((*l_49) = 1L) > (safe_mod_func_uint32_t_u_u(2UL, p_22))), 7)))))) && 1UL) && l_53)), (void *)0) == (void *)0), g_27.f1)), (-9L))) & l_37))) {
    uint16_t l_54 = 0xAFFFL;
    int64_t *l_57 = (void *)0;
    int32_t *l_66 = &g_56;
    int32_t **l_67 = (void *)0;
    (*g_55) &= (l_54 <= p_20);
    l_66 = ((((void *)0 == l_57), (+((g_50 > ((*l_43) = (safe_mod_func_uint16_t_u_u(((~g_27.f2), (((((l_53 = l_53) < ((safe_div_func_uint16_t_u_u(0x1963L, (safe_mul_func_int8_t_s_s((((p_19 < (g_30, g_27.f0)) && g_44), 0x3CL), 0x5FL)))) & p_19)) ^ l_37) < l_37), p_19)), l_54)))) & 0xFFEA361F882D7787LL))), l_66);
  } else {
    int32_t *l_69 = &l_53;
    int32_t **l_70[2];
    int i;
    for (i = 0; i < 2; i++)
      l_70[i] = &l_69;
    g_55 = l_69;
    l_71 = l_71;
  }
  return p_19;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
  transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
  transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
  transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_56, "g_56", print_hash_value);
  transparent_crc(g_74, "g_74", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
