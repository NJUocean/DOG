// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile uint32_t g_15 = 4294967295UL;
static int8_t g_19 = 6L;
static int8_t g_21 = 0x45L;
static int8_t *g_20[3] = {&g_21, &g_21, &g_21};
static uint16_t g_23 = 0x5EBEL;
static uint64_t g_24 = 18446744073709551615UL;
static volatile int32_t g_26 = 1L;
static volatile int32_t g_27 = 0x67E784B5L;
static uint16_t g_28 = 9UL;
static int32_t g_32 = 7L;

static int32_t func_1(void);
static int16_t func_2(int8_t p_3, int32_t p_4, int16_t p_5, int8_t p_6);

static int32_t func_1(void) {
  int16_t l_9[3];
  int8_t *l_18 = &g_19;
  uint16_t *l_22 = &g_23;
  int32_t *l_31 = &g_32;
  int i;
  for (i = 0; i < 3; i++)
    l_9[i] = 0L;
  (*l_31) &= (((func_2((safe_add_func_uint64_t_u_u(1UL, (0UL < l_9[1]))), (safe_unary_minus_func_int32_t_s(l_9[1])), (((((*l_22) ^= (safe_lshift_func_int64_t_s_s((safe_add_func_uint16_t_u_u((g_15, (safe_add_func_int8_t_s_s(((*l_18) &= (0L ^ l_9[1])), ((g_15 || (l_18 != g_20[0])) || 0xA6L)))), g_21)), l_9[2]))) ^ g_21), g_15) || l_9[1]), g_24) < g_24) != g_21) && l_9[1]);
  (*l_31) = ((void *)0 == l_22);
  return g_15;
}

static int16_t func_2(int8_t p_3, int32_t p_4, int16_t p_5, int8_t p_6) {
  int32_t *l_25[3];
  int i;
  for (i = 0; i < 3; i++)
    l_25[i] = (void *)0;
  --g_28;
  return g_27;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
