// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  int16_t f0;
  int8_t f1;
  int64_t f2;
};
#pragma pack(pop)

static volatile int32_t g_2 = 1L;
static int32_t g_3[2] = {6L, 6L};
static int64_t g_13[1][5] = {{(-1L), (-1L), (-1L), (-1L), (-1L)}};
static struct S0 g_25 = {0x9ED0L, 0xE8L, 0x9EC0021FBB9CF7D1LL};
static int32_t g_27 = 0x6749EFEDL;
static int32_t *const **volatile g_30 = (void *)0;

static int32_t func_1(void);
static uint64_t func_8(int64_t p_9, int32_t p_10);

static int32_t func_1(void) {
  int16_t l_22 = 1L;
  int32_t l_23 = 0x20A6FF60L;
  int32_t *const l_29[3] = {&g_3[1], &g_3[1], &g_3[1]};
  int32_t *const *l_28 = &l_29[2];
  int32_t *const **l_31 = &l_28;
  int i;
  for (g_3[1] = 25; (g_3[1] < (-2)); g_3[1]--) {
    uint16_t l_11 = 65535UL;
    int64_t *l_12[1];
    int32_t *l_26 = &g_27;
    int i;
    for (i = 0; i < 1; i++)
      l_12[i] = &g_13[0][0];
    (*l_26) = ((((g_25.f2 = (safe_mod_func_int64_t_s_s((g_13[0][0] = (func_8(g_2, g_3[0]) ^ l_11)), (safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_uint32_t_u_u(((l_23 = (safe_lshift_func_int32_t_s_s((l_22 & l_22), 9))) < 0x70CAL), 29)), (safe_unary_minus_func_uint16_t_u((g_25, g_3[1]))))), g_25.f0))))) || g_3[1]) != 0x888C5540FFF06982LL) != 0x57F039D3L);
  }
  (*l_31) = l_28;
  return (***l_31);
}

static uint64_t func_8(int64_t p_9, int32_t p_10) { return g_3[1]; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_3[i], "g_3[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
  transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
  transparent_crc(g_25.f2, "g_25.f2", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
