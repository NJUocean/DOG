// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  volatile int32_t f0;
  volatile int32_t f1;
  int32_t f2;
};

static volatile int32_t g_2 = 9L;
static volatile int32_t g_3 = (-8L);
static volatile int32_t g_4 = 1L;
static int32_t g_5 = (-1L);
static struct S1 g_15 = {0x9D089051L, 0x466BC657L, 0x3B6F9B69L};
static uint32_t g_31 = 0x6B87C265L;
static int32_t g_33 = 0x249E3C8DL;
static volatile int8_t g_38 = 0x28L;
static volatile int8_t g_39[2][5] = {{(-9L), (-9L), (-9L), (-9L), (-9L)}, {0xFFL, (-1L), 0xFFL, (-1L), 0xFFL}};
static volatile int16_t g_40 = 0x74EDL;
static uint32_t g_41 = 1UL;
static struct S1 *g_45 = &g_15;
static struct S1 **volatile g_44 = &g_45;
static int32_t g_47[1] = {0L};

static int64_t func_1(void);
static struct S1 *const func_12(struct S1 *p_13);

static int64_t func_1(void) {
  int32_t l_48 = (-5L);
  for (g_5 = 19; (g_5 >= 13); g_5 = safe_sub_func_uint8_t_u_u(g_5, 2)) {
    uint32_t l_10[5] = {0xD193E056L, 0xD193E056L, 0xD193E056L, 0xD193E056L, 0xD193E056L};
    int i;
    if ((safe_lshift_func_int8_t_s_u(l_10[1], 1))) {
      uint64_t l_11 = 0x752F67D50F82BAEFLL;
      return l_11;
    } else {
      struct S1 *l_14[2][1][3] = {{{&g_15, &g_15, &g_15}}, {{&g_15, &g_15, &g_15}}};
      int i, j, k;
      (*g_44) = func_12(l_14[0][0][1]);
    }
    for (g_33 = 0; (g_33 <= 4); g_33 += 1) {
      int32_t *l_46[1];
      int i;
      for (i = 0; i < 1; i++)
        l_46[i] = &g_47[0];
      l_48 = (-1L);
    }
  }
  return l_48;
}

static struct S1 *const func_12(struct S1 *p_13) {
  int8_t l_18[3][2][5] = {{{1L, (-1L), 1L, 0x4EL, (-1L)}, {6L, 1L, 2L, 1L, 6L}}, {{1L, 7L, (-1L), 5L, (-1L)}, {8L, 8L, 2L, 6L, 0L}}, {{7L, 1L, 1L, 7L, 0x95L}, {0xC4L, 3L, 2L, 2L, 3L}}};
  int32_t l_37[5][1] = {{0xBB30732BL}, {0x68E480B0L}, {0xBB30732BL}, {0x68E480B0L}, {0xBB30732BL}};
  int i, j, k;
  for (g_15.f2 = 0; (g_15.f2 != 21); g_15.f2++) {
    uint32_t l_22 = 0xFE9F4864L;
    struct S1 *l_24 = (void *)0;
    struct S1 **l_23 = &l_24;
    struct S1 *l_28 = (void *)0;
    struct S1 **l_27 = &l_28;
    int32_t *l_32 = &g_33;
    int32_t *l_34 = &g_33;
    int32_t *l_35 = &g_33;
    int32_t *l_36[3];
    int i;
    for (i = 0; i < 3; i++)
      l_36[i] = &g_33;
    (*l_32) |= (((l_18[1][0][3], ((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(l_22)) ^ (((((((g_4 & g_5), ((*l_23) = p_13)) == (void *)0) ^ (safe_sub_func_int32_t_s_s((p_13 == ((*l_27) = p_13)), ((safe_mod_func_uint8_t_u_u((((l_22 <= g_5) >= 0x7635L), 4UL), g_15.f2)) || g_15.f2)))) == l_18[1][0][3]) ^ 0UL) || l_18[1][0][3])), l_18[1][0][3])) | g_31)), l_22) >= 0xE76DL);
    ++g_41;
  }
  return &g_15;
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
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
  transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
  transparent_crc(g_15.f2, "g_15.f2", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_39[i][j], "g_39[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  for (i = 0; i < 1; i++) {
    transparent_crc(g_47[i], "g_47[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
