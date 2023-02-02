// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  unsigned f0 : 9;
  volatile unsigned f1 : 9;
  signed f2 : 24;
  const int32_t f3;
  signed f4 : 5;
};

static int32_t g_7 = 8L;
static struct S1 g_8 = {15, 20, 2554, -9L, -2};
static int16_t g_11 = 1L;
static uint32_t g_14 = 3UL;
static int32_t g_16 = 9L;
static int32_t g_18 = 1L;
static volatile uint64_t g_31 = 18446744073709551607UL;

static int64_t func_1(void);
static int32_t func_2(int8_t p_3);

static int64_t func_1(void) {
  uint64_t l_4 = 0xD19AC196A162C9CCLL;
  int32_t l_19 = (-8L);
  int32_t l_22[1];
  int16_t l_30 = 0x4E62L;
  int32_t *l_34 = &l_22[0];
  int i;
  for (i = 0; i < 1; i++)
    l_22[i] = 6L;
  if (func_2(l_4)) {
    int32_t l_20 = 0x74B6046EL;
    int32_t *l_21 = &l_19;
    int32_t *l_23 = &g_16;
    int32_t *l_24 = &l_22[0];
    int32_t *l_25 = &g_7;
    int32_t *l_26 = (void *)0;
    int32_t *l_27 = (void *)0;
    int32_t *l_28 = &g_7;
    int32_t *l_29[3];
    int i;
    for (i = 0; i < 3; i++)
      l_29[i] = (void *)0;
    ++g_31;
  } else {
    int32_t *l_35 = &g_7;
    int32_t **l_36 = &l_34;
    l_34 = &g_16;
    (*l_36) = l_35;
  }
  (*l_34) = (&g_11 != &g_11);
  return g_8.f2;
}

static int32_t func_2(int8_t p_3) {
  int16_t *l_9 = (void *)0;
  int16_t *l_10 = &g_11;
  int32_t *l_12 = (void *)0;
  int32_t *l_13 = &g_7;
  int32_t *l_15 = &g_16;
  int32_t *l_17 = &g_18;
  (*l_17) = ((*l_15) = (g_14 &= ((*l_13) = (safe_mod_func_uint16_t_u_u(g_7, (g_8, ((*l_10) = p_3)))))));
  (*l_13) &= (0UL <= 0x1B44ADCA1A1F0506LL);
  return (*l_17);
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
  transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
  transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
  transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
  transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_31, "g_31", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
