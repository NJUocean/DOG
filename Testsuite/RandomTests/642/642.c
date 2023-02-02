// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int16_t f0;
  uint32_t f1;
  const uint32_t f2;
  const volatile signed : 0;
  uint32_t f3;
};

static volatile int64_t g_8 = 0x89226C312FBB6BC3LL;
static uint32_t g_12[5][4] = {{18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}};
static uint32_t g_36 = 0UL;
static int8_t g_39 = 0x89L;
static int64_t g_42 = 6L;
static int32_t g_44 = 0xFF9752EEL;
static struct S0 g_45 = {0xCA5EL, 0x5A40A7B4L, 4294967288UL, 18446744073709551611UL};
static struct S0 g_46 = {6L, 4294967290UL, 0x121ADF56L, 0xF6604C38L};

static struct S0 func_1(void);
static struct S0 func_2(int64_t p_3, uint16_t p_4, uint8_t p_5, uint16_t p_6, uint64_t p_7);

static struct S0 func_1(void) {
  const int32_t l_9 = 9L;
  uint32_t *l_34 = (void *)0;
  uint32_t *l_35 = &g_36;
  int64_t l_37 = 0x5DE2CAEABA4A2C6ELL;
  int8_t *l_38 = &g_39;
  uint32_t l_40 = 18446744073709551606UL;
  int64_t *l_41 = &g_42;
  g_44 = (func_2(((*l_41) ^= (g_8 | (l_9 ^ (safe_rshift_func_uint64_t_u_u((g_12[2][1] <= (safe_mul_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((safe_add_func_int8_t_s_s(g_12[2][1], (safe_mod_func_int8_t_s_s((+(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((*l_38) = (safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((6UL != ((g_12[2][1], l_9) | ((*l_35) ^= ((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((g_12[2][1] ^ g_12[2][1]) < l_9) == 0xD8F9C328L) && g_12[0][2]), 1UL)), l_9)) | g_12[2][1])))), l_37)), 0x9FL))), g_12[4][2])), (-1L))) & l_40) ^ 1L)), l_37)))), l_9), 0xF7CC73EE49CE5708LL)), 1UL))), g_12[3][2]))))), l_9, g_12[2][1], g_12[0][1], g_12[1][0]), g_36);
  return g_46;
}

static struct S0 func_2(int64_t p_3, uint16_t p_4, uint8_t p_5, uint16_t p_6, uint64_t p_7) {
  int32_t *l_43 = &g_44;
  l_43 = l_43;
  return g_45;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_44, "g_44", print_hash_value);
  transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
  transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
  transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
  transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
  transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
  transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
  transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
  transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
