// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = (-3L);
static int32_t g_3 = (-6L);
static int32_t g_7 = 0L;
static volatile int32_t g_8 = 5L;
static int32_t g_9 = 0xD21F1EB3L;
static uint8_t g_13 = 0xF0L;
static int16_t g_27 = 0x57F3L;
static volatile int16_t g_29 = (-1L);
static volatile int16_t *volatile g_28[4] = {&g_29, &g_29, &g_29, &g_29};
static int8_t g_31 = 1L;
static volatile int16_t *g_33 = (void *)0;
static int32_t g_36 = 0L;
static int32_t *volatile g_35 = &g_36;

static int16_t func_1(void);
static uint64_t func_15(int32_t p_16, int32_t p_17, uint8_t p_18, uint8_t *p_19, uint64_t p_20);

static int16_t func_1(void) {
  int16_t l_6[5][1] = {{0xEE2FL}, {5L}, {0xEE2FL}, {5L}, {0xEE2FL}};
  const int32_t l_32 = 0x0A117216L;
  uint64_t *l_68 = (void *)0;
  uint64_t **l_69 = &l_68;
  int32_t *l_70 = &g_3;
  int i, j;
  for (g_3 = (-1); (g_3 < 8); g_3 = safe_add_func_int32_t_s_s(g_3, 1)) {
    uint8_t l_25[1][5] = {{1UL, 1UL, 1UL, 1UL, 1UL}};
    int i, j;
    for (g_7 = 0; (g_7 <= 0); g_7 += 1) {
      int64_t l_14 = 0x73EE76373A4C924BLL;
      int64_t l_51 = 1L;
      for (g_9 = 0; (g_9 <= 0); g_9 += 1) {
        uint64_t l_10 = 0xBBE56890C5440874LL;
        uint8_t *l_11 = (void *)0;
        uint8_t *l_12[4] = {&g_13, &g_13, &g_13, &g_13};
        int16_t *l_26 = &g_27;
        int8_t *l_30 = &g_31;
        uint64_t *l_41 = &l_10;
        int32_t l_52 = 0x9898791BL;
        int i, j;
        (*g_35) = ((0x58L | (l_14 = l_10)) && func_15(((safe_add_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((*l_26) = (l_6[(g_7 + 1)][g_7] = l_25[0][1])), ((((g_13 > ((*l_30) = (g_28[3] != (l_10, (void *)0)))) ^ (l_32 >= ((l_26 == g_33) & l_14))), g_31) <= l_10))) >= g_9), l_10), l_32)), g_29), g_13, g_13, l_12[3], l_25[0][3]));
        l_52 &= (((((-1L) ^ (l_10, ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint64_t_u_s(((*l_41) = 1UL), 30)), g_7)) <= (+(((*g_35) == g_9) == (safe_sub_func_uint64_t_u_u((((*l_30) = l_14) < ((safe_rshift_func_int8_t_s_u(l_14, (++g_13))), (safe_div_func_uint32_t_u_u(g_27, 0x05199242L)))), g_7))))))) && l_10) == l_51) != g_9);
      }
      for (g_31 = (-9); (g_31 <= 23); g_31++) {
        int32_t *l_55 = &g_36;
        int32_t *l_56 = &g_9;
        int32_t *l_57 = &g_9;
        int32_t *l_58 = &g_9;
        int32_t *l_59 = &g_36;
        int32_t *l_60 = &g_9;
        int32_t *l_61 = &g_9;
        int32_t *l_62 = &g_9;
        int32_t *l_63 = &g_36;
        int32_t *l_64 = &g_9;
        uint16_t l_65 = 3UL;
        --l_65;
      }
    }
  }
  (*l_70) &= (((*l_69) = l_68) != (void *)0);
  return (*l_70);
}

static uint64_t func_15(int32_t p_16, int32_t p_17, uint8_t p_18, uint8_t *p_19, uint64_t p_20) {
  int32_t l_34 = (-4L);
  return l_34;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_29, "g_29", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
