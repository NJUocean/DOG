// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static uint64_t g_12 = 1UL;
static uint16_t g_15[2][4] = {{0xC0BFL, 0x49CEL, 0xC0BFL, 0xC0BFL}, {0x49CEL, 0x49CEL, 0x72CAL, 0x49CEL}};
static int8_t g_31 = 6L;
static int32_t *volatile g_32[3] = {(void *)0, (void *)0, (void *)0};
static int32_t g_34 = (-6L);
static int32_t *volatile g_33 = &g_34;
static uint32_t g_43 = 1UL;
static int32_t g_46 = 0x78DFCE24L;

static uint32_t func_1(void);
static int8_t func_8(uint64_t p_9, uint16_t p_10);

static uint32_t func_1(void) {
  uint64_t *l_11 = &g_12;
  const int32_t l_18 = 7L;
  uint8_t l_29 = 0xE7L;
  int8_t *l_30 = &g_31;
  uint32_t *l_42 = &g_43;
  int32_t *l_44 = &g_34;
  int32_t *l_45 = &g_46;
  (*g_33) |= (safe_mod_func_uint64_t_u_u((4294967295UL == ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(func_8(((*l_11)--), g_15[1][0]), ((!0L), g_15[1][0]))) <= l_18), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((((((((*l_30) &= ((((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_18, g_15[0][0])), g_15[1][0])), 0L) ^ l_18) < l_29)) ^ g_15[0][2]), 1UL) & g_15[1][0]) == g_15[1][0]), 0x147FL), (-1L))), g_15[1][1]), g_15[1][0])), g_15[1][0])))) || g_31)), g_15[1][0]));
  (*l_45) = ((*l_44) ^= ((safe_add_func_int32_t_s_s(0x16765654L, ((*l_42) = (((((0UL && ((void *)0 != &l_18)) > (g_15[1][0] ^ (+(safe_mul_func_uint16_t_u_u((((l_18 > 0x80F3BBA6L), (((safe_mod_func_uint32_t_u_u(l_18, (0xE158L & g_12))) < 0xAAFA0B2BL) || 0x2AD9236FL)) == 65535UL), g_15[1][0]))))) <= 0x6947A332A5B4D633LL) <= l_18) | g_12)))) >= g_12));
  return (*l_45);
}

static int8_t func_8(uint64_t p_9, uint16_t p_10) {
  int8_t l_16 = 1L;
  return l_16;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_12, "g_12", print_hash_value);
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_34, "g_34", print_hash_value);
  transparent_crc(g_43, "g_43", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
