// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int8_t g_6 = 0x09L;
static int16_t g_10 = 0L;
static int16_t *g_14 = (void *)0;
static int32_t g_16 = 0x3FFAF072L;
static int32_t g_20 = 0xC0E3E763L;
static int32_t g_22 = 0xA9DADE66L;
static uint16_t g_25 = 0xAE4FL;
static uint64_t g_33[3][5] = {{0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL}, {0x291260E2EFE8E60ALL, 0UL, 0x291260E2EFE8E60ALL, 0UL, 0x291260E2EFE8E60ALL}, {0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL, 0x36CEDDA5659CDE30LL}};
static uint64_t g_46 = 0x678D5680A2560131LL;
static int8_t g_48 = 0xD2L;

static uint32_t func_1(void);
static uint64_t func_11(int16_t *p_12, int16_t *p_13);

static uint32_t func_1(void) {
  int16_t *l_9 = &g_10;
  int16_t l_23 = 0xA167L;
  uint16_t *l_24[5][1][3] = {{{(void *)0, &g_25, (void *)0}}, {{(void *)0, &g_25, &g_25}}, {{&g_25, (void *)0, (void *)0}}, {{&g_25, (void *)0, &g_25}}, {{&g_25, &g_25, &g_25}}};
  uint64_t *l_45 = &g_46;
  int32_t *l_56 = &g_16;
  int i, j, k;
  if ((safe_add_func_int16_t_s_s(1L, (safe_mod_func_uint16_t_u_u((g_25 = (g_6 > ((safe_div_func_int16_t_s_s(g_6, ((*l_9) = g_6))) ^ (func_11(l_9, g_14) | (l_23 && ((l_23, g_6) != 0x234AC019L)))))), l_23))))) {
    uint64_t *l_32 = &g_33[2][2];
    int32_t *l_36 = &g_22;
    uint16_t l_47 = 65535UL;
    g_48 ^= (safe_mul_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u(((*l_36) = (safe_mul_func_uint32_t_u_u((((g_20 != ((*l_32)--)), l_36) != (void *)0), (((((*l_36), (g_25 >= (-5L))) <= ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mul_func_int64_t_s_s(((void *)0 != l_45), 0xB3333DB9622CFB64LL)) <= l_23), 1)), 0xE8L)), (*l_36))) <= g_46)) == (*l_36)) | l_23)))), 0x65E1L)) > g_16), (*l_36)) != l_47), g_20));
  } else {
    return g_48;
  }
  for (g_20 = 0; (g_20 != (-24)); g_20 = safe_sub_func_int8_t_s_s(g_20, 8)) {
    int32_t *const l_55 = &g_20;
    for (g_22 = 0; (g_22 != (-10)); g_22 = safe_sub_func_uint64_t_u_u(g_22, 5)) {
      int32_t *l_54 = &g_22;
      int32_t **l_53 = &l_54;
      (*l_53) = &g_16;
    }
    l_56 = l_55;
  }
  return (*l_56);
}

static uint64_t func_11(int16_t *p_12, int16_t *p_13) {
  const int32_t *l_15 = (void *)0;
  l_15 = l_15;
  for (g_16 = (-27); (g_16 == 27); g_16 = safe_add_func_uint8_t_u_u(g_16, 5)) {
    int32_t *l_19 = &g_20;
    int32_t *l_21 = &g_22;
    (*l_21) = ((*l_19) = g_16);
    return g_22;
  }
  return g_6;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_33[i][j], "g_33[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
