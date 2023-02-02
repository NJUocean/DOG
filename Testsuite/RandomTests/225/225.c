// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile uint64_t f0;
  uint8_t f1;
  int16_t f2;
  uint64_t f3;
  volatile uint32_t f4;
};

static int32_t g_2 = 0x4A53AA9AL;
static uint16_t g_13 = 0x10FEL;
static union U0 g_21 = {1UL};
static int32_t g_48 = 0xD579DEB4L;
static int32_t *g_52[2] = {&g_2, &g_2};
static int32_t *volatile *g_51 = &g_52[0];
static int64_t g_58 = 0xE0456BBB30732BABLL;
static const int32_t **const volatile g_66 = (void *)0;
static const int32_t *g_67 = &g_48;

static int64_t func_1(void);
static const int32_t *func_5(int32_t *p_6, uint32_t p_7, int32_t *p_8);

static int64_t func_1(void) {
  uint16_t l_18 = 3UL;
  int32_t *l_68[3][2][4] = {{{&g_48, &g_48, &g_48, &g_48}, {&g_2, &g_48, &g_48, &g_48}}, {{&g_48, &g_2, &g_48, &g_48}, {&g_2, &g_2, &g_48, &g_48}}, {{&g_48, &g_2, &g_48, &g_48}, {&g_48, &g_48, &g_48, &g_48}}};
  uint32_t l_69 = 0xE133A9B9L;
  int i, j, k;
  for (g_2 = 1; (g_2 == 22); g_2 = safe_add_func_int8_t_s_s(g_2, 1)) {
    int32_t *l_16 = (void *)0;
    int32_t **l_17 = &l_16;
    int32_t l_22 = (-5L);
    g_67 = func_5(&g_2, (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((g_13--), 6)) & (((*l_17) = l_16) == (void *)0)), 65526UL)), (((((l_18, (safe_add_func_int16_t_s_s((g_21, 0xF9B6L), (l_22 & (safe_div_func_uint32_t_u_u(((safe_mul_func_uint32_t_u_u((l_17 == (void *)0), g_2)) <= g_2), 0x721F7D96L)))))) != g_2), g_2) || g_21.f0), &g_2));
  }
  ++l_69;
  return g_2;
}

static const int32_t *func_5(int32_t *p_6, uint32_t p_7, int32_t *p_8) {
  int32_t l_55 = 0x01153AA9L;
  uint8_t l_59[1][3];
  const int32_t *l_65 = &g_48;
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 3; j++)
      l_59[i][j] = 0xB0L;
  }
lbl_61:
  for (g_13 = 13; (g_13 < 56); g_13++) {
    uint8_t l_40 = 255UL;
    int32_t *l_47 = &g_48;
    int64_t *l_56 = (void *)0;
    int64_t *l_57 = &g_58;
    uint16_t l_60 = 0x5881L;
    l_60 ^= ((((safe_lshift_func_uint16_t_u_s(g_2, (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_lshift_func_int32_t_s_u((((*l_57) = ((((~l_40) ^ (g_13, 0x11CAL)) >= ((((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((*l_47) = g_21.f0), ((*p_8) | ((safe_lshift_func_uint32_t_u_u((((void *)0 == g_51) <= (safe_mod_func_uint16_t_u_u(((((0x38E0L == l_55) <= 0x756EB3E1984BBC18LL) <= p_7) && (*p_8)), (-1L)))), l_55)) > (-9L))))), g_2)) ^ l_55), p_7)), p_7) == g_13), (*l_47))), 0x335309F33D48A24ELL)) | l_59[0][2]), g_2)), 0x6454L)) & l_59[0][2]), l_55)), g_13)))) ^ 0x90942075L), 0x9A6287676E3B61EALL) > p_7);
    if (l_55)
      goto lbl_61;
    if ((**g_51))
      continue;
  }
  for (l_55 = (-20); (l_55 >= (-18)); l_55++) {
    int32_t l_64 = 0x288841F9L;
    l_64 = (*p_6);
  }
  return l_65;
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
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  transparent_crc(g_58, "g_58", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
