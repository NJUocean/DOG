// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 1L;
static const volatile int32_t *g_10 = (void *)0;
static int32_t g_14 = 0xED3C15D0L;
static volatile int64_t g_16 = 0xA8ED40A16501874DLL;
static int32_t g_17 = 0xFD06BDE6L;
static uint8_t g_18 = 0xE7L;
static int32_t **volatile g_21 = (void *)0;

static int16_t func_1(void);
static int32_t *func_2(int32_t p_3);

static int16_t func_1(void) {
  int32_t *l_13 = &g_14;
  int32_t *l_23 = (void *)0;
  int32_t **l_22 = &l_23;
  (*l_22) = (l_13 = func_2((g_4, (safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((g_10 == (void *)0), (safe_rshift_func_int8_t_s_s((g_10 != l_13), ((*l_13) != 0x87A7525DL))))) < 0x91509CF13E13A6C9LL), 61)))))));
  return g_4;
}

static int32_t *func_2(int32_t p_3) {
  int32_t *l_15[2];
  int i;
  for (i = 0; i < 2; i++)
    l_15[i] = &g_14;
  g_18++;
  return l_15[1];
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
