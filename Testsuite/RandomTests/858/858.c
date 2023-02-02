// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_8 = 0x2ABBF9ACL;
static uint16_t g_16 = 65532UL;
static volatile uint16_t g_25 = 0x7D16L;
static volatile uint16_t *g_24 = &g_25;
static uint32_t g_27[2] = {1UL, 1UL};
static int32_t *g_31 = &g_8;
static int8_t g_37 = 0x9FL;
static volatile uint64_t g_38 = 0xF93B76F056E99FD4LL;

static int16_t func_1(void);
static int32_t func_6(int16_t p_7);

static int16_t func_1(void) {
  uint16_t *l_15 = &g_16;
  int32_t l_19[5];
  int32_t *l_26 = &l_19[1];
  int8_t l_32 = 0x6BL;
  int32_t *l_33 = (void *)0;
  int32_t *l_34 = (void *)0;
  int32_t *l_35 = &l_19[4];
  int32_t *l_36[5] = {&l_19[1], &l_19[1], &l_19[1], &l_19[1], &l_19[1]};
  int i;
  for (i = 0; i < 5; i++)
    l_19[i] = 0x47D1AFD0L;
  (*l_26) = (((safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(((func_6((g_8 > (((-5L) || ((*l_26) = (safe_rshift_func_uint64_t_u_s(18446744073709551615UL, ((safe_add_func_int16_t_s_s((safe_rshift_func_int64_t_s_s((((*l_15)--) <= l_19[4]), 18)), (((void *)0 != l_15) <= ((safe_div_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((((g_8 <= ((void *)0 == g_24)) <= 2L), 251UL), 0UL)) || l_19[4]) || 0xCAAD901516EA3DE8LL), g_25)) == l_19[2])))) | l_19[4]))))) | 0x39D3L))) > l_32) != l_32), g_27[1])) & 0x0563ADE45A9172C2LL), 0UL)) && (-4L)), (*l_26));
  g_38++;
  return g_27[1];
}

static int32_t func_6(int16_t p_7) {
  int32_t *l_30 = &g_8;
  for (g_16 = 0; (g_16 <= 1); g_16 += 1) {
    for (g_8 = 0; (g_8 <= 1); g_8 += 1) {
      int32_t *l_29 = &g_8;
      int32_t **l_28 = &l_29;
      (*l_28) = &g_8;
    }
    for (p_7 = 0; (p_7 <= 1); p_7 += 1) {
      g_31 = l_30;
    }
  }
  return p_7;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_27[i], "g_27[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_37, "g_37", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
