// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint32_t f0;
  int16_t f1;
};

static int32_t *g_6 = (void *)0;
static uint16_t g_9 = 0xA72CL;
static int32_t g_12 = 0x6C312FBBL;
static volatile union U0 g_42 = {0x52EE8B72L};
static int32_t *g_53 = (void *)0;
static uint32_t g_59 = 4294967295UL;
static int32_t **volatile g_60 = &g_6;

static int64_t func_1(void);
static int32_t *func_2(uint32_t p_3, int32_t *p_4);

static int64_t func_1(void) {
  uint8_t l_5 = 0xC5L;
  int32_t l_24 = 0xCDEDFC3EL;
  union U0 l_32 = {0xD61FB9A3L};
  int32_t l_34 = 0x81F947F9L;
  g_6 = func_2(l_5, g_6);
  for (g_12 = (-4); (g_12 == (-11)); g_12 = safe_sub_func_int8_t_s_s(g_12, 8)) {
    int32_t l_31 = 0xEF339200L;
    int32_t *l_33 = &l_31;
    int32_t *l_35 = (void *)0;
    int32_t l_36 = 0L;
    uint16_t l_41 = 0x24C6L;
    uint8_t l_61 = 0xE4L;
    l_36 = (((safe_rshift_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((safe_mod_func_int8_t_s_s((l_34 = (!((safe_add_func_int32_t_s_s(((((2UL >= ((l_24 = g_9) == (-8L))) <= ((safe_sub_func_uint16_t_u_u(l_5, ((safe_lshift_func_uint32_t_u_s(((safe_mod_func_uint64_t_u_u(l_31, ((*g_6) || g_12))) || (l_32, ((((*l_33) |= (l_5 < g_12)), g_9) || g_12))), 30)) != 9UL))) || g_9)) & g_9) & g_9), 0x5DE2CAEAL)) ^ (*g_6)))), g_9)) <= g_12), (*g_6)), 0xFC0266D9L)), 1)) == l_5) | 0x10B42B8FFD020461LL);
    if ((*g_6)) {
      uint64_t l_54[5];
      int i;
      for (i = 0; i < 5; i++)
        l_54[i] = 0UL;
      if ((*g_6))
        break;
      for (l_32.f1 = 0; (l_32.f1 < 2); l_32.f1 = safe_add_func_uint32_t_u_u(l_32.f1, 1)) {
        int16_t *l_58[1];
        int i;
        for (i = 0; i < 1; i++)
          l_58[i] = (void *)0;
        l_36 = (safe_div_func_uint32_t_u_u(l_5, (l_41 || ((g_42, (safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(g_9, ((safe_mul_func_int16_t_s_s(((g_6 != (g_53 = g_6)) < l_54[3]), ((~(0x31L >= ((((((safe_add_func_int16_t_s_s((g_59 = (1UL > 0x7AFF79C94D23A2CCLL)), 5UL)) <= g_9) == g_9), (void *)0) != (void *)0) & (-1L)))) != g_9))), (-10L)))) >= g_42.f0), 14)), g_9)), (*g_6)))) < 0x06F8L))));
      }
    } else {
      int32_t *l_62[4];
      int i;
      for (i = 0; i < 4; i++)
        l_62[i] = &l_34;
      (*g_60) = &g_12;
      l_36 = l_61;
    }
  }
  return l_34;
}

static int32_t *func_2(uint32_t p_3, int32_t *p_4) {
  int32_t *l_11 = &g_12;
  for (p_3 = 19; (p_3 <= 48); ++p_3) {
    int32_t l_10 = 0L;
    l_10 &= (p_3, (1UL || g_9));
  }
  (*l_11) ^= 0xE0091DF8L;
  return l_11;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
  transparent_crc(g_59, "g_59", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
