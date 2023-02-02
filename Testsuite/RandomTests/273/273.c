// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile unsigned f0 : 23;
  volatile int32_t f1;
};
#pragma pack(pop)

static volatile int32_t g_2[3] = {(-1L), (-1L), (-1L)};
static int32_t g_3 = 0x013DCE9DL;
static volatile int32_t g_6[3][1][2] = {{{0xDA4D073FL, 0xDA4D073FL}}, {{0xDA4D073FL, 0xDA4D073FL}}, {{0xDA4D073FL, 0xDA4D073FL}}};
static int32_t g_7 = 0x72A72759L;
static volatile int32_t g_10 = 4L;
static volatile int32_t g_11 = 0x04F3D4E6L;
static int32_t g_12 = 0L;
static int32_t g_16 = 0xC2132456L;
static const int32_t g_25[1][5] = {{0L, 0L, 0L, 0L, 0L}};
static const int32_t *g_24[5][2] = {{&g_25[0][3], (void *)0}, {&g_25[0][3], &g_25[0][3]}, {(void *)0, &g_25[0][3]}, {&g_25[0][3], (void *)0}, {&g_25[0][3], &g_25[0][3]}};
static struct S0 g_29 = {517, -1L};

static int32_t func_1(void);
static struct S0 func_18(int32_t *p_19, const int32_t *p_20, const int32_t *p_21, uint64_t p_22);

static int32_t func_1(void) {
  int32_t *l_23 = &g_7;
  uint32_t l_28 = 0x3C86992FL;
  for (g_3 = 0; (g_3 >= 23); g_3++) {
    int32_t *l_17 = &g_16;
    for (g_7 = (-25); (g_7 == (-21)); g_7 = safe_add_func_uint32_t_u_u(g_7, 6)) {
      for (g_12 = 5; (g_12 <= (-12)); g_12 = safe_sub_func_int8_t_s_s(g_12, 9)) {
        int32_t *l_15 = &g_16;
        (*l_15) ^= g_2[1];
      }
    }
    (*l_17) &= 0xBEB96916L;
  }
  g_29 = func_18(l_23, l_23, (g_24[3][0] = &g_7), (safe_lshift_func_uint16_t_u_s(l_28, g_2[1])));
  return g_11;
}

static struct S0 func_18(int32_t *p_19, const int32_t *p_20, const int32_t *p_21, uint64_t p_22) {
  (*p_19) &= (-1L);
  return g_29;
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
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 1; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
  transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
