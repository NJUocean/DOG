// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  const signed f0 : 6;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
  uint64_t f0;
};
#pragma pack(pop)

static volatile uint32_t g_2 = 18446744073709551615UL;
static uint16_t g_11[1] = {0UL};
static uint64_t g_13 = 0UL;
static uint16_t g_24 = 65526UL;
static uint16_t g_42 = 0x79A9L;
static uint16_t *g_41 = &g_42;
static uint64_t g_50 = 0x0C42EF39980A6F85LL;
static uint64_t *const g_49 = &g_50;
static int32_t g_54[5][2][3] = {{{(-1L), 0x94A22835L, (-1L)}, {0x4B172ABFL, 0x900DD038L, 0x900DD038L}}, {{0x23FF4914L, 0x94A22835L, 0x23FF4914L}, {0x4B172ABFL, 0x4B172ABFL, 0x900DD038L}}, {{(-1L), 0x94A22835L, (-1L)}, {0x4B172ABFL, 0x900DD038L, 0x900DD038L}}, {{0x23FF4914L, 0x94A22835L, 0x23FF4914L}, {0x4B172ABFL, 0x4B172ABFL, 0x900DD038L}}, {{(-1L), 0x94A22835L, (-1L)}, {0x4B172ABFL, 0x900DD038L, 0x900DD038L}}};
static uint32_t g_56 = 4294967286UL;
static int32_t g_61 = 1L;
static int32_t g_63 = 1L;

static int32_t func_1(void);
static uint8_t func_5(int32_t p_6, struct S2 p_7, uint8_t p_8, int8_t p_9);

static int32_t func_1(void) {
  struct S0 l_10 = {-5};
  struct S2 l_14 = {0x84BC9C3D069F4981LL};
  uint16_t *l_36 = &g_11[0];
  uint32_t l_39 = 0xB1BB30B1L;
  int8_t l_45 = 0x3CL;
  int32_t l_48 = 0x6463A473L;
  if (g_2) {
    uint64_t *l_12 = &g_13;
    int32_t l_17 = 0x722BA7B7L;
    uint16_t *l_22 = (void *)0;
    uint16_t *l_23 = &g_24;
    int64_t l_40 = 0x18D7C584EDB553A8LL;
    uint64_t l_43 = 0xD2964071C19CD890LL;
    uint64_t l_44 = 0xBA7DA828C040C8E8LL;
    int64_t *l_46 = (void *)0;
    int32_t l_47 = 0L;
    int32_t *l_62 = &g_63;
    (*l_62) |= (safe_rshift_func_int32_t_s_u(
        (l_17 = (func_5((l_10, (g_2 | ((*l_12) = g_11[0]))), l_14, ((safe_div_func_uint8_t_u_u(l_17, ((safe_lshift_func_uint64_t_u_u((((((g_11[0] & ((safe_sub_func_uint16_t_u_u((g_11[0], (--(*l_23))), (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((l_47 = ((l_45 ^= (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((l_36 != (g_41 = ((((((((((safe_mod_func_uint32_t_u_u((0xBF7C295AL ^ g_11[0]), g_11[0])) != l_17) | l_17), l_39), g_11[0]), 0x8E548E01AFEC1E18LL) & 0L) == 18446744073709551612UL) <= l_40), l_23))), l_10.f0)), l_43)) <= l_44) == g_11[0])), 0x170055833AED5EBALL)))), l_48)), l_17)))), (*g_41))) >= g_42), (*g_41)), g_49) == &g_50), l_17)) ^ 0x2705104E0BBE0E20LL))) == g_11[0]), g_11[0]), 0xF6251CA2L)), 22));
    return l_10.f0;
  } else {
    int32_t l_64 = 9L;
    return l_64;
  }
}

static uint8_t func_5(int32_t p_6, struct S2 p_7, uint8_t p_8, int8_t p_9) {
  int64_t l_53 = 1L;
  uint32_t *l_55 = &g_56;
  int32_t *l_59 = &g_54[0][0][0];
  int32_t *l_60 = &g_61;
  (*l_60) = ((*l_59) |= (safe_sub_func_int32_t_s_s(l_53, (--(*l_55)))));
  return p_6;
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
  for (i = 0; i < 1; i++) {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        transparent_crc(g_54[i][j][k], "g_54[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_56, "g_56", print_hash_value);
  transparent_crc(g_61, "g_61", print_hash_value);
  transparent_crc(g_63, "g_63", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
