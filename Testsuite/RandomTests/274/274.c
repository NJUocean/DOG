// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint32_t f0;
  const int8_t f1;
  volatile int32_t f2;
  int32_t f3;
  const volatile uint32_t f4;
};
#pragma pack(pop)

static int32_t g_2 = 0xC0272A72L;
static uint8_t g_4 = 0x1EL;
static uint64_t g_26 = 9UL;
static uint16_t g_32 = 0x0372L;
static int32_t g_41[4] = {0xA65C8BB6L, 0xA65C8BB6L, 0xA65C8BB6L, 0xA65C8BB6L};
static int32_t *volatile g_40 = &g_41[3];
static int32_t *volatile g_43[4][3] = {{&g_41[0], &g_41[0], (void *)0}, {&g_41[2], (void *)0, (void *)0}, {(void *)0, &g_41[2], &g_41[2]}, {&g_41[2], &g_41[2], &g_41[2]}};
static struct S0 g_48 = {0x9564FCBDL, 2L, 4L, 0x9BE308DDL, 18446744073709551608UL};
static struct S0 *g_47 = &g_48;

static int8_t func_1(void);
static uint16_t func_14(const int8_t p_15, uint8_t *p_16, int16_t p_17);

static int8_t func_1(void) {
  uint8_t *l_3[5][3][1] = {{{&g_4}, {&g_4}, {&g_4}}, {{&g_4}, {&g_4}, {&g_4}}, {{&g_4}, {&g_4}, {&g_4}}, {{&g_4}, {&g_4}, {&g_4}}, {{&g_4}, {&g_4}, {&g_4}}};
  int32_t l_5[4] = {0L, 0L, 0L, 0L};
  int32_t l_6 = 1L;
  int i, j, k;
lbl_45:
  if ((l_6 ^= ((l_5[3] = g_2), 1L))) {
    uint8_t *l_9 = (void *)0;
    const int32_t l_24 = 2L;
    uint64_t *l_25[5] = {&g_26, &g_26, &g_26, &g_26, &g_26};
    uint32_t l_27 = 0xC8A0C090L;
    int32_t *l_35 = &l_5[3];
    int32_t *l_36 = &l_6;
    int i;
    (*l_36) = (safe_mod_func_int64_t_s_s((((void *)0 != l_9) >= ((0x4FL <= (safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((*l_35) = (7L & ((9UL & func_14(((safe_rshift_func_uint8_t_u_s(l_6, 2)) < (safe_add_func_int16_t_s_s(((l_5[3] = (l_5[0] ^ (((((((safe_rshift_func_uint8_t_u_u(((-8L) | (g_4 > l_5[2])), 0)) == l_24), l_9) != (void *)0) < g_2) <= g_2) && g_4))) <= l_27), g_26))), &g_4, g_26)) & 6UL))), g_2)), g_2))) ^ l_6)), g_4));
  } else {
    uint8_t *l_39[3][4][4];
    int i, j, k;
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++)
          l_39[i][j][k] = &g_4;
      }
    }
    for (g_32 = 0; (g_32 != 7); g_32 = safe_add_func_uint64_t_u_u(g_32, 7)) {
      (*g_40) |= ((l_39[2][1][1] != (void *)0) < g_2);
    }
  }
  for (g_4 = 0; (g_4 <= 0); g_4 += 1) {
    int32_t l_42[1];
    int32_t *l_44 = &l_5[3];
    struct S0 *l_46[1];
    int i;
    for (i = 0; i < 1; i++)
      l_42[i] = 0x7DC46221L;
    for (i = 0; i < 1; i++)
      l_46[i] = (void *)0;
    l_6 = l_5[2];
    (*l_44) |= l_42[0];
    for (l_6 = 0; (l_6 >= 0); l_6 -= 1) {
      for (g_32 = 0; (g_32 <= 0); g_32 += 1) {
        if (l_6)
          goto lbl_45;
      }
      for (g_2 = 0; (g_2 >= 0); g_2 -= 1) {
        g_47 = l_46[0];
        (*l_44) &= (5L <= (+0x6D727936L));
      }
    }
  }
  return g_48.f3;
}

static uint16_t func_14(const int8_t p_15, uint8_t *p_16, int16_t p_17) {
  int32_t *l_31[4];
  int i;
  for (i = 0; i < 4; i++)
    l_31[i] = (void *)0;
  for (p_17 = 29; (p_17 == 7); p_17 = safe_sub_func_int8_t_s_s(p_17, 1)) {
    int8_t l_30 = 0x8EL;
    if (l_30)
      break;
  }
  --g_32;
  return g_4;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_32, "g_32", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_41[i], "g_41[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
  transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
  transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
  transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
  transparent_crc(g_48.f4, "g_48.f4", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
