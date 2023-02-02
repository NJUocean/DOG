// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S2 {
  uint32_t f0;
};

static volatile int32_t g_2 = 0xB3B7BEDEL;
static volatile int32_t g_3 = 1L;
static int32_t g_4 = 0x3938DD44L;
static uint64_t g_16 = 0x5DE1FC657863718BLL;
static uint64_t g_18 = 18446744073709551609UL;
static uint64_t g_28 = 0x23DEC995F7626A9DLL;
static uint64_t *g_27 = &g_28;
static uint16_t g_53[4] = {65535UL, 65535UL, 65535UL, 65535UL};
static uint16_t g_60 = 0x455DL;
static int32_t g_64 = 0xDB602708L;
static struct S2 g_76 = {0xF624E194L};
static int64_t g_78 = 0xA4792D8C20E5E2E4LL;
static int16_t g_80 = 1L;
static int8_t g_84[4] = {0xDCL, 0xDCL, 0xDCL, 0xDCL};

static int8_t func_1(void);
static int8_t func_21(uint64_t *p_22, uint64_t *p_23, uint64_t *p_24, uint64_t p_25, uint64_t *p_26);

static int8_t func_1(void) {
  int32_t l_81 = 0xA0F96394L;
  int32_t l_82 = 1L;
  for (g_4 = 0; (g_4 <= (-5)); g_4--) {
    int8_t l_9 = 6L;
    uint64_t *l_14 = (void *)0;
    uint64_t *l_15 = &g_16;
    uint64_t *l_17 = &g_18;
    int32_t l_29[1][1][5];
    int64_t *l_77[5] = {&g_78, &g_78, &g_78, &g_78, &g_78};
    int16_t *l_79[5];
    int8_t *l_83 = &g_84[0];
    int32_t *l_85[5][4] = {{&g_4, &g_64, &g_4, &g_64}, {&g_4, &g_64, &g_4, &g_64}, {&g_4, &g_64, &g_4, &g_64}, {&g_4, &g_64, &g_4, &g_64}, {&g_4, &g_64, &g_4, &g_64}};
    int i, j, k;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 1; j++) {
        for (k = 0; k < 5; k++)
          l_29[i][j][k] = (-8L);
      }
    }
    for (i = 0; i < 5; i++)
      l_79[i] = &g_80;
    l_82 = (((*l_83) &= (safe_rshift_func_uint32_t_u_u(((l_81 = (0UL <= (((l_9, (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint64_t_u_s(((*l_17) ^= ((*l_15) = 4UL)), (safe_lshift_func_int8_t_s_u(func_21(g_27, &g_28, &g_28, (++(*g_27)), g_27), (+((safe_lshift_func_int64_t_s_s((safe_add_func_int64_t_s_s((l_29[0][0][1] ^= (g_76, g_3)), g_4)), 29)) < 65528UL)))))), 8L), g_76.f0))) < l_9) | 7UL))) | l_82), 26))) == l_9);
  }
  return l_82;
}

static int8_t func_21(uint64_t *p_22, uint64_t *p_23, uint64_t *p_24, uint64_t p_25, uint64_t *p_26) {
  int64_t l_35 = 5L;
  int32_t l_38 = 0L;
  uint16_t *l_52 = &g_53[3];
  uint16_t *l_58 = (void *)0;
  uint16_t *l_59 = &g_60;
  int32_t l_61 = 0L;
  int32_t *l_62 = (void *)0;
  int32_t *l_63 = &g_64;
  int32_t l_65 = 0x47A0585CL;
  l_65 ^= ((*l_63) |= ((safe_lshift_func_uint8_t_u_s((l_35 = (!9L)), (safe_rshift_func_int8_t_s_s(0x4BL, l_38)))) ^ (safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s((p_25, (safe_add_func_int8_t_s_s((safe_rshift_func_int64_t_s_s(((((safe_lshift_func_uint64_t_u_u(l_38, 18)) >= (!(safe_sub_func_uint32_t_u_u((p_25 | (--(*l_52))), (safe_mod_func_uint64_t_u_u(((*p_23) = (0L | (((*l_59) &= l_38) < (l_38 & (*g_27))))), l_38)))))) & l_38) < l_38), p_25)), l_61))), 0x54120977L)), 0x3E1984BBC1846E97LL))));
  for (l_35 = 6; (l_35 <= (-20)); l_35 = safe_sub_func_int64_t_s_s(l_35, 5)) {
    uint32_t l_68 = 0UL;
    l_68--;
  }
  return p_25;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_53[i], "g_53[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_60, "g_60", print_hash_value);
  transparent_crc(g_64, "g_64", print_hash_value);
  transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
  transparent_crc(g_78, "g_78", print_hash_value);
  transparent_crc(g_80, "g_80", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_84[i], "g_84[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
