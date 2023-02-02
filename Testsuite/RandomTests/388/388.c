// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  volatile signed f0 : 14;
  signed f1 : 11;
};

union U1 {
  uint16_t f0;
  int16_t f1;
  const int16_t f2;
};

union U2 {
  volatile uint32_t f0;
  uint32_t f1;
  const volatile uint8_t f2;
  const uint8_t f3;
  const volatile uint8_t f4;
};

static const uint32_t g_5 = 8UL;
static union U1 g_8 = {0x582FL};
static uint64_t g_12 = 0UL;
static union U2 g_18 = {0xFF839E07L};
static int32_t g_24 = (-10L);
static struct S0 g_28 = {-31, -26};
static struct S0 *volatile g_30 = &g_28;
static int32_t g_33 = 0L;
static int64_t g_34 = 8L;
static uint16_t g_35 = 0x38DBL;

static uint16_t func_1(void);
static uint64_t func_2(const int32_t p_3, uint32_t p_4);

static uint16_t func_1(void) {
  uint64_t *l_11 = &g_12;
  int32_t l_13 = 1L;
  int32_t *l_23[4][1][5] = {{{&g_24, &l_13, (void *)0, (void *)0, &l_13}}, {{(void *)0, &l_13, &l_13, &l_13, &l_13}}, {{&g_24, &l_13, (void *)0, (void *)0, &l_13}}, {{(void *)0, &l_13, &l_13, &l_13, &l_13}}};
  uint32_t l_25 = 4294967286UL;
  int i, j, k;
  if ((((func_2(g_5, (safe_lshift_func_int8_t_s_u((g_8, (0x8EL >= (safe_sub_func_uint64_t_u_u(((*l_11) = 18446744073709551615UL), (l_13 != ((safe_add_func_uint64_t_u_u(2UL, (((safe_mul_func_int64_t_s_s((g_18, ((g_24 = (safe_sub_func_int64_t_s_s(7L, ((safe_lshift_func_int16_t_s_u(0x94FFL, l_13)) >= l_13)))) ^ 4294967294UL)), g_8.f0)) | g_8.f0) & 0x6CL))) || l_25)))))), 6))) && g_24) <= 0xD0L) | 1L)) {
    struct S0 *l_29[5][3][5] = {{{&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}}, {{&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}, {&g_28, &g_28, &g_28, &g_28, &g_28}}};
    int32_t l_31 = 3L;
    int32_t l_32 = 1L;
    int i, j, k;
    (*g_30) = g_28;
    g_35++;
  } else {
    union U1 *l_39 = &g_8;
    union U1 **l_38 = &l_39;
    (*l_38) = &g_8;
  }
  return g_33;
}

static uint64_t func_2(const int32_t p_3, uint32_t p_4) {
  int32_t *l_27 = &g_24;
  int32_t **l_26 = &l_27;
  (*l_26) = (void *)0;
  return g_5;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
  transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
