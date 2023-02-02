// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_12 = 3L;
static uint16_t g_14 = 0xA095L;
static uint32_t g_19 = 4294967294UL;
static int32_t g_28 = 0xE856DFC9L;
static uint64_t g_32 = 0UL;

static uint32_t func_1(void);
static int8_t func_6(int32_t p_7, int32_t p_8, int64_t p_9);

static uint32_t func_1(void) {
  uint16_t *l_13 = &g_14;
  int32_t l_17[1];
  uint32_t *l_18 = &g_19;
  uint8_t l_20 = 0x80L;
  int32_t *l_27 = &g_28;
  uint8_t *l_29 = &l_20;
  int8_t l_30[4][1];
  uint32_t l_35[3];
  int i, j;
  for (i = 0; i < 1; i++)
    l_17[i] = 0x14EB4C8FL;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++)
      l_30[i][j] = (-10L);
  }
  for (i = 0; i < 3; i++)
    l_35[i] = 4294967291UL;
  (*l_27) = (1L & (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((func_6((safe_div_func_int32_t_s_s(((g_12 >= (++(*l_13))) <= ((g_12, 0x649F6D4AL) && ((*l_18) = l_17[0]))), (l_20, ((safe_add_func_uint32_t_u_u((g_12 & (((((*l_29) = (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((*l_27) = ((g_12, l_20) | g_12)), 0x53086335L)) <= g_12), 0x64L))) > 253UL), (*l_27)) ^ g_12)), l_30[3][0])), (*l_27))))), g_12, g_12), (*l_27)), g_12)), l_35[1])));
  return (*l_27);
}

static int8_t func_6(int32_t p_7, int32_t p_8, int64_t p_9) {
  int32_t *l_31[3];
  int i;
  for (i = 0; i < 3; i++)
    l_31[i] = (void *)0;
  g_32++;
  return g_32;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
