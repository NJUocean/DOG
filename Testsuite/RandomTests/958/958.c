// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile unsigned f0 : 20;
  unsigned f1 : 25;
  signed f2 : 23;
};
#pragma pack(pop)

struct S2 {
  volatile struct S0 f0;
  signed f1 : 10;
  volatile unsigned : 0;
};

static int32_t g_2 = 0xF07B4BC6L;
static volatile int32_t g_5 = 5L;
static int32_t g_6 = (-10L);
static int32_t *volatile g_10[5][2] = {{(void *)0, &g_6}, {&g_6, (void *)0}, {&g_6, &g_6}, {&g_6, (void *)0}, {&g_6, &g_6}};
static int32_t g_12[3] = {0x6E229EDCL, 0x6E229EDCL, 0x6E229EDCL};
static int32_t *const volatile g_11 = &g_12[2];
static struct S2 g_13 = {{532, 230, -1414}, 28};
static struct S0 g_18 = {214, 1618, 423};
static struct S2 g_20 = {{278, 3354, 1305}, 9};

static struct S2 func_1(void);

static struct S2 func_1(void) {
  int32_t *l_19 = &g_12[2];
  for (g_2 = 0; (g_2 < 12); ++g_2) {
    for (g_6 = 0; (g_6 == 11); ++g_6) {
      int8_t l_9 = (-8L);
      (*g_11) = l_9;
      for (l_9 = 2; (l_9 >= 0); l_9 -= 1) {
        return g_13;
      }
    }
    for (g_6 = 28; (g_6 <= (-7)); --g_6) {
      struct S0 *l_17 = &g_18;
      struct S0 **l_16 = &l_17;
      (*l_16) = (void *)0;
    }
  }
  (*l_19) = 0x4EDC0223L;
  return g_20;
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_5, "g_5", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_12[i], "g_12[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_13.f0.f0, "g_13.f0.f0", print_hash_value);
  transparent_crc(g_13.f0.f1, "g_13.f0.f1", print_hash_value);
  transparent_crc(g_13.f0.f2, "g_13.f0.f2", print_hash_value);
  transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
  transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
  transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
  transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
  transparent_crc(g_20.f0.f0, "g_20.f0.f0", print_hash_value);
  transparent_crc(g_20.f0.f1, "g_20.f0.f1", print_hash_value);
  transparent_crc(g_20.f0.f2, "g_20.f0.f2", print_hash_value);
  transparent_crc(g_20.f1, "g_20.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
