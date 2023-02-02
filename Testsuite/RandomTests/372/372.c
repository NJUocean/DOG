// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  uint64_t f0;
  const unsigned f1 : 15;
  const signed f2 : 7;
  const uint16_t f3;
};
#pragma pack(pop)

static int32_t g_3[5][5] = {{0x121AC488L, 0L, 0x121AC488L, 0x121AC488L, 0L}, {(-9L), (-1L), (-1L), (-9L), (-1L)}, {0L, 0L, 0xD94B4B13L, 0L, 0L}, {(-1L), (-9L), (-1L), (-1L), (-9L)}, {0L, 0x121AC488L, 0x121AC488L, 0L, 0x121AC488L}};
static uint64_t g_17 = 0x373A4C924B541145LL;
static int32_t g_25 = 0x149CFF29L;
static int64_t g_28 = 0xA6F63EEDA781B5F7LL;
static uint64_t *g_40[4][3] = {{&g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17}, {&g_17, &g_17, &g_17}};
static struct S0 g_41 = {18446744073709551615UL, 147, 7, 1UL};
static volatile uint8_t g_43 = 0xF3L;
static volatile uint8_t *volatile g_42 = &g_43;
static int8_t g_45[3][5] = {{(-5L), 0x7AL, (-5L), 0x7AL, (-5L)}, {0x1DL, 0x1DL, 0x1DL, 0x1DL, 0x1DL}, {(-5L), 0x7AL, (-5L), 0x7AL, (-5L)}};
static uint64_t g_46 = 0xE57C1F20CF68020CLL;
static uint16_t g_50 = 8UL;
static int64_t *g_77[1][5][1] = {{{&g_28}, {&g_28}, {&g_28}, {&g_28}, {&g_28}}};
static int64_t **g_76 = &g_77[0][2][0];
static int32_t g_86 = 8L;
static volatile int16_t g_88 = 0xA743L;
static volatile int64_t g_89 = 8L;
static uint16_t g_90 = 0x4830L;
static const volatile int32_t g_96 = 1L;
static uint8_t g_99 = 1UL;

static uint32_t func_1(void);
static uint16_t func_7(uint32_t p_8, const int32_t p_9, const int64_t p_10, uint16_t p_11);

static uint32_t func_1(void) {
  uint64_t l_2[4];
  uint16_t *l_53 = &g_50;
  int32_t l_87 = 0x2F772B8AL;
  int32_t *l_119[3];
  int16_t l_120[2];
  int16_t l_121 = 0xDF1CL;
  int8_t l_122[3][5][1] = {{{0x0DL}, {0x6FL}, {0x0DL}, {0x6FL}, {0x0DL}}, {{0x6FL}, {0x0DL}, {0x6FL}, {0x0DL}, {0x6FL}}, {{0x0DL}, {0x6FL}, {0x0DL}, {0x6FL}, {0x0DL}}};
  int32_t l_123 = 0x211D25EBL;
  uint32_t l_124 = 0x5E4FF753L;
  int i, j, k;
  for (i = 0; i < 4; i++)
    l_2[i] = 0x108F8256A9EF72D4LL;
  for (i = 0; i < 3; i++)
    l_119[i] = &g_25;
  for (i = 0; i < 2; i++)
    l_120[i] = 0x581DL;
  for (g_3[2][2] = 3; (g_3[2][2] >= 0); g_3[2][2] -= 1) {
    uint64_t *l_16[1];
    int32_t l_18[2][4] = {{0x360DE574L, 0x360DE574L, 0x360DE574L, 0x360DE574L}, {0x360DE574L, 0x360DE574L, 0x360DE574L, 0x360DE574L}};
    int32_t *l_24 = &g_25;
    uint8_t *l_26 = (void *)0;
    uint8_t *l_27 = (void *)0;
    int64_t *l_75[1];
    int64_t **l_74 = &l_75[0];
    struct S0 l_97 = {0x5366612900EB00D6LL, 137, -8, 5UL};
    int16_t l_105 = (-1L);
    int32_t l_117[1];
    int i, j;
    for (i = 0; i < 1; i++)
      l_16[i] = &g_17;
    for (i = 0; i < 1; i++)
      l_75[i] = &g_28;
    for (i = 0; i < 1; i++)
      l_117[i] = 0L;
  }
  --l_124;
  return g_41.f3;
}

static uint16_t func_7(uint32_t p_8, const int32_t p_9, const int64_t p_10, uint16_t p_11) { return g_3[2][2]; }

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_17, "g_17", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_28, "g_28", print_hash_value);
  transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
  transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
  transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
  transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
  transparent_crc(g_43, "g_43", print_hash_value);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      transparent_crc(g_45[i][j], "g_45[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_50, "g_50", print_hash_value);
  transparent_crc(g_86, "g_86", print_hash_value);
  transparent_crc(g_88, "g_88", print_hash_value);
  transparent_crc(g_89, "g_89", print_hash_value);
  transparent_crc(g_90, "g_90", print_hash_value);
  transparent_crc(g_96, "g_96", print_hash_value);
  transparent_crc(g_99, "g_99", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
