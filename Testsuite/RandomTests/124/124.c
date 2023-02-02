// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  const signed f0 : 9;
  const signed f1 : 26;
};
#pragma pack(pop)

static int32_t g_7 = 0L;
static int32_t *g_6 = &g_7;
static const int32_t *g_11[2][2][4] = {{{&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7}}};
static const int32_t **volatile g_10 = &g_11[1][1][3];

static uint8_t func_1(void);
static const int32_t *func_2(uint32_t p_3, struct S0 p_4, int32_t *p_5);

static uint8_t func_1(void) {
  struct S0 l_8[3] = {{8, -5941}, {8, -5941}, {8, -5941}};
  int32_t *l_9 = &g_7;
  int i;
  (*g_10) = func_2((g_6 == &g_7), l_8[1], l_9);
  return (*l_9);
}

static const int32_t *func_2(uint32_t p_3, struct S0 p_4, int32_t *p_5) { return p_5; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
