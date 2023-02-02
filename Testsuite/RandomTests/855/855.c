// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_6 = 0x149FEBB6L;
static int32_t *const g_5 = &g_6;
static int16_t g_32[2][1] = {{0x82B3L}, {0x82B3L}};
static uint64_t g_34 = 1UL;
static int64_t g_36 = 0xB332E0C280563ADELL;

static const uint64_t func_1(void);
static int32_t *func_2(int32_t *const p_3, uint16_t p_4);

static const uint64_t func_1(void) {
  int32_t l_27[1][5][5] = {{{0L, 0x09D70CADL, (-3L), 0L, 2L}, {0x635290CEL, 0L, 0x0920A6FFL, 0L, 0x635290CEL}, {(-3L), (-3L), 0x09D70CADL, 2L, (-3L)}, {0x635290CEL, 0x09D70CADL, 0x09D70CADL, 0x635290CEL, 2L}, {0L, 0x635290CEL, 0x0920A6FFL, (-3L), (-3L)}}};
  int16_t *l_31 = &g_32[1][0];
  uint64_t *l_33 = &g_34;
  int64_t *l_35 = &g_36;
  int32_t *l_38 = (void *)0;
  int32_t **l_37 = &l_38;
  int i, j, k;
  (*l_37) = func_2(g_5, (safe_div_func_int64_t_s_s(((*l_35) = ((safe_mul_func_int8_t_s_s(g_6, ((((safe_rshift_func_uint32_t_u_u((safe_mul_func_int64_t_s_s((((*l_33) = ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int64_t_s_s((((safe_mul_func_int32_t_s_s(0x9D81479BL, 4294967295UL)) <= (((((g_6 && ((safe_div_func_int8_t_s_s(l_27[0][4][3], g_6)) < (safe_unary_minus_func_int64_t_s(0L)))) != ((*l_31) ^= (((safe_mul_func_int64_t_s_s((l_27[0][4][3] <= l_27[0][4][0]), l_27[0][4][3])) | 0x88L) && 0x0FL))), 0L), (void *)0) != (void *)0)), 8L), 0x5CAB430688CDF2ABLL)), g_6)), l_27[0][4][3])) >= 0L)) <= g_6), l_27[0][3][3])), 4)) <= (*g_5)) | l_27[0][4][3]) && l_27[0][2][1]))) && l_27[0][2][3])), g_6)));
  return (*l_38);
}

static int32_t *func_2(int32_t *const p_3, uint16_t p_4) { return &g_6; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
