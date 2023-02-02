// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static const volatile uint8_t g_4 = 255UL;
static int32_t g_6 = (-1L);
static int32_t g_9 = 0x85B7F37CL;
static int32_t g_16 = 0xDEB77278L;
static int32_t *volatile g_15 = &g_16;
static int32_t *volatile g_17 = &g_16;

static int32_t func_1(void);

static int32_t func_1(void) {
  int64_t l_18[1];
  int i;
  for (i = 0; i < 1; i++)
    l_18[i] = (-1L);
  if ((safe_rshift_func_uint16_t_u_s(0x8E56L, g_4))) {
    uint8_t l_5 = 0x99L;
    return l_5;
  } else {
    for (g_6 = 0; (g_6 <= (-21)); g_6 = safe_sub_func_uint32_t_u_u(g_6, 1)) {
      int8_t l_14 = 0x4FL;
      for (g_9 = 0; (g_9 < (-26)); g_9 = safe_sub_func_uint64_t_u_u(g_9, 7)) {
        (*g_15) |= (safe_mod_func_int64_t_s_s(7L, l_14));
      }
    }
    (*g_17) |= ((void *)0 == &g_6);
  }
  return l_18[0];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
