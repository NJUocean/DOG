// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  volatile uint32_t f0;
  uint32_t f1;
  uint32_t f2;
};

union U3 {
  const int32_t f0;
  int32_t f1;
};

static int32_t g_2 = 0x43046B6EL;
static int32_t g_12 = 0x9B69B2E4L;
static int32_t g_15 = (-6L);
static int64_t g_24[2][2] = {{(-6L), (-6L)}, {(-6L), (-6L)}};
static int8_t g_25 = 4L;
static volatile union U2 g_26 = {0UL};
static volatile int64_t g_39 = 0x8B108A6652F52174LL;
static volatile int64_t *g_38 = &g_39;
static volatile int64_t *volatile *g_37 = &g_38;
static union U3 g_42 = {-1L};
static uint32_t g_51 = 0x59719BD9L;
static uint64_t g_55 = 18446744073709551612UL;
static union U2 g_60 = {0xC127C80BL};

static union U2 func_1(void);
static uint64_t func_7(int8_t p_8);

static union U2 func_1(void) {
  uint32_t l_53 = 0x0E3E0ECEL;
  int32_t l_57 = 0x4DB73D5EL;
  for (g_2 = 0; (g_2 != 15); g_2 = safe_add_func_uint32_t_u_u(g_2, 5)) {
    int64_t l_9 = 0x53A34C865B49D585LL;
    int32_t l_52 = 0xE6D7BFF0L;
    uint64_t *l_54 = &g_55;
    if ((safe_add_func_int32_t_s_s(((func_7(l_9) != ((safe_unary_minus_func_int16_t_s(((safe_mod_func_int8_t_s_s((safe_mul_func_uint32_t_u_u(4294967294UL, (((g_51 ^= (l_9 < g_42.f0)), l_52) <= l_53))), 0x18L)) & ((*l_54) = (0xA0E68526L && 0x02F310E2L))))), g_55)), l_9), 0x900A0D1FL))) {
      int64_t l_56 = 0x823142ACE07D3F14LL;
      l_57 ^= l_56;
    } else {
      for (l_57 = 0; (l_57 <= 0); l_57 = safe_add_func_int8_t_s_s(l_57, 1)) {
        return g_26;
      }
    }
  }
  return g_60;
}

static uint64_t func_7(int8_t p_8) {
  int32_t *l_10 = (void *)0;
  int32_t *l_11 = &g_12;
  int32_t *l_13 = (void *)0;
  int32_t *l_14[2];
  int64_t *l_29 = &g_24[1][1];
  int i;
  for (i = 0; i < 2; i++)
    l_14[i] = &g_15;
  if ((g_15 &= ((*l_11) = 0x0F2FDAD5L))) {
    int32_t l_21 = 0x516EA3DEL;
    int32_t *l_22 = &g_2;
    int64_t *l_28 = &g_24[1][0];
    int64_t **l_27 = &l_28;
    for (g_15 = 0; (g_15 <= 1); g_15 += 1) {
      uint16_t l_20 = 0xD088L;
      int64_t *l_23 = &g_24[1][1];
      int i;
      (*l_11) = (safe_lshift_func_int8_t_s_u((g_15 > ((g_25 = ((*l_23) = ((safe_lshift_func_uint16_t_u_s((l_20 && (l_21 != (l_20 ^ 1UL))), ((((1UL >= (((l_14[g_15] = l_14[g_15]) == l_22) ^ (1L >= p_8))) == g_12) > l_20) || (*l_22)))) >= p_8))) <= g_15)), 6));
    }
    g_15 ^= (0xE45A9172C2E8B5A4LL != (((g_26, ((*l_27) = (void *)0)) == l_29) & ((safe_sub_func_int32_t_s_s(g_24[1][1], (((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((((~p_8) || (p_8, ((g_37 != (((!((safe_unary_minus_func_int16_t_s(g_2)) <= 0x8D6AL)), g_42), &g_38)) | p_8))) && p_8) == g_24[1][1]), (*l_22))), p_8), p_8)), 0xCB3DF1C9L) & g_12))) == p_8)));
  } else {
    uint32_t l_43 = 1UL;
    --l_43;
  }
  return p_8;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
  transparent_crc(g_51, "g_51", print_hash_value);
  transparent_crc(g_55, "g_55", print_hash_value);
  transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
