// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  uint32_t f0;
  uint32_t f1;
  volatile uint32_t f2;
  const int64_t f3;
};

static int32_t g_2 = 5L;
static volatile struct S0 g_22 = {0UL, 0x6ACB8F2BL, 0x167C28CAL, 0x2FE81720D7006986LL};
static uint16_t g_30 = 0xE71CL;
static int32_t g_34 = 0L;
static const int32_t g_38 = 0L;
static const int32_t *g_37 = &g_38;
static const int32_t *g_39[1][4] = {{&g_34, &g_34, &g_34, &g_34}};
static const int32_t **g_46 = &g_37;
static const int32_t ***volatile g_45 = &g_46;
static int32_t *volatile g_48 = &g_34;
static volatile uint64_t g_58 = 4UL;
static uint32_t g_61 = 0x6516EAECL;

static int8_t func_1(void);
static uint32_t func_3(uint16_t p_4, int32_t p_5, uint16_t p_6, uint8_t p_7);

static int8_t func_1(void) {
  int32_t l_25[5][5] = {{0x9D73AE4CL, 0x9D73AE4CL, 0x62A4B15DL, 1L, 0x62A4B15DL}, {0x377D6446L, 0x377D6446L, (-4L), (-1L), (-4L)}, {0x9D73AE4CL, 0x9D73AE4CL, 0x62A4B15DL, 1L, 0x62A4B15DL}, {0x377D6446L, 0x377D6446L, (-4L), (-1L), (-4L)}, {0x9D73AE4CL, 0x9D73AE4CL, 0x62A4B15DL, 1L, 0x62A4B15DL}};
  int32_t *l_49 = &l_25[4][4];
  int32_t *l_50 = &l_25[3][2];
  int32_t *l_51 = (void *)0;
  int32_t *l_52 = &g_34;
  int32_t *l_53 = &l_25[4][3];
  int32_t *l_54 = &l_25[4][1];
  int32_t *l_55 = &g_34;
  int32_t *l_56 = &l_25[3][2];
  int32_t *l_57[3][4] = {{(void *)0, &g_34, &g_34, (void *)0}, {&g_34, (void *)0, &g_34, &g_34}, {(void *)0, (void *)0, &l_25[3][2], (void *)0}};
  int i, j;
  if (g_2) {
    uint32_t l_26 = 0x3FDE7504L;
    const int16_t l_27 = 0xF6A1L;
    uint16_t *l_28 = (void *)0;
    uint16_t *l_29 = &g_30;
    if ((func_3(((*l_29) = (((safe_add_func_int32_t_s_s(((0x4562L && g_2), 0x44D513C6L), (safe_div_func_uint64_t_u_u(0xD66A07563FFAF072LL, 1L)))) && ((-3L) ^ g_2)) && (safe_sub_func_int32_t_s_s(((safe_rshift_func_int64_t_s_u((safe_mul_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((g_22, (safe_sub_func_uint64_t_u_u(l_25[3][2], l_25[3][2]))), g_2)) <= 0UL), l_26)), 29)) > l_27), 0UL)))), l_26, l_25[3][2], g_2) > 0xD029B4CCL)) {
      int32_t *l_41 = &l_25[3][2];
      int32_t **l_40 = &l_41;
      int32_t *l_42 = &g_34;
      (*l_42) ^= (&l_25[3][2] != ((*l_40) = &g_34));
    } else {
      return l_25[4][0];
    }
    for (l_26 = 0; (l_26 <= 10); l_26 = safe_add_func_int16_t_s_s(l_26, 5)) {
      (*g_45) = &g_39[0][3];
    }
  } else {
    const int32_t l_47 = (-1L);
    (*g_48) = l_47;
  }
  g_58--;
  return g_61;
}

static uint32_t func_3(uint16_t p_4, int32_t p_5, uint16_t p_6, uint8_t p_7) {
  const int32_t *l_33 = &g_34;
  const int32_t **l_35 = (void *)0;
  const int32_t **l_36[5] = {&l_33, &l_33, &l_33, &l_33, &l_33};
  int i;
  for (p_7 = 0; (p_7 >= 55); ++p_7) {
    return p_4;
  }
  g_39[0][3] = (g_37 = l_33);
  return g_34;
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
  transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
  transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
  transparent_crc(g_22.f2, "g_22.f2", print_hash_value);
  transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_58, "g_58", print_hash_value);
  transparent_crc(g_61, "g_61", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
