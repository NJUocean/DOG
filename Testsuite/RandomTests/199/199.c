// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint8_t f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
  int8_t f0;
  uint32_t f1;
  volatile int64_t f2;
};
#pragma pack(pop)

struct S4 {
  int64_t f0;
};

static int8_t g_6[1] = {(-1L)};
static uint16_t g_24 = 0xDF04L;
static uint16_t g_26 = 65526UL;
static uint16_t *g_25 = &g_26;
static uint16_t g_31 = 65531UL;
static struct S0 g_34 = {247UL};
static struct S0 **volatile g_35 = (void *)0;
static struct S0 *g_37 = &g_34;
static struct S0 **volatile g_36[4][1][3] = {{{(void *)0, (void *)0, &g_37}}, {{(void *)0, (void *)0, &g_37}}, {{(void *)0, (void *)0, &g_37}}, {{(void *)0, (void *)0, &g_37}}};
static struct S3 g_48 = {0L, 0x63965B81L, -1L};

static struct S3 func_1(void);
static struct S0 func_7(int32_t p_8, int16_t p_9, uint32_t p_10, int64_t p_11, struct S4 p_12);

static struct S3 func_1(void) {
  uint16_t l_14 = 0UL;
  uint16_t *l_23[4][1] = {{&l_14}, {&g_24}, {&l_14}, {&g_24}};
  uint16_t **l_27 = (void *)0;
  uint16_t **l_28 = (void *)0;
  struct S4 l_32 = {0L};
  uint32_t *l_40[2];
  int32_t l_41 = 1L;
  int16_t *l_42[4][4];
  int32_t l_43 = (-1L);
  int i, j;
  for (i = 0; i < 2; i++)
    l_40[i] = (void *)0;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++)
      l_42[i][j] = (void *)0;
  }
  if ((safe_mul_func_uint8_t_u_u(((l_43 ^= (safe_mod_func_uint32_t_u_u(g_6[0], (l_41 ^= ((func_7(((+((g_31 = ((((l_14 <= 0x0BL) ^ ((safe_lshift_func_uint32_t_u_s(g_6[0], 27)) & (safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((g_24 |= (safe_add_func_uint8_t_u_u(0x3FL, 0x03L))) == ((((l_23[2][0] = g_25) == &g_26) >= (((safe_div_func_uint32_t_u_u(0x10CBEDFAL, 0xEF874ACCL)) != 0L), l_14)) | 0x55L)), l_14)), l_14)))), g_24) < g_26)) ^ 0xACC167DFL)), g_24), l_14, l_14, g_6[0], l_32), 8UL) == g_6[0]))))), g_6[0]), 251UL))) {
    int32_t *l_44 = &l_41;
    int32_t **l_45 = &l_44;
    (*l_45) = l_44;
  } else {
    struct S4 *l_47 = &l_32;
    struct S4 **l_46 = &l_47;
    (*l_46) = (void *)0;
  }
  return g_48;
}

static struct S0 func_7(int32_t p_8, int16_t p_9, uint32_t p_10, int64_t p_11, struct S4 p_12) {
  struct S0 *l_33 = &g_34;
  struct S0 **l_38[3];
  struct S0 *l_39 = (void *)0;
  int i;
  for (i = 0; i < 3; i++)
    l_38[i] = (void *)0;
  l_39 = l_33;
  return (*l_33);
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
  transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
  transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
  transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
