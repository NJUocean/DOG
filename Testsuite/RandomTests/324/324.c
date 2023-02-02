// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_2 = 7L;
static uint16_t g_14 = 1UL;
static volatile uint16_t g_17 = 0x86BAL;
static volatile uint16_t *g_16[3][5] = {{&g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17, &g_17, &g_17}};
static int32_t *g_19 = &g_2;
static int32_t **volatile g_18 = &g_19;

static const uint16_t func_1(void);
static int32_t *func_5(int32_t *p_6, const uint16_t p_7, int64_t p_8, int32_t *p_9, uint16_t p_10);

static const uint16_t func_1(void) {
  int32_t *l_15 = &g_2;
  for (g_2 = 22; (g_2 <= (-10)); --g_2) {
    uint16_t *l_12 = (void *)0;
    uint16_t *l_13 = &g_14;
    (*g_18) = func_5(&g_2, ((*l_13) &= (+0xE6L)), g_2, l_15, (g_16[0][2] == l_12));
  }
  return (*l_15);
}

static int32_t *func_5(int32_t *p_6, const uint16_t p_7, int64_t p_8, int32_t *p_9, uint16_t p_10) { return p_9; }

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_17, "g_17", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
