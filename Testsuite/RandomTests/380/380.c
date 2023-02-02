// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const int32_t g_9[1] = {0x08974B66L};
static uint16_t g_15 = 0UL;
static uint64_t g_18 = 18446744073709551609UL;
static int32_t g_22 = 0xCC80FC3AL;
static int32_t *g_21 = &g_22;
static int8_t g_48 = 0x3AL;
static uint32_t g_79 = 0xCABD119EL;
static int32_t g_80 = 0L;
static int32_t **volatile g_81 = &g_21;

static uint64_t func_1(void);
static int32_t *func_2(int64_t p_3, const uint16_t p_4, uint32_t p_5, int32_t *p_6, uint16_t p_7);

static uint64_t func_1(void) {
  uint32_t l_8 = 0UL;
  uint16_t *l_14 = &g_15;
  uint64_t *l_16 = (void *)0;
  uint64_t *l_17 = &g_18;
  int32_t *l_19 = (void *)0;
  int32_t **l_20 = &l_19;
  uint32_t l_23 = 0x4F823AAFL;
  (*g_81) = ((*l_20) = func_2(l_8, g_9[0], (((*l_17) ^= (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_14) = (1UL ^ 0x3BA2L)), 9)), 6))) | (&g_9[0] == ((*l_20) = l_19))), g_21, l_23));
  return g_9[0];
}

static int32_t *func_2(int64_t p_3, const uint16_t p_4, uint32_t p_5, int32_t *p_6, uint16_t p_7) {
  uint16_t l_30 = 0UL;
  uint16_t l_49 = 0UL;
  int32_t *l_50[4];
  uint32_t *l_78 = &g_79;
  int i;
  for (i = 0; i < 4; i++)
    l_50[i] = &g_22;
  if (((*g_21) = (g_15, 0L))) {
    uint16_t *l_24 = &g_15;
    int32_t l_45 = (-1L);
    uint64_t *l_46[1][1][3];
    int8_t *l_47 = &g_48;
    int i, j, k;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 1; j++) {
        for (k = 0; k < 3; k++)
          l_46[i][j][k] = &g_18;
      }
    }
        if ((((((*l_24)++) < (((((((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(l_30)), (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((g_22 || (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((((((&g_9[0] == (((((((safe_mul_func_uint64_t_u_u(g_9[0], (((p_4 > ((*l_47) |= (safe_add_func_uint64_t_u_u(((l_45 , l_30) == ((((((l_30 , &g_18) != l_46[0][0][1]) >= g_9[0]) , p_4) | l_45) , g_22)), g_9[0])))) , (-5L)) ^ 0x26315BFEL))) && 0xECL) ^ l_45) >= l_30) && p_3) ^ p_5) , (void*)0)) | l_30) ^ p_4) , (-8L)) < 1L) , (-5L)), 5)), 0xCAL)), 4L))) ^ g_18) , p_7), p_5)), 0x7DD1L)))) != p_3) , (*g_21)) ^ l_45) , &p_6) != (void*)0) == (-9L))) == l_49) < l_45))
        {
          return l_50[3];
        } else {
          int32_t *l_51 = &g_22;
          (*g_21) = (*p_6);
          return l_51;
        }
  } else {
    uint16_t l_52 = 65535UL;
    for (p_7 = 0; (p_7 <= 3); p_7 += 1) {
      int i;
      l_52 = (*g_21);
    }
  }
  g_80 &= (safe_mul_func_int64_t_s_s((safe_rshift_func_int64_t_s_u(0L, (safe_mul_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((0xD581CA9286DF497ALL | (safe_mul_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((*l_78) &= ((safe_sub_func_int8_t_s_s(((g_48, (safe_unary_minus_func_int64_t_s(((safe_div_func_int8_t_s_s(g_48, g_18)) && g_48)))) > (safe_add_func_uint16_t_u_u((g_18 <= (0xCEB0L || (safe_add_func_uint64_t_u_u((p_7 ^ 0x8228F8F04B746664LL), g_15)))), 2L))), p_5)), g_18)), 4294967289UL)), g_22), 7)), (*g_21)), g_9[0])), 0x91505FFFL))), 4L)), p_4)))), g_9[0]));
  return &g_22;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_9[i], "g_9[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  transparent_crc(g_48, "g_48", print_hash_value);
  transparent_crc(g_79, "g_79", print_hash_value);
  transparent_crc(g_80, "g_80", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
