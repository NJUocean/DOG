// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile signed f0 : 1;
  unsigned f1 : 30;
  signed f2 : 2;
};
#pragma pack(pop)

static int32_t g_4[5] = {(-3L), (-3L), (-3L), (-3L), (-3L)};
static struct S0 g_23 = {-0, 21835, 1};
static volatile struct S0 g_29 = {0, 9799, -1};
static uint8_t g_52 = 0x02L;
static int32_t **volatile g_63 = (void *)0;
static int32_t **volatile g_64 = (void *)0;

static const int64_t func_1(void);
static int32_t *func_16(int32_t *p_17, int32_t *p_18, const int32_t p_19, int32_t *p_20, uint32_t p_21);

static const int64_t func_1(void) {
  int32_t *l_2 = (void *)0;
  int32_t *l_3 = &g_4[1];
  int32_t *l_5 = &g_4[1];
  int32_t *l_6 = &g_4[0];
  int32_t *l_7 = &g_4[0];
  int32_t *l_8 = (void *)0;
  int32_t *l_9 = &g_4[2];
  int32_t *l_10 = &g_4[1];
  int32_t *l_11[2][5];
  int16_t l_12 = 5L;
  uint8_t l_13 = 0x7FL;
  int32_t l_30[1];
  uint64_t l_31[1][2];
  uint8_t l_66 = 0x48L;
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++)
      l_11[i][j] = (void *)0;
  }
  for (i = 0; i < 1; i++)
    l_30[i] = (-1L);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 2; j++)
      l_31[i][j] = 0UL;
  }
  l_13++;
  l_66 = ((l_2 = func_16(&g_4[3], l_11[0][1], (safe_unary_minus_func_int8_t_s((g_23, ((safe_div_func_uint16_t_u_u(0x8C83L, (((*l_7) || (safe_add_func_int64_t_s_s(((((((0x849FL | (0xA6L != (!(((g_29, ((1UL | (*l_6)), l_10)) != l_11[0][1]) >= 1L)))) & g_4[1]) <= 0UL) <= g_4[1]) | l_30[0]) || g_4[1]), l_31[0][0]))) && (*l_9)))) ^ (*l_10))))), &g_4[1], (*l_9))) == (void *)0);
  return g_29.f1;
}

static int32_t *func_16(int32_t *p_17, int32_t *p_18, const int32_t p_19, int32_t *p_20, uint32_t p_21) {
  int64_t l_36 = 0L;
  int32_t l_37 = 0x786CB52FL;
  uint8_t *l_51[5][1];
  int32_t *l_53 = (void *)0;
  int32_t l_55[2][3] = {{(-5L), 0x4F21D6FFL, 0x4F21D6FFL}, {(-5L), 0x4F21D6FFL, 0x4F21D6FFL}};
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++)
      l_51[i][j] = &g_52;
  }
  if ((safe_add_func_int8_t_s_s((l_36 | ((*p_17) >= ((((((((((l_37 = l_36) > (((g_23.f2 &= (((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint64_t_u(l_36)), (safe_rshift_func_int8_t_s_s(p_19, ((((safe_mul_func_uint8_t_u_u(((0x3FD1FA94L & (*p_17)), (g_52 = ((safe_sub_func_uint64_t_u_u(0xA4961F0846D72D30LL, ((safe_mul_func_uint32_t_u_u((l_36 > g_23.f1), g_29.f1)) == l_36))) ^ 1UL))), 0x93L)), l_36) == l_36) >= 0xDE7D1E91BE676CD8LL))))) >= 0UL) <= p_19)) & g_4[4]), g_29.f1)) != l_36), g_29.f1), &l_37) == &p_19), (void *)0) == &g_4[1]) < l_36) < p_19))), p_21))) {
    int32_t *l_54[2];
    uint32_t l_56[1];
    int i;
    for (i = 0; i < 2; i++)
      l_54[i] = &l_37;
    for (i = 0; i < 1; i++)
      l_56[i] = 0UL;
    l_56[0]--;
  } else {
    for (g_52 = (-24); (g_52 < 56); g_52 = safe_add_func_uint16_t_u_u(g_52, 8)) {
      for (l_36 = 0; (l_36 > (-17)); l_36 = safe_sub_func_int8_t_s_s(l_36, 6)) {
        int32_t **l_65 = &l_53;
        (*l_65) = &g_4[1];
      }
    }
  }
  return p_18;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
  transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
  transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
  transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
  transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
  transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
  transparent_crc(g_52, "g_52", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
