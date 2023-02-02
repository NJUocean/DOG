// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S2 {
  int32_t f0;
};

static int32_t g_7 = 0xD7C1188EL;
static int32_t *g_6 = &g_7;
static volatile struct S2 g_9 = {-3L};
static uint64_t g_20 = 0x9BCA7B5CF1C946B4LL;
static uint64_t g_22 = 0UL;
static uint64_t *g_21 = &g_22;
static int32_t **volatile g_24 = &g_6;

static uint64_t func_1(void);
static int32_t *func_2(int32_t *p_3, int32_t *p_4, int32_t *p_5);

static uint64_t func_1(void) {
  int32_t *l_8 = (void *)0;
  (*g_24) = func_2(g_6, &g_7, l_8);
  return (*g_21);
}

static int32_t *func_2(int32_t *p_3, int32_t *p_4, int32_t *p_5) {
  uint32_t l_12 = 0xC3203BD6L;
  int32_t *l_15 = (void *)0;
  int32_t **l_16 = &g_6;
  uint64_t *l_19 = &g_20;
  uint64_t **l_23 = &g_21;
  g_9 = g_9;
  (*p_3) = (safe_add_func_uint32_t_u_u(7UL, ((l_12, ((safe_lshift_func_int8_t_s_s((l_15 != ((*l_16) = &g_7)), (safe_mod_func_uint64_t_u_u(((*l_19) = g_9.f0), g_7)))) < (((*l_23) = g_21) != (void *)0))) || ((void *)0 == &l_15))));
  return p_3;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_22, "g_22", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
