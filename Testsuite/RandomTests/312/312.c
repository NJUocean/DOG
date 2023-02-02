// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U0 {
  uint16_t f0;
  volatile int8_t f1;
  int32_t f2;
  int32_t f3;
};

static volatile int32_t g_4 = 1L;
static int64_t g_14[1][1][5] = {{{0xA3C0BF90A2337124LL, 0xA3C0BF90A2337124LL, 0xA3C0BF90A2337124LL, 0xA3C0BF90A2337124LL, 0xA3C0BF90A2337124LL}}};
static int16_t g_18 = 1L;
static int32_t g_25 = 0x06BDE64FL;
static int32_t g_27 = 0xAE735984L;
static uint32_t g_28 = 0x62B56095L;
static const union U0 g_32 = {0x6540L};

static const union U0 func_1(void);
static int8_t func_9(uint8_t p_10, int16_t p_11, uint64_t p_12, const uint64_t p_13);

static const union U0 func_1(void) {
  uint32_t l_17 = 4294967291UL;
  int32_t *l_31 = &g_27;
  (*l_31) = (safe_rshift_func_int16_t_s_u(g_4, (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u((func_9(g_14[0][0][4], g_14[0][0][4], (safe_add_func_int8_t_s_s(g_14[0][0][4], l_17)), (g_18 = g_14[0][0][0])) < (((void *)0 != l_31) != 0x5B45L)), 0xACL)), g_27))));
  return g_32;
}

static int8_t func_9(uint8_t p_10, int16_t p_11, uint64_t p_12, const uint64_t p_13) {
  uint16_t l_23 = 0x6284L;
  int32_t *l_26[3];
  int i;
  for (i = 0; i < 3; i++)
    l_26[i] = &g_25;
  for (p_12 = 2; (p_12 == 3); ++p_12) {
    if (p_12)
      break;
    for (p_11 = 0; (p_11 >= (-28)); p_11--) {
      int32_t *l_24 = &g_25;
      (*l_24) ^= l_23;
    }
  }
  g_28--;
  return p_13;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_14[i][j][k], "g_14[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
