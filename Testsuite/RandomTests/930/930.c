// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2[3][3][1] = {{{0x2CB13638L}, {0x2CB13638L}, {0x2CB13638L}}, {{0x2CB13638L}, {0x2CB13638L}, {0x2CB13638L}}, {{0x2CB13638L}, {0x2CB13638L}, {0x2CB13638L}}};
static int32_t g_3 = (-5L);
static int32_t g_6 = (-1L);
static int8_t g_15 = 0x05L;
static int8_t g_21[5][1][2] = {{{0x6CL, (-1L)}}, {{0x6CL, (-1L)}}, {{0x6CL, (-1L)}}, {{0x6CL, (-1L)}}, {{0x6CL, (-1L)}}};
static uint8_t g_26 = 1UL;
static uint8_t g_28 = 0xDDL;
static int32_t g_30[4][2] = {{0x55261FC4L, 0x55261FC4L}, {0x55261FC4L, 0x55261FC4L}, {0x55261FC4L, 0x55261FC4L}, {0x55261FC4L, 0x55261FC4L}};
static int32_t *volatile g_29[2][4] = {{&g_30[2][1], &g_30[2][1], &g_30[2][1], &g_30[2][1]}, {&g_30[2][1], &g_30[2][1], &g_30[2][1], &g_30[2][1]}};
static int32_t *volatile g_31 = &g_30[2][1];
static int32_t *g_35 = &g_6;
static int32_t **g_34[2][5] = {{&g_35, &g_35, &g_35, &g_35, &g_35}, {&g_35, &g_35, &g_35, &g_35, &g_35}};
static int32_t g_37 = 0x4F4CC511L;

static const uint32_t func_1(void);
static const int16_t func_11(int8_t p_12, uint8_t p_13);

static const uint32_t func_1(void) {
  int32_t *l_40 = &g_30[2][1];
  for (g_3 = (-11); (g_3 > 17); g_3 = safe_add_func_uint64_t_u_u(g_3, 4)) {
    int8_t *const l_20[1] = {&g_21[2][0][0]};
    int i;
    for (g_6 = 0; (g_6 == 0); g_6 = safe_add_func_uint16_t_u_u(g_6, 7)) {
      int8_t *l_14 = &g_15;
      int32_t l_24 = 0L;
      uint8_t *l_25 = &g_26;
      uint8_t *l_27 = &g_28;
      int32_t *l_36 = &g_37;
      (*l_36) &= (safe_rshift_func_int16_t_s_u(func_11(((*l_14) &= 1L), ((*l_27) = ((*l_25) = (safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u((l_20[0] != (void *)0), (safe_add_func_int32_t_s_s((g_6 == 4294967295UL), g_21[3][0][1])))), l_24))))), 6));
    }
  }
  for (g_3 = 6; (g_3 != (-12)); g_3 = safe_sub_func_int64_t_s_s(g_3, 3)) {
    int8_t *l_48 = &g_21[2][0][0];
    int8_t **l_49 = &l_48;
    int8_t *l_50 = &g_15;
    int32_t l_51 = 7L;
    l_40 = l_40;
    (*l_40) = (!(safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(0UL, (safe_div_func_uint16_t_u_u((((*l_49) = l_48) != l_50), ((((l_51 && g_3), (*l_40)), (safe_div_func_uint8_t_u_u(g_15, (safe_div_func_int32_t_s_s((0x0561L | g_6), 0x84EDB553L))))), 0xF6EDL))))) < l_51), 1UL)));
  }
  return (*l_40);
}

static const int16_t func_11(int8_t p_12, uint8_t p_13) {
  int32_t *l_33 = &g_30[2][0];
  int32_t **l_32[3][2][4];
  int i, j, k;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 4; k++)
        l_32[i][j][k] = &l_33;
    }
  }
  (*g_31) = p_12;
  g_34[0][0] = l_32[2][1][3];
  return g_26;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_30[i][j], "g_30[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
