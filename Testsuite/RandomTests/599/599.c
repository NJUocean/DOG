// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  const uint8_t f0;
};

static int32_t g_8[4] = {0x095A9796L, 0x095A9796L, 0x095A9796L, 0x095A9796L};
static int32_t *g_7 = &g_8[2];
static volatile int64_t g_9[4] = {0x0D461E3FF14EB4C8LL, 0x0D461E3FF14EB4C8LL, 0x0D461E3FF14EB4C8LL, 0x0D461E3FF14EB4C8LL};
static int32_t *g_10 = (void *)0;
static int32_t g_28 = 1L;
static uint32_t g_31 = 0xA9C79EBEL;
static int8_t g_42 = 0xF5L;
static int64_t g_65 = 9L;
static int32_t **const volatile g_68 = &g_10;

static int16_t func_1(void);
static int32_t *func_2(int32_t *p_3, int32_t *p_4, int8_t p_5, int32_t p_6);

static int16_t func_1(void) {
  uint32_t l_11[4] = {0x184DCC80L, 0x184DCC80L, 0x184DCC80L, 0x184DCC80L};
  union U2 l_12 = {0xDCL};
  int32_t *l_13 = &g_8[2];
  int i;
  (*g_68) = func_2(g_7, (g_9[0], g_10), l_11[1], (((&g_8[3] != (l_12, l_13)), &g_8[3]) == l_13));
  return g_65;
}

static int32_t *func_2(int32_t *p_3, int32_t *p_4, int8_t p_5, int32_t p_6) {
  int8_t l_16 = 5L;
  int32_t l_29 = 0xF8169C14L;
  int32_t *l_62 = &g_8[2];
  int32_t l_67 = 0x7384C7B9L;
  for (p_6 = (-30); (p_6 <= 29); ++p_6) {
    (*p_3) &= l_16;
  }
  for (p_5 = 25; (p_5 < (-1)); p_5 = safe_sub_func_uint16_t_u_u(p_5, 3)) {
    uint32_t *l_30 = &g_31;
    int32_t l_36 = 0x85F402BEL;
    int32_t l_63[4][5] = {{0x8D581CA9L, 7L, 0x8D581CA9L, 0x8D581CA9L, 7L}, {0x86DF497AL, 1L, 1L, 0x86DF497AL, 1L}, {7L, 7L, 0x47E08A84L, 7L, 7L}, {1L, 0x86DF497AL, 1L, 1L, 0x86DF497AL}};
    int i, j;
    if ((safe_mul_func_uint64_t_u_u((((safe_add_func_int16_t_s_s(0x27F3L, ((((~(p_5, l_16)) >= g_9[3]) > (safe_add_func_int32_t_s_s((((safe_add_func_uint32_t_u_u((--(*l_30)), (((l_36 = (l_29 = (safe_div_func_int32_t_s_s(l_29, p_6)))), ((safe_lshift_func_uint64_t_u_s((((safe_rshift_func_uint64_t_u_s(((l_29 = 4L), 0xBB5FB49A5C1B09C8LL), ((!l_16) | 0xDEL))) != 7L) & 65531UL), l_16)) ^ 0UL)) < 0UL))) < p_6) ^ g_8[1]), 0x04840C2CL))) < g_28))) || (*g_7)) > g_8[2]), g_28))) {
      if (g_42)
        break;
    } else {
      int32_t **l_53 = &g_10;
      int64_t *l_64 = &g_65;
      int8_t l_66 = 8L;
      if ((safe_rshift_func_uint8_t_u_s(((((+g_28) > ((safe_rshift_func_int8_t_s_u(l_29, 7)) || g_42)), l_36) != (safe_add_func_int16_t_s_s(((l_67 = ((!((safe_div_func_int64_t_s_s((&p_6 != ((*l_53) = &g_8[2])), ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint64_t_u_s(((-1L) <= ((*l_64) |= (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_63[0][0] ^= ((l_62 = &p_6) == (void *)0)), (*g_7)), 0xE27DFDEEL)), g_8[2])))), p_5)) < (-4L)), 7)) ^ l_29))) ^ p_6)) >= l_66)) & l_36), g_8[3]))), 0))) {
        if ((*g_7))
          break;
      } else {
        p_3 = (g_31, &p_6);
      }
    }
  }
  return &g_28;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 4; i++) {
    transparent_crc(g_8[i], "g_8[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 4; i++) {
    transparent_crc(g_9[i], "g_9[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_42, "g_42", print_hash_value);
  transparent_crc(g_65, "g_65", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
