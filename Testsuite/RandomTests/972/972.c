// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S3 {
  uint8_t f0;
  volatile int16_t f1;
};

union U5 {
  int32_t f0;
};

union U6 {
  const uint32_t f0;
  const uint8_t f1;
  const int8_t f2;
  uint32_t f3;
};

static int32_t g_4[4][2] = {{0xE19E95D1L, 0xE19E95D1L}, {0xE19E95D1L, 0xE19E95D1L}, {0xE19E95D1L, 0xE19E95D1L}, {0xE19E95D1L, 0xE19E95D1L}};
static int64_t g_6 = 0xB7C7008B15E314A5LL;
static int8_t g_8 = 0xCDL;
static uint64_t g_10 = 0x42E40C18AB9C279ALL;
static union U5 g_25 = {0x5A2E712CL};
static uint8_t g_31[2] = {0x0CL, 0x0CL};
static int64_t g_33 = 0xF85A06C0F1A0197CLL;
static int32_t g_36[2][1] = {{0x0B56FE18L}, {0x0B56FE18L}};
static volatile union U6 g_47 = {0x033E270BL};
static struct S3 g_50 = {0x5BL, 0x18E9L};

static struct S3 func_1(void);
static int64_t func_19(uint32_t p_20, union U5 p_21, uint8_t p_22, int64_t *p_23, int32_t p_24);

static struct S3 func_1(void) {
  int64_t *l_5 = &g_6;
  uint64_t *l_7 = (void *)0;
  uint64_t *l_9 = &g_10;
  uint8_t *l_30 = &g_31[1];
  int64_t *l_32 = &g_33;
  int32_t l_34 = 0x8A88ACC1L;
  int8_t *l_46 = &g_8;
  uint64_t l_48 = 0x73B020B2DE47E5F8LL;
  int32_t *l_49 = &g_36[0][0];
  (*l_49) ^= ((((safe_mod_func_uint16_t_u_u((((*l_5) = g_4[3][1]) < (--(*l_9))), (safe_rshift_func_uint32_t_u_s(((safe_lshift_func_uint8_t_u_s(1UL, ((*l_46) = (g_4[3][1], (g_4[3][1] && ((safe_mod_func_int64_t_s_s(func_19(g_8, g_25, ((*l_30) = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((void *)0 != l_9), ((g_8 > 0xFAB8D2321210CBEDLL), g_4[2][1]))), 0xC013L))), l_32, l_34), l_34)), 0UL)))))) <= l_34), l_34)))), g_47), g_25.f0) ^ l_48);
  (*l_49) = g_25.f0;
  return g_50;
}

static int64_t func_19(uint32_t p_20, union U5 p_21, uint8_t p_22, int64_t *p_23, int32_t p_24) {
  int32_t *l_35 = &g_36[0][0];
  int32_t *l_37 = &g_36[0][0];
  int32_t l_38[5] = {(-1L), (-1L), (-1L), (-1L), (-1L)};
  int32_t *l_39 = &g_36[0][0];
  int32_t *l_40 = &g_36[0][0];
  int32_t *l_41 = (void *)0;
  int32_t *l_42 = &l_38[3];
  uint8_t l_43 = 0x1EL;
  int i;
  ++l_43;
  return (*p_23);
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_31[i], "g_31[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_33, "g_33", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_36[i][j], "g_36[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
  transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
  transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
