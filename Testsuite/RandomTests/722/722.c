// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_3 = (-1L);
static uint32_t g_13 = 0xF48C443EL;
static uint64_t g_26 = 18446744073709551614UL;
static const int32_t g_35[5][2] = {{0x9D73AE4CL, 0x9D73AE4CL}, {0x9D73AE4CL, 0x9D73AE4CL}, {0x9D73AE4CL, 0x9D73AE4CL}, {0x9D73AE4CL, 0x9D73AE4CL}, {0x9D73AE4CL, 0x9D73AE4CL}};
static volatile int16_t g_36 = 0L;
static uint16_t g_37 = 0xCC54L;

static int64_t func_1(void);
static int32_t func_16(int32_t *p_17, uint16_t p_18, int32_t *const p_19);

static int64_t func_1(void) {
  int32_t *l_2 = &g_3;
  int32_t *l_4 = &g_3;
  int32_t *l_5 = &g_3;
  int32_t *l_6 = (void *)0;
  int32_t *l_7 = (void *)0;
  int32_t *l_8 = (void *)0;
  int32_t *l_9 = &g_3;
  int32_t *l_10 = &g_3;
  int32_t *l_11 = &g_3;
  int32_t *l_12 = &g_3;
  --g_13;
  if (func_16(l_6, ((void *)0 == &g_3), &g_3)) {
    int64_t l_24[2][4][1] = {{{8L}, {(-1L)}, {8L}, {(-1L)}}, {{8L}, {(-1L)}, {8L}, {(-1L)}}};
    uint64_t *l_25[1];
    const int32_t *l_34 = &g_35[3][1];
    const int32_t **l_33 = &l_34;
    int i, j, k;
    for (i = 0; i < 1; i++)
      l_25[i] = &g_26;
    g_37 &= ((safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((g_26 = ((*l_2) = (g_3, l_24[1][3][0]))) && ((g_26, (g_3 >= (((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(0x01213072L, ((safe_lshift_func_int16_t_s_u((&g_3 == ((*l_33) = &g_3)), 13)) & 0L))), 1L)) == g_13) & g_13))) > g_36)), 4UL)), 1L)) || 0x20L);
  } else {
    return g_3;
  }
  return g_35[2][1];
}

static int32_t func_16(int32_t *p_17, uint16_t p_18, int32_t *const p_19) { return (*p_19); }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_35[i][j], "g_35[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
