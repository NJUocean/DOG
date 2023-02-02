// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint16_t g_2[3][4] = {{65533UL, 7UL, 65533UL, 65533UL}, {7UL, 7UL, 65526UL, 7UL}, {7UL, 65533UL, 65533UL, 7UL}};
static int16_t g_5 = (-1L);
static int32_t g_7 = 0x7B8F5F49L;
static int8_t g_18 = 0x3DL;
static int32_t g_19 = 1L;
static int16_t g_20 = 0x8D67L;
static volatile uint64_t g_22 = 0UL;
static int16_t *g_36 = &g_20;
static uint8_t g_51 = 0xADL;
static uint64_t g_61 = 1UL;
static int8_t g_69 = 0x83L;
static uint32_t g_70 = 9UL;

static int16_t func_1(void);
static uint32_t func_8(uint16_t p_9, int16_t *const p_10, int32_t p_11);

static int16_t func_1(void) {
  int16_t *l_4 = &g_5;
  int8_t l_16 = (-10L);
  if ((g_2[2][2] | (+((*l_4) ^= 0x4DDBL)))) {
    int32_t *l_6 = &g_7;
    (*l_6) = 0L;
  } else {
    int16_t *l_44 = (void *)0;
    int32_t l_57 = 0x922041F5L;
    int32_t *l_62 = (void *)0;
    int32_t *l_63 = &g_19;
    int32_t *l_64 = &l_57;
    int32_t *l_65 = &g_19;
    int32_t *l_66 = &g_7;
    int32_t *l_67 = &g_19;
    int32_t *l_68[3][3][5] = {{{(void *)0, &l_57, (void *)0, (void *)0, &l_57}, {(void *)0, (void *)0, (void *)0, &g_19, &g_19}, {(void *)0, (void *)0, (void *)0, (void *)0, &g_19}}, {{&l_57, (void *)0, &g_19, (void *)0, &l_57}, {(void *)0, (void *)0, (void *)0, &l_57, (void *)0}, {(void *)0, (void *)0, &g_19, &l_57, &g_19}}, {{(void *)0, (void *)0, (void *)0, (void *)0, &g_19}, {(void *)0, (void *)0, &g_19, &g_19, (void *)0}, {&g_19, &l_57, &g_19, (void *)0, (void *)0}}};
    int i, j, k;
    if ((func_8((safe_rshift_func_int32_t_s_u(0L, ((-1L) || (l_4 == l_4)))), &g_5, (safe_sub_func_int16_t_s_s(g_5, l_16))), (safe_mul_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((l_44 != &g_5), g_2[0][1])), g_20), 0xECL)))) {
      uint32_t l_52[5][1] = {{0x09C591EBL}, {0x653144D9L}, {0x09C591EBL}, {0x653144D9L}, {0x09C591EBL}};
      int i, j;
      for (g_5 = 20; (g_5 != 26); ++g_5) {
        int8_t *l_49 = &g_18;
        uint8_t *l_50 = &g_51;
        g_7 = ((((*l_50) = (safe_mod_func_int8_t_s_s(((*l_49) |= (-1L)), g_7))), l_52[1][0]) > (safe_lshift_func_uint8_t_u_s(g_2[0][1], 6)));
      }
    } else {
      int32_t *l_60[1];
      int i;
      for (i = 0; i < 1; i++)
        l_60[i] = &g_19;
      g_7 &= (g_61 &= (((-4L) <= (safe_mul_func_int16_t_s_s(g_51, (l_57 | (-1L))))), (safe_lshift_func_int64_t_s_s((-1L), 39))));
    }
    g_70++;
  }
  for (g_70 = (-26); (g_70 > 48); g_70++) {
    uint32_t l_75 = 0xC4F9076BL;
    l_75 = l_16;
  }
  return l_16;
}

static uint32_t func_8(uint16_t p_9, int16_t *const p_10, int32_t p_11) {
  int32_t *l_17[1];
  int16_t l_21 = 0x8940L;
  const uint64_t l_33 = 18446744073709551615UL;
  int16_t l_39 = 1L;
  int i;
  for (i = 0; i < 1; i++)
    l_17[i] = &g_7;
  g_22++;
  g_7 = (safe_rshift_func_int64_t_s_u(((p_11 = (((safe_sub_func_uint8_t_u_u((g_2[2][2], (safe_lshift_func_uint32_t_u_u(p_9, 5))), 0xC3L)) | g_18) ^ g_7)), ((safe_mul_func_uint32_t_u_u((l_33 || ((safe_mod_func_uint64_t_u_u(((g_36 = &l_21) != &l_21), ((safe_mul_func_uint64_t_u_u((0L & 0UL), p_11)), 0xBFF7828E972CE3C4LL))), g_5)), p_9)), 0L)), l_39));
  return p_11;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  transparent_crc(g_61, "g_61", print_hash_value);
  transparent_crc(g_69, "g_69", print_hash_value);
  transparent_crc(g_70, "g_70", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
