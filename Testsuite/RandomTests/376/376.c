// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S2 {
  volatile signed f0 : 23;
  unsigned f1 : 18;
  volatile int64_t f2;
};
#pragma pack(pop)

static struct S2 g_8 = {-2847, 287, 0x11D962EE6D058A83LL};
static struct S2 *g_7[3] = {&g_8, &g_8, &g_8};
static int32_t g_16 = 0x858905B8L;
static int32_t *g_15 = &g_16;
static int32_t **volatile g_14[4] = {&g_15, &g_15, &g_15, &g_15};
static struct S2 **volatile g_18 = &g_7[2];

static uint32_t func_1(void);
static struct S2 *const func_2(struct S2 *p_3, uint32_t p_4, struct S2 *p_5, uint32_t p_6);

static uint32_t func_1(void) {
  (*g_18) = func_2(g_7[2], g_8.f2, g_7[2], g_8.f1);
  return g_8.f0;
}

static struct S2 *const func_2(struct S2 *p_3, uint32_t p_4, struct S2 *p_5, uint32_t p_6) {
  int32_t *l_9 = (void *)0;
  int32_t **l_10 = (void *)0;
  int32_t **l_11 = (void *)0;
  int32_t **l_12 = (void *)0;
  int32_t **l_13 = &l_9;
  int32_t **l_17 = &g_15;
  (*l_17) = ((*l_13) = l_9);
  return p_5;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
  transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
  transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
