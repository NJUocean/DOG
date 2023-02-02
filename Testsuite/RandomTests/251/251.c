// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  volatile int64_t f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
  int32_t f0;
  struct S0 f1;
  const volatile uint64_t f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
  unsigned f0 : 18;
};
#pragma pack(pop)

static volatile int32_t g_3 = 8L;
static int32_t g_4[4] = {0xA831D26EL, 0xA831D26EL, 0xA831D26EL, 0xA831D26EL};
static volatile int32_t g_5[4] = {(-6L), (-6L), (-6L), (-6L)};
static struct S1 g_6 = {7L, {7L}, 0xDBBE56890C544087LL};

static struct S1 func_1(void);

static struct S1 func_1(void) {
  struct S2 l_2[4][1][3] = {{{{9}, {109}, {109}}}, {{{9}, {109}, {109}}}, {{{9}, {109}, {109}}}, {{{9}, {109}, {109}}}};
  int i, j, k;
  for (g_3 = 0; g_3 < 4; g_3 += 1) {
    for (g_4[2] = 0; g_4[2] < 1; g_4[2] += 1) {
      for (g_5[0] = 0; g_5[0] < 3; g_5[0] += 1) {
        struct S2 tmp = {167};
        l_2[g_3][g_4[2]][g_5[0]] = tmp;
      }
    }
  }
  return g_6;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_4[i], "g_4[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  for (i = 0; i < 4; i++) {
    transparent_crc(g_5[i], "g_5[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
  transparent_crc(g_6.f1.f0, "g_6.f1.f0", print_hash_value);
  transparent_crc(g_6.f2, "g_6.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
