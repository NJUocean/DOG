// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile uint32_t f0;
};
#pragma pack(pop)

union U1 {
  uint32_t f0;
  int32_t f1;
  uint32_t f2;
  uint32_t f3;
};

static int32_t g_9 = 0xD49FCFBCL;
static uint32_t g_18 = 0xBDA18461L;
static uint32_t g_20 = 1UL;
static uint32_t g_23 = 1UL;
static int32_t g_27 = 0xC3FA3C9EL;
static int32_t g_28 = 2L;
static const struct S0 g_29 = {4294967286UL};
static struct S0 g_30 = {4294967295UL};
static int32_t *volatile g_31 = (void *)0;

static uint64_t func_1(void);
static uint8_t func_2(int32_t p_3);

static uint64_t func_1(void) {
  int16_t l_4 = 0x7ADFL;
  int32_t *l_32 = &g_27;
  (*l_32) = (func_2(l_4) || (&g_27 == (void *)0));
  return g_20;
}

static uint8_t func_2(int32_t p_3) {
  const uint32_t l_16 = 0UL;
  uint32_t *l_17 = &g_18;
  uint32_t *l_19[2];
  int32_t l_21 = 7L;
  const union U1 l_22 = {0UL};
  int32_t l_24 = 0x0004DDC8L;
  int32_t l_25 = 0xF78B15B4L;
  int32_t *l_26 = &g_27;
  int i;
  for (i = 0; i < 2; i++)
    l_19[i] = &g_20;
  g_28 = ((*l_26) = ((safe_lshift_func_uint16_t_u_s(((((safe_div_func_int32_t_s_s(g_9, (l_25 = (safe_rshift_func_uint8_t_u_s((l_24 = ((p_3 < ((g_23 = ((safe_lshift_func_int32_t_s_u(g_9, (l_21 = ((*l_17) = (safe_sub_func_int32_t_s_s((-1L), l_16)))))) <= (l_22, 0x86L))) == (&g_20 == l_17))) > g_9)), l_25))))) | l_16) <= g_20) | g_9), l_22.f0)) || l_24));
  g_30 = g_29;
  return p_3;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
  transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
