// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint16_t f0;
  uint32_t f1;
  int64_t f2;
  int32_t f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
  unsigned f0 : 14;
  signed f1 : 23;
  signed f2 : 17;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
  const unsigned f0 : 11;
  const struct S1 f1;
};
#pragma pack(pop)

static volatile int16_t g_6 = 0x253AL;
static uint16_t g_22 = 65528UL;
static int16_t g_26 = 0x0881L;
static uint16_t g_30 = 0xD239L;
static struct S3 g_32 = {3, {40, -1127, -144}};
static int32_t g_37[4] = {(-4L), (-4L), (-4L), (-4L)};
static uint32_t g_38[2][1] = {{4294967294UL}, {4294967294UL}};
static int32_t g_40[5][4] = {{(-7L), (-7L), (-7L), (-7L)}, {(-7L), (-7L), (-7L), (-7L)}, {(-7L), (-7L), (-7L), (-7L)}, {(-7L), (-7L), (-7L), (-7L)}, {(-7L), (-7L), (-7L), (-7L)}};

static uint64_t func_1(void);
static uint16_t func_9(uint32_t p_10, struct S3 p_11, uint32_t p_12, int32_t p_13);

static uint64_t func_1(void) {
  struct S3 l_16 = {11, {56, -2125, 114}};
  uint16_t *l_21 = &g_22;
  int16_t *l_25 = &g_26;
  struct S0 l_29[2][4] = {{{1UL, 0x81D534A2L, -3L, -6L}, {1UL, 0x81D534A2L, -3L, -6L}, {1UL, 0x81D534A2L, -3L, -6L}, {1UL, 0x81D534A2L, -3L, -6L}}, {{1UL, 0x81D534A2L, -3L, -6L}, {1UL, 0x81D534A2L, -3L, -6L}, {1UL, 0x81D534A2L, -3L, -6L}, {1UL, 0x81D534A2L, -3L, -6L}}};
  int32_t l_31 = 0x9EA4087BL;
  int32_t *l_39 = &g_40[0][0];
  int i, j;
  (*l_39) &= (safe_mul_func_int64_t_s_s((g_38[0][0] ^= ((safe_rshift_func_uint64_t_u_u(g_6, 52)) && (safe_sub_func_uint16_t_u_u(func_9(((((safe_lshift_func_int32_t_s_s((((*l_25) = (l_16, (safe_add_func_int16_t_s_s((-8L), (((*l_21)++) <= (l_16.f1.f2 != (l_16.f1.f0 <= 65534UL))))))) <= g_6), (safe_div_func_uint32_t_u_u(((l_29[1][2], (g_30 < 0x9BL)), l_31), 0x0C280563L)))), g_22) && 0x72C2E8B5A47B6C41LL) | g_30), g_32, g_32.f0, g_30), l_29[1][2].f3)))), g_32.f1.f0));
  return (*l_39);
}

static uint16_t func_9(uint32_t p_10, struct S3 p_11, uint32_t p_12, int32_t p_13) {
  int16_t *l_33 = &g_26;
  int32_t *l_36 = &g_37[2];
  (*l_36) &= ((&g_6 == l_33) != (safe_sub_func_int8_t_s_s(g_32.f1.f0, 0x2DL)));
  return p_13;
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
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  transparent_crc(g_32.f1.f0, "g_32.f1.f0", print_hash_value);
  transparent_crc(g_32.f1.f1, "g_32.f1.f1", print_hash_value);
  transparent_crc(g_32.f1.f2, "g_32.f1.f2", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_37[i], "g_37[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_38[i][j], "g_38[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_40[i][j], "g_40[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
