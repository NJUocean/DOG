// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

union U2 {
  int16_t f0;
  volatile int16_t f1;
  uint16_t f2;
};

union U4 {
  const signed f0 : 18;
  int32_t f1;
};

static int32_t g_3 = (-1L);
static int32_t g_4 = 0x3989226CL;
static int32_t g_5[5] = {0x26D8D383L, 0x26D8D383L, 0x26D8D383L, 0x26D8D383L, 0x26D8D383L};
static uint64_t g_13[5] = {5UL, 5UL, 5UL, 5UL, 5UL};
static int16_t g_23 = 0L;
static uint16_t g_38 = 65535UL;
static int32_t g_40 = 0x8FE2D584L;
static int32_t *volatile g_39 = &g_40;
static int32_t *g_44 = (void *)0;
static int32_t **volatile g_43 = &g_44;
static int32_t **volatile g_55 = &g_44;
static union U2 g_56 = {-4L};

static union U2 func_1(void);
static int32_t *func_6(uint64_t p_7, int32_t p_8, int16_t p_9, int32_t *const p_10, int32_t p_11);

static union U2 func_1(void) {
  uint8_t l_2[1];
  int i;
  for (i = 0; i < 1; i++)
    l_2[i] = 2UL;
  for (g_3 = 0; (g_3 >= 0); g_3 -= 1) {
    uint32_t l_26 = 4294967289UL;
    for (g_4 = 0; (g_4 <= 0); g_4 += 1) {
      uint8_t l_24 = 249UL;
      int32_t l_25[2];
      int32_t l_27 = 0xE623B26DL;
      int i;
      for (i = 0; i < 2; i++)
        l_25[i] = 1L;
      for (g_5[0] = 0; (g_5[0] >= 0); g_5[0] -= 1) {
        uint64_t *l_12 = &g_13[3];
        int16_t *l_22[2];
        int32_t *const l_28 = &g_4;
        int32_t **l_54 = (void *)0;
        int i;
        for (i = 0; i < 2; i++)
          l_22[i] = &g_23;
        if (l_2[g_4])
          break;
        (*g_55) = func_6(((*l_12)--), (safe_add_func_uint32_t_u_u(((l_24 = (safe_rshift_func_uint32_t_u_u(6UL, 29))) | (0UL != ((l_12 == (l_25[0], (void *)0)) | g_23))), g_5[0])), (l_27 = l_26), l_28, l_26);
      }
    }
  }
  return g_56;
}

static int32_t *func_6(uint64_t p_7, int32_t p_8, int16_t p_9, int32_t *const p_10, int32_t p_11) {
  int32_t *const l_35 = &g_3;
  int32_t l_36 = 0x7A501900L;
  if (g_4) {
    const union U4 l_29 = {-8L};
    uint16_t *l_37 = &g_38;
    int32_t *l_42 = &g_5[0];
    int32_t **l_41 = &l_42;
    (*g_39) = (((0x129EC6EA3D88101ALL && (l_29, (((safe_lshift_func_uint32_t_u_u(g_13[0], 10)) & ((*l_37) ^= ((safe_div_func_uint64_t_u_u((((0L && g_23), (((~((&g_13[3] != &p_7), g_13[3])), l_35) == &g_5[0])) <= 0xAE88L), (-1L))) || l_36))) | 0x7FFFF975L))) | (*l_35)) != (*l_35));
    (*g_43) = ((*l_41) = (void *)0);
  } else {
    int32_t l_46 = 0x561F6604L;
    int32_t *l_47 = &l_36;
    (*l_47) |= (~l_46);
  }
  for (p_7 = 0; (p_7 == 37); p_7++) {
    int32_t *l_52 = &g_40;
    int64_t l_53 = 0xD63CCF75BAE5BD57LL;
    for (p_9 = 13; (p_9 >= (-3)); p_9--) {
      return l_52;
    }
    l_53 &= (*g_39);
  }
  return (*g_43);
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_4, "g_4", print_hash_value);
  for (i = 0; i < 5; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 5; i++) {
    transparent_crc(g_13[i], "g_13[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_38, "g_38", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
