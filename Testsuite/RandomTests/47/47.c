// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  volatile int16_t f0;
  volatile int64_t f1;
  const volatile int64_t f2;
  unsigned f3 : 15;
  int32_t f4;
};

static int32_t g_2 = 0xA53AA9ACL;
static volatile union U0 g_25[3][5] = {{{0x21F7L}, {0x21F7L}, {0x21F7L}, {0x21F7L}, {0x21F7L}}, {{0x21F7L}, {0x21F7L}, {0x21F7L}, {0x21F7L}, {0x21F7L}}, {{0x21F7L}, {0x21F7L}, {0x21F7L}, {0x21F7L}, {0x21F7L}}};
static int32_t g_28 = 0L;
static uint8_t g_29 = 0x48L;
static uint32_t g_32 = 0x3E91CB64L;
static volatile int32_t g_35 = 0xD1CC0C7FL;
static volatile int32_t *g_34 = &g_35;

static int64_t func_1(void);
static int32_t func_5(const int32_t p_6, int64_t p_7, uint32_t p_8, uint64_t p_9);

static int64_t func_1(void) {
  int8_t l_26 = 5L;
  int32_t l_33 = 0x939C0105L;
  int32_t *l_37 = &g_2;
  for (g_2 = 0; (g_2 < (-30)); --g_2) {
    int32_t l_14 = 0x927213ECL;
    int32_t *l_27 = &g_28;
    uint32_t *l_30 = (void *)0;
    uint32_t *l_31 = &g_32;
    (*l_27) = func_5((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((((l_14 && ((safe_mul_func_int32_t_s_s(((((*l_31) = (safe_add_func_uint8_t_u_u((g_29 = (g_2 && (safe_mul_func_int64_t_s_s(l_14, (((safe_add_func_uint16_t_u_u(l_14, ((((g_2 && (safe_lshift_func_uint8_t_u_u(l_14, 2))) == (((g_25[1][3], (((*l_27) = (l_14 ^ l_26)) <= l_26)), l_26) | g_2)) && g_28) | 1UL))) ^ 0L), g_2))))), 1UL))) || g_25[1][3].f0) || g_2), g_2)) | l_33)) == g_2) ^ 0xBDL) == l_33), g_2)), (-1L))), g_2, l_26, g_2);
  }
  (*l_37) ^= l_26;
  return g_32;
}

static int32_t func_5(const int32_t p_6, int64_t p_7, uint32_t p_8, uint64_t p_9) {
  uint32_t l_36[1][4];
  int i, j;
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++)
      l_36[i][j] = 0xEB476352L;
  }
  g_34 = (void *)0;
  return l_36[0][1];
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
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_25[i][j].f0, "g_25[i][j].f0", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
