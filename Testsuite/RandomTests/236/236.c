// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  unsigned f0 : 11;
};

static int32_t g_12 = 0x34C865B4L;
static volatile int32_t *const g_13 = (void *)0;
static uint32_t g_21 = 0x8F9ED02EL;
static uint32_t g_24 = 0xBB9CF7D1L;
static uint16_t g_25[5] = {65535UL, 65535UL, 65535UL, 65535UL, 65535UL};
static uint64_t g_33 = 0x404D4644688D239BLL;
static int32_t g_35 = 8L;
static union U0 g_48 = {0xCF2BBA2DL};
static uint64_t g_50 = 18446744073709551607UL;

static int32_t func_1(void);
static int32_t *func_2(int32_t p_3, uint16_t p_4, int32_t *p_5);

static int32_t func_1(void) {
  uint8_t l_6[2];
  int32_t *const l_11 = &g_12;
  int32_t *l_15 = (void *)0;
  int32_t **l_14 = &l_15;
  uint32_t *l_20 = &g_21;
  uint32_t *l_22 = (void *)0;
  uint32_t *l_23 = &g_24;
  int i;
  for (i = 0; i < 2; i++)
    l_6[i] = 9UL;
  (*l_14) = func_2(l_6[0], (((((*l_23) = ((*l_20) = ((safe_mul_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(0xF1L, ((l_11 == ((g_13 != (void *)0), ((*l_14) = (void *)0))) != (safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(0x68807383CC47D1AFLL, g_12)), ((((void *)0 == l_11) < 0x6758E356L) != (*l_11))))))) && g_12), 0xFF609D70CADD6352LL)), g_12))) >= 0x5D088182L), (*l_11)) > g_12), &g_12);
  return g_33;
}

static int32_t *func_2(int32_t p_3, uint16_t p_4, int32_t *p_5) {
  int16_t l_34[3];
  int i;
  for (i = 0; i < 3; i++)
    l_34[i] = (-1L);
  for (p_3 = 0; (p_3 <= 4); p_3 += 1) {
    int32_t l_51 = 0x3A1B4BC7L;
    uint16_t l_52 = 0xB38DL;
    int i;
    if (g_25[p_3])
      break;
    for (p_4 = 0; (p_4 <= 4); p_4 += 1) {
      uint64_t *l_32 = &g_33;
      uint64_t *l_49[1][3];
      int i, j;
      for (i = 0; i < 1; i++) {
        for (j = 0; j < 3; j++)
          l_49[i][j] = &g_50;
      }
      (*p_5) = (((0xB430L > g_25[p_3]), (safe_mul_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((safe_mul_func_uint64_t_u_u(((*l_32) = 18446744073709551615UL), (l_34[2] ^ (g_35 = g_25[p_3])))) > (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((*p_5) == (safe_sub_func_uint64_t_u_u((l_51 &= (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(((g_48, (g_12, (((*p_5) < g_25[p_3]), 0x19B17C08L))), g_21), g_24)) != p_3), g_48.f0))), p_4))), 0x652F52174D4A52D8LL)), p_3)), g_21))), l_52)) > 65535UL), 0L))) | g_21);
    }
  }
  return p_5;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  transparent_crc(g_24, "g_24", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_25[i], "g_25[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_35, "g_35", print_hash_value);
  transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
