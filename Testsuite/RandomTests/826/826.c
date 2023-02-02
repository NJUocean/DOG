// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 0x42EB90DAL;
static uint16_t g_29 = 0x77DCL;
static int32_t *volatile g_36 = (void *)0;

static uint32_t func_1(void);
static uint16_t func_11(uint32_t p_12, uint32_t p_13, int16_t p_14, int16_t p_15);

static uint32_t func_1(void) {
  uint64_t l_25[1][5][4] = {{{0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL}, {0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL}, {0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL}, {0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL}, {0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL, 0x6B17B722BA7B7E80LL}}};
  int32_t *l_39 = &g_2;
  int32_t **l_38 = &l_39;
  int i, j, k;
  for (g_2 = 23; (g_2 > (-17)); g_2 = safe_sub_func_int8_t_s_s(g_2, 6)) {
    uint16_t *l_28 = &g_29;
    int32_t l_34 = 0x84B7B831L;
    int32_t l_35 = 0L;
    int32_t *l_37 = &l_35;
    (*l_37) = ((0x182EAC4530722263LL <= g_2), ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint64_t_u_s((safe_mul_func_int16_t_s_s(1L, func_11((safe_sub_func_int32_t_s_s(((safe_mul_func_int64_t_s_s((safe_sub_func_int16_t_s_s(9L, ((+(safe_rshift_func_int16_t_s_u(l_25[0][0][2], (l_34 = ((safe_lshift_func_uint16_t_u_u(((*l_28) |= 0xF18CL), (safe_mul_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(g_2, g_2)), 1UL)))) || l_25[0][0][2]))))) <= g_2))), g_2)), l_25[0][0][1]), 1L)), l_25[0][0][1], g_2, l_35))), 2)), l_25[0][0][2])) == 4L));
  }
  (*l_38) = &g_2;
  return g_29;
}

static uint16_t func_11(uint32_t p_12, uint32_t p_13, int16_t p_14, int16_t p_15) { return g_29; }

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
