// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint32_t g_19 = 0xA945CB81L;
static int32_t g_21 = (-1L);
static uint64_t g_23 = 0xD8607F47073E70D2LL;
static int32_t g_27 = 0x33C8A0C0L;
static int16_t g_41 = 0x58E9L;
static uint16_t g_49[1] = {0x4622L};
static int16_t g_56 = 0x525AL;
static volatile int32_t **g_62 = (void *)0;
static volatile int32_t ***volatile g_61 = &g_62;

static uint32_t func_1(void);
static int32_t func_2(uint32_t p_3, uint32_t p_4, const uint32_t p_5, uint16_t p_6);

static uint32_t func_1(void) {
  uint32_t l_12[5] = {0x59141A9CL, 0x59141A9CL, 0x59141A9CL, 0x59141A9CL, 0x59141A9CL};
  int32_t *l_26 = &g_27;
  int i;
  (*l_26) ^= func_2((((0x9DA4D073FF82FF40LL == (+(-4L))) & ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int32_t_s_s(0x704F3D4EL, 23)), l_12[3]), 3)) > (((safe_add_func_uint32_t_u_u(4294967295UL, (((-1L) < (safe_add_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(g_19, (g_19 != 0x14L))) == 4UL) & g_19), 0xBEL))) > l_12[4]))) < 18446744073709551606UL), 0x86992F1EL))) <= 1L), g_19, g_19, g_19);
  for (g_19 = 2; (g_19 > 25); g_19 = safe_add_func_uint16_t_u_u(g_19, 2)) {
    int32_t l_30 = 7L;
    int32_t **const l_31 = &l_26;
    uint16_t l_65 = 65530UL;
    int16_t *const l_67 = (void *)0;
    int16_t *l_68[5] = {&g_41, &g_41, &g_41, &g_41, &g_41};
    int i;
    if (l_30) {
      int32_t **l_33 = (void *)0;
      int32_t ***l_32 = &l_33;
      (*l_32) = l_31;
    } else {
      int16_t *l_40 = &g_41;
      uint16_t *l_48 = &g_49[0];
      int16_t *l_55 = &g_56;
      int16_t **l_54 = &l_55;
      int16_t *l_57 = &g_56;
      int32_t l_60 = (-6L);
      int32_t *const *l_64 = &l_26;
      int32_t *const **l_63 = &l_64;
      int32_t *l_66 = &l_30;
      (*l_66) &= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int64_t_s_s(((l_31 == l_31) && ((((safe_mod_func_uint32_t_u_u((((((((*l_40) = g_27) > (safe_lshift_func_uint64_t_u_s((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((0xB5465392L != ((((*l_48)++) <= (safe_sub_func_int16_t_s_s(g_23, (((((*l_54) = l_48) == l_57) || ((safe_lshift_func_int8_t_s_s((l_60, g_56), g_21)) == 0x72L)), 7L)))) != 0xFCBDFAC86E89BE30LL)) && 0UL), g_56)), g_19)), (*l_26)))), g_61) == l_63) & g_23) || 0xF9103153D57951F1LL), l_65)), 1UL) ^ g_19) & g_23)), g_19)), g_23));
    }
    (*l_26) &= (l_67 == l_68[1]);
  }
  return (*l_26);
}

static int32_t func_2(uint32_t p_3, uint32_t p_4, const uint32_t p_5, uint16_t p_6) {
  int32_t *l_20 = &g_21;
  int32_t *l_22[5][2][2] = {{{&g_21, &g_21}, {&g_21, &g_21}}, {{&g_21, &g_21}, {&g_21, &g_21}}, {{&g_21, &g_21}, {&g_21, &g_21}}, {{&g_21, &g_21}, {&g_21, &g_21}}, {{&g_21, &g_21}, {&g_21, &g_21}}};
  int i, j, k;
  ++g_23;
  return (*l_20);
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_49[i], "g_49[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_56, "g_56", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
