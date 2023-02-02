// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  unsigned f0 : 1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
  int32_t f0;
  volatile uint32_t f1;
  const int16_t f2;
};
#pragma pack(pop)

static int32_t g_2 = 1L;
static int32_t g_7 = (-4L);
static struct S0 g_15 = {0};
static struct S1 g_20 = {-9L, 0x2DDB74A7L, 0xA6E4L};

static struct S1 func_1(void);
static uint16_t func_10(struct S0 p_11, struct S0 p_12, int32_t p_13, int8_t p_14);

static struct S1 func_1(void) {
  for (g_2 = (-28); (g_2 > (-13)); g_2 = safe_add_func_uint32_t_u_u(g_2, 7)) {
    if (g_2)
      break;
  }
  for (g_2 = (-19); (g_2 >= (-7)); g_2 = safe_add_func_uint8_t_u_u(g_2, 5)) {
    struct S0 l_17[2] = {{0}, {0}};
    int i;
    for (g_7 = 0; (g_7 >= (-26)); g_7--) {
      struct S0 *l_16 = &g_15;
      int32_t l_18[3][1][2] = {{{0L, 0L}}, {{0L, 0L}}, {{0L, 0L}}};
      int i, j, k;
      if ((func_10(((*l_16) = g_15), l_17[0], g_2, l_18[1][0][0]), g_15.f0)) {
        if (g_7)
          break;
      } else {
        struct S0 l_19 = {0};
        (*l_16) = l_19;
      }
    }
  }
  return g_20;
}

static uint16_t func_10(struct S0 p_11, struct S0 p_12, int32_t p_13, int8_t p_14) { return g_15.f0; }

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
  transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
  transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
  transparent_crc(g_20.f2, "g_20.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
