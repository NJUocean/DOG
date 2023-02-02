// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U3 {
  uint32_t f0;
  uint64_t f1;
  uint8_t f2;
};

static int32_t g_9 = 0x76373A4CL;
static uint64_t g_21[2] = {0x1F0EF2F37FC0336ALL, 0x1F0EF2F37FC0336ALL};
static uint16_t g_32[2][5] = {{3UL, 3UL, 3UL, 3UL, 3UL}, {65535UL, 65535UL, 65535UL, 65535UL, 65535UL}};
static int16_t g_35 = 0xFB10L;
static int16_t g_43[5][1] = {{0x2B41L}, {0x2B41L}, {0x2B41L}, {0x2B41L}, {0x2B41L}};
static int32_t g_45 = 0L;
static const int32_t g_48 = 0x06EE4F12L;
static const int32_t g_50 = (-1L);
static const int32_t *g_52 = &g_48;
static const int32_t **volatile g_51 = &g_52;
static int64_t g_60 = 0L;
static uint32_t g_62[1][5] = {{0xD701FB03L, 0xD701FB03L, 0xD701FB03L, 0xD701FB03L, 0xD701FB03L}};

static union U3 func_1(void);
static int32_t *func_2(int32_t *p_3, int8_t p_4, uint32_t p_5, int32_t *p_6, int32_t *p_7);

static union U3 func_1(void) {
  int32_t *l_8 = &g_9;
  int32_t *l_11 = &g_9;
  int32_t **l_10 = &l_11;
  int32_t **l_12 = (void *)0;
  int32_t **l_13 = (void *)0;
  int32_t *l_15 = &g_9;
  int32_t **l_14 = &l_15;
  uint64_t *l_20[2];
  const int32_t *l_47 = &g_48;
  const int32_t **l_46 = &l_47;
  const int32_t *l_49 = &g_50;
  uint16_t l_55[1][4][2];
  uint64_t l_58 = 1UL;
  int64_t *l_59 = &g_60;
  uint32_t *l_61 = &g_62[0][3];
  uint16_t l_63 = 0x6835L;
  union U3 l_75 = {0xF95C78EDL};
  int i, j, k;
  for (i = 0; i < 2; i++)
    l_20[i] = &g_21[0];
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 2; k++)
        l_55[i][j][k] = 0x1F15L;
    }
  }
  (*g_51) = (l_49 = ((*l_46) = func_2(l_8, (g_9 > (((l_8 == ((*l_14) = ((*l_10) = (void *)0))) == 0x2DB80EBBL) <= ((~((g_9 > (safe_unary_minus_func_int64_t_s(((g_9, ((safe_rshift_func_uint64_t_u_s(g_9, ((g_21[0] = 0x5900B0881DDA8DB8LL), 7L))) == (-2L))) & 251UL)))), g_9)) == g_9))), (*l_8), &g_9, &g_9)));
  if (((g_43[1][0] < g_43[0][0]) ^ (safe_mul_func_uint32_t_u_u(((*l_8) = 7UL), ((*l_61) = (l_55[0][1][1] ^ (((((&l_55[0][1][1] == &g_32[1][3]) <= (safe_mul_func_uint64_t_u_u(g_43[2][0], g_32[1][3]))) && (((*l_59) &= (l_58, g_32[0][3])) && g_48)) ^ 4294967295UL) && g_50))))))) {
    (*l_8) = (*g_52);
  } else {
    int8_t l_74 = 8L;
    (*l_46) = (*g_51);
  }
  return l_75;
}

static int32_t *func_2(int32_t *p_3, int8_t p_4, uint32_t p_5, int32_t *p_6, int32_t *p_7) {
  int32_t l_22[2][1];
  uint16_t *l_31[3];
  int32_t l_33 = 1L;
  int16_t *l_34 = &g_35;
  int16_t *l_42 = &g_43[0][0];
  int32_t *l_44[1];
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++)
      l_22[i][j] = (-1L);
  }
  for (i = 0; i < 3; i++)
    l_31[i] = &g_32[1][3];
  for (i = 0; i < 1; i++)
    l_44[i] = (void *)0;
  (*p_3) = (((l_22[1][0] | ((safe_add_func_int8_t_s_s(((g_45 &= (((*l_42) &= (safe_mul_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s(0x11F64DB2L, (p_4 >= 0x5653L))), 1L) && ((safe_div_func_uint16_t_u_u((l_33 = p_4), ((*l_34) = p_4))) != (((g_9 ^ (safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(p_4, 65535UL)) > l_22[1][0]), l_22[0][0])), g_21[1]), p_5))) | g_32[1][4]), l_22[0][0]))), p_5))) < 0x642EL)) >= 0x8E434042L), p_5)) ^ 0xA065BBD97C2923F8LL)), &g_9) != (void *)0);
  return &g_9;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_21[i], "g_21[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_35, "g_35", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_43[i][j], "g_43[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_45, "g_45", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_60, "g_60", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_62[i][j], "g_62[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
