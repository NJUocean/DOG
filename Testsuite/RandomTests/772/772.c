// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  const volatile int32_t f0;
  volatile uint16_t f1;
};
#pragma pack(pop)

union U4 {
  const struct S0 f0;
  uint32_t f1;
  volatile uint16_t f2;
};

static volatile union U4 g_8 = {{1L, 0x7257L}};
static int32_t g_18 = (-9L);
static int32_t *g_19 = &g_18;
static int16_t g_28 = (-1L);
static int32_t g_30 = (-1L);
static uint8_t g_39 = 255UL;

static struct S0 func_1(void);
static int32_t *func_2(int8_t p_3, uint32_t p_4, int32_t *p_5);

static struct S0 func_1(void) {
  int32_t l_16 = 0x5EC62BB2L;
  int32_t *l_17 = &g_18;
  int32_t *l_21[4] = {&g_18, &g_18, &g_18, &g_18};
  int32_t **l_20 = &l_21[0];
  int16_t *l_24 = (void *)0;
  int16_t *l_25 = (void *)0;
  int16_t *l_26 = (void *)0;
  int16_t *l_27 = &g_28;
  int8_t *l_29 = (void *)0;
  uint8_t *l_42 = &g_39;
  int i;
  (*l_20) = func_2((g_30 = (safe_rshift_func_uint32_t_u_s((g_8, (((safe_unary_minus_func_uint8_t_u(g_8.f0.f0)), g_8.f0.f0), (~((safe_mul_func_int32_t_s_s((((*l_27) = (g_8.f0.f1 >= (safe_add_func_uint8_t_u_u(((!(255UL ^ l_16)), ((((g_19 = l_17) == ((*l_20) = l_17)) >= (safe_add_func_int64_t_s_s((*l_17), 6L))) > g_18)), (*l_17))))), 0xBC254E7FL), g_18)) > (*l_17))))), g_18))), g_18, &g_18);
  for (g_18 = 10; (g_18 != (-14)); g_18 = safe_sub_func_uint32_t_u_u(g_18, 6)) {
    uint8_t *l_38 = &g_39;
    int32_t l_40[4][3][4] = {{{0xE3E4F6F4L, 0xE3E4F6F4L, (-10L), 1L}, {0x8D9A65C8L, 0L, 0x8D9A65C8L, (-10L)}, {0x8D9A65C8L, (-10L), (-10L), 0x8D9A65C8L}}, {{0xE3E4F6F4L, (-10L), 1L, (-10L)}, {(-10L), 0L, 1L, 1L}, {0xE3E4F6F4L, 0xE3E4F6F4L, (-10L), 1L}}, {{0x8D9A65C8L, 0L, 0x8D9A65C8L, (-10L)}, {0x8D9A65C8L, (-10L), (-10L), 0x8D9A65C8L}, {0xE3E4F6F4L, (-10L), 1L, (-10L)}}, {{(-10L), 0L, 1L, 1L}, {0xE3E4F6F4L, 0xE3E4F6F4L, 0x8D9A65C8L, 0L}, {1L, 0xE3E4F6F4L, 1L, 0x8D9A65C8L}}};
    uint8_t **l_41[5];
    int32_t **l_43 = &l_21[0];
    int8_t l_44[3];
    int i, j, k;
    for (i = 0; i < 5; i++)
      l_41[i] = &l_38;
    for (i = 0; i < 3; i++)
      l_44[i] = 0x3DL;
    l_40[1][1][2] = (safe_rshift_func_int64_t_s_u((((*l_38) = 0x5AL), (&g_39 != (void *)0)), 33));
    l_44[0] ^= ((((l_42 = &g_39) == (void *)0) && g_30) && (g_30 ^ ((l_43 != (void *)0) <= (*g_19))));
  }
  return g_8.f0;
}

static int32_t *func_2(int8_t p_3, uint32_t p_4, int32_t *p_5) {
  uint8_t l_31[2][5] = {{255UL, 0x0DL, 0x0DL, 255UL, 1UL}, {255UL, 0x0DL, 0x0DL, 255UL, 1UL}};
  int i, j;
  --l_31[1][1];
  return &g_18;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8.f0.f0, "g_8.f0.f0", print_hash_value);
  transparent_crc(g_8.f0.f1, "g_8.f0.f1", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_39, "g_39", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
