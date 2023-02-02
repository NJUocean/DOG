// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_6[5] = {0x9DD952EAL, 0x9DD952EAL, 0x9DD952EAL, 0x9DD952EAL, 0x9DD952EAL};
static volatile int32_t *g_11 = &g_6[2];
static volatile int32_t **volatile g_10[2] = {&g_11, &g_11};
static volatile int32_t **volatile g_12[2] = {&g_11, &g_11};
static int32_t g_17 = 0xD46758E3L;
static uint64_t g_19 = 0UL;

static uint32_t func_1(void);
static int64_t func_2(int32_t p_3, int32_t p_4);

static uint32_t func_1(void) {
  const uint16_t l_5 = 0x4304L;
  uint32_t l_9 = 0x79253A34L;
  int32_t *l_18[2][5] = {{&g_17, &g_17, &g_17, &g_17, &g_17}, {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}};
  uint8_t l_20 = 0x23L;
  int i, j;
  g_19 |= (((func_2((((l_5, g_6[2]) > (safe_mul_func_int32_t_s_s(2L, l_5))) || g_6[3]), l_9) < (l_5 >= ((safe_rshift_func_uint16_t_u_s(l_5, l_5)) || g_17))) == (-1L)) || g_6[2]);
  ++l_20;
  return g_19;
}

static int64_t func_2(int32_t p_3, int32_t p_4) {
  volatile int32_t **l_13 = (void *)0;
  volatile int32_t *l_14 = &g_6[2];
  l_14 = &g_6[3];
  return g_6[4];
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_19, "g_19", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
