// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile int8_t f0;
  signed f1 : 30;
  int32_t f2;
};
#pragma pack(pop)

static volatile int32_t g_2 = 0x4D0289A6L;
static volatile int32_t g_3 = (-6L);
static int32_t g_4 = 0x570A50B5L;
static volatile int32_t g_7 = (-3L);
static int32_t g_8 = 0x5C6F8B8AL;
static int64_t g_25 = 0x74A6E8F59172DDB7LL;
static struct S0 g_32 = {4L, 6396, -9L};
static struct S0 g_33[2][3][1] = {{{{0x21L, -21124, -2L}}, {{0x21L, -21124, -2L}}, {{0x21L, -21124, -2L}}}, {{{0x21L, -21124, -2L}}, {{0x21L, -21124, -2L}}, {{0x21L, -21124, -2L}}}};
static int64_t **g_41 = (void *)0;
static int64_t ***volatile g_40 = &g_41;
static int32_t g_44 = 0L;

static const int32_t func_1(void);
static const uint32_t func_13(int32_t p_14, uint32_t p_15, int16_t p_16);

static const int32_t func_1(void) {
  int64_t l_42[3];
  int i;
  for (i = 0; i < 3; i++)
    l_42[i] = 6L;
  for (g_4 = 0; (g_4 != 10); ++g_4) {
    uint32_t l_23 = 0x045DCEFBL;
    for (g_8 = 0; (g_8 > 11); g_8 = safe_add_func_uint64_t_u_u(g_8, 7)) {
      int64_t *l_24 = &g_25;
      int32_t *l_43 = &g_44;
      (*l_43) |= (g_3, (safe_sub_func_int32_t_s_s((func_13((safe_mod_func_int32_t_s_s(g_8, 0xFE5AB06CL)), ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int32_t_s_s((l_23 = g_7), 14)), ((*l_24) = 0xC1B0FE2CF456574BLL))), g_25), (safe_mod_func_uint64_t_u_u(g_8, g_4))) | (-8L)), l_42[1])));
      if (g_7)
        break;
    }
  }
  return l_42[1];
}

static const uint32_t func_13(int32_t p_14, uint32_t p_15, int16_t p_16) {
  int64_t **l_38 = (void *)0;
  int64_t ***l_39 = &l_38;
  for (p_16 = (-29); (p_16 >= (-5)); p_16 = safe_add_func_int64_t_s_s(p_16, 8)) {
    int16_t l_36 = 0x2623L;
    for (g_25 = 0; (g_25 > (-14)); g_25 = safe_sub_func_int64_t_s_s(g_25, 3)) {
      int32_t l_37 = 0x630971CFL;
      g_33[0][2][0] = g_32;
      for (g_32.f2 = 0; (g_32.f2 != 9); g_32.f2 = safe_add_func_int32_t_s_s(g_32.f2, 9)) {
        l_37 = l_36;
      }
    }
    g_3 ^= ((void *)0 == &g_25);
  }
  (*g_40) = ((*l_39) = l_38);
  return g_7;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
  transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_33[i][j][k].f0, "g_33[i][j][k].f0", print_hash_value);
        transparent_crc(g_33[i][j][k].f1, "g_33[i][j][k].f1", print_hash_value);
        transparent_crc(g_33[i][j][k].f2, "g_33[i][j][k].f2", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_44, "g_44", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
