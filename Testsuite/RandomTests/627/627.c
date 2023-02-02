// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const volatile int32_t g_7 = (-5L);
static int32_t g_9 = 0L;
static uint32_t g_12 = 0x6B9DD952L;
static volatile uint32_t g_26 = 4294967290UL;
static volatile uint32_t *g_25 = &g_26;
static int32_t g_29[2][1] = {{(-1L)}, {(-1L)}};
static uint32_t g_35 = 0x81D534A2L;
static uint32_t g_36 = 0x16C28CBDL;
static int32_t g_38 = 0L;

static int32_t func_1(void);
static int32_t func_2(int32_t p_3, uint32_t p_4, uint64_t p_5, int64_t p_6);

static int32_t func_1(void) {
  int32_t *l_8[3];
  uint32_t *l_10 = (void *)0;
  uint32_t *l_11 = &g_12;
  int32_t l_39 = 0x251ABE71L;
  int i;
  for (i = 0; i < 3; i++)
    l_8[i] = &g_9;
  g_38 = (g_29[1][0] = func_2((g_9 |= (g_7, g_7)), ((*l_11)++), ((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint64_t_u_s(((((((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((g_25 != (void *)0), 12)), (safe_div_func_int64_t_s_s((g_29[1][0] > ((safe_sub_func_uint64_t_u_u(g_29[1][0], 5L)) < g_29[1][0])), (safe_add_func_uint32_t_u_u((((!(g_35 = g_29[0][0])) && g_35) ^ g_29[1][0]), 4294967295UL)))))) == g_29[1][0]) && g_29[1][0]) || g_35) > g_29[1][0]), g_29[0][0]), g_29[0][0])) != g_36), g_36)), g_29[1][0])) || g_36), g_29[1][0]));
  return l_39;
}

static int32_t func_2(int32_t p_3, uint32_t p_4, uint64_t p_5, int64_t p_6) {
  uint32_t l_37 = 0xAD479EA4L;
  return l_37;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_29[i][j], "g_29[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
