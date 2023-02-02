// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_4 = 1L;
static int16_t g_15 = 0x7863L;
static uint8_t g_16 = 4UL;
static int32_t *g_24 = &g_4;
static int32_t *volatile *volatile g_26 = (void *)0;
static uint16_t g_29[3] = {0x1CC0L, 0x1CC0L, 0x1CC0L};
static int32_t g_33 = 0x67DCC359L;
static int32_t *g_32[5] = {&g_33, &g_33, &g_33, &g_33, &g_33};

static uint32_t func_1(void);
static int32_t func_19(int32_t p_20, int32_t *p_21);

static uint32_t func_1(void) {
  int64_t l_2[2];
  int32_t *l_3 = &g_4;
  int32_t *l_5 = &g_4;
  int32_t *l_6 = &g_4;
  int32_t *l_7 = &g_4;
  int32_t *l_8 = &g_4;
  int32_t *l_9 = (void *)0;
  int32_t l_10 = 0x921E124DL;
  int32_t *l_11 = &l_10;
  int32_t *l_12 = (void *)0;
  int32_t *l_13 = &l_10;
  int32_t *l_14[3];
  int32_t **l_22 = &l_7;
  int32_t **l_23[3][4] = {{&l_9, &l_5, &l_5, &l_9}, {&l_5, &l_9, &l_5, &l_5}, {&l_9, &l_9, &l_6, &l_9}};
  int32_t *l_25 = &g_4;
  int16_t *l_27 = &g_15;
  uint16_t *l_28 = &g_29[2];
  int i, j;
  for (i = 0; i < 2; i++)
    l_2[i] = 1L;
  for (i = 0; i < 3; i++)
    l_14[i] = &l_10;
  ++g_16;
  (*l_11) = func_19((g_16, ((*l_5) = (((g_24 = ((*l_22) = &g_4)) != (l_25 = &g_4)) > ((((0xCD84L != ((*l_27) ^= (&l_5 == g_26))) > ((*l_28)++)), &g_4) != (void *)0)))), g_32[3]);
  return g_16;
}

static int32_t func_19(int32_t p_20, int32_t *p_21) {
  int64_t l_34 = 0xC35CF455DBFE6B87LL;
  (*p_21) &= l_34;
  return (*p_21);
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_15, "g_15", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_29[i], "g_29[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_33, "g_33", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
