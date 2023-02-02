// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S1 {
  uint32_t f0;
  volatile uint32_t f1;
};
#pragma pack(pop)

static uint32_t g_8 = 0x48C443EBL;
static uint16_t g_32[2] = {6UL, 6UL};
static int32_t g_34 = 0xE71CC545L;
static int32_t g_41 = 0xC53D8B3DL;
static volatile uint16_t g_42[5][5] = {{0UL, 0x86FCL, 0x86FCL, 0UL, 0xD0EEL}, {0UL, 0x86FCL, 0x86FCL, 0UL, 0xD0EEL}, {0UL, 0x86FCL, 0x86FCL, 0UL, 0xD0EEL}, {0UL, 0x86FCL, 0x86FCL, 0UL, 0xD0EEL}, {0UL, 0x86FCL, 0x86FCL, 0UL, 0xD0EEL}};
static struct S1 g_46[2][5][1] = {{{{18446744073709551615UL, 0UL}}, {{18446744073709551615UL, 0UL}}, {{1UL, 0xB3333DB9L}}, {{0x2E2CC7BCL, 0UL}}, {{1UL, 0xB3333DB9L}}}, {{{18446744073709551615UL, 0UL}}, {{18446744073709551615UL, 0UL}}, {{1UL, 0xB3333DB9L}}, {{0x2E2CC7BCL, 0UL}}, {{1UL, 0xB3333DB9L}}}};
static struct S1 *g_45 = &g_46[0][0][0];
static struct S1 **volatile g_48 = &g_45;
static uint32_t g_51 = 0x9A53AA48L;

static uint32_t func_1(void);
static uint64_t func_16(uint64_t p_17, uint64_t p_18, uint16_t p_19);

static uint32_t func_1(void) {
  int32_t l_24 = 0L;
  uint16_t *l_31 = &g_32[0];
  int32_t *l_49 = &l_24;
  int32_t *l_50[3];
  int i;
  for (i = 0; i < 3; i++)
    l_50[i] = &l_24;
  if (((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_int32_t_s_u((g_8 | (g_8, (safe_mul_func_int16_t_s_s((g_8, (-10L)), (((((~(safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u(func_16(((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(g_8, 0x9FA8BC07L)), l_24)) || (safe_mul_func_int32_t_s_s(((safe_mul_func_int64_t_s_s((l_24 > ((*l_31) = ((safe_sub_func_int32_t_s_s(((g_8 == l_24), l_24), 1L)) < g_8))), l_24)) & l_24), 0x9D73AE4CL))), g_8, g_8), l_24)), g_8))) & g_8) || l_24), 1L) <= l_24))))), g_8)), g_8)), (-1L))) >= 1UL)) {
    int32_t *l_33 = &l_24;
    int32_t *l_35 = &l_24;
    int32_t *l_36 = &l_24;
    int32_t *l_37 = &l_24;
    int32_t *l_38 = &l_24;
    int32_t *l_39 = (void *)0;
    int32_t *l_40[2];
    int i;
    for (i = 0; i < 2; i++)
      l_40[i] = &l_24;
    ++g_42[0][1];
  } else {
    struct S1 **l_47 = (void *)0;
    (*g_48) = g_45;
  }
  --g_51;
  return g_32[0];
}

static uint64_t func_16(uint64_t p_17, uint64_t p_18, uint16_t p_19) { return g_8; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8, "g_8", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_32[i], "g_32[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_41, "g_41", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_42[i][j], "g_42[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 1; k++) {
        transparent_crc(g_46[i][j][k].f0, "g_46[i][j][k].f0", print_hash_value);
        transparent_crc(g_46[i][j][k].f1, "g_46[i][j][k].f1", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_51, "g_51", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
