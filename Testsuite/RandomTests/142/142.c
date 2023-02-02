// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

#pragma pack(push)
#pragma pack(1)
struct S0 {
  volatile signed f0 : 4;
  unsigned f1 : 9;
};
#pragma pack(pop)

static int32_t g_2 = 9L;
static volatile int32_t g_5[5][4][5] = {{{0xA8FECF79L, (-1L), 0xCABFC393L, (-1L), (-2L)}, {0xA8FECF79L, 0x1F07B4BCL, (-1L), 6L, 1L}, {0xA8FECF79L, 0xD50F82BAL, 0x3EC752F6L, 0x3EC752F6L, 0xD50F82BAL}, {0xA8FECF79L, 1L, 6L, (-1L), 0x1F07B4BCL}},
                                        {{0xA8FECF79L, (-2L), (-1L), 0xCABFC393L, (-1L)}, {0xA8FECF79L, (-1L), 0xCABFC393L, (-1L), (-2L)}, {0xA8FECF79L, 0x1F07B4BCL, (-1L), 6L, 1L}, {0xA8FECF79L, 0xD50F82BAL, 0x3EC752F6L, 0x3EC752F6L, 0xD50F82BAL}},
                                        {{0xA8FECF79L, 1L, 6L, (-1L), 0x1F07B4BCL}, {0xA8FECF79L, (-1L), 0x1F07B4BCL, 1L, 0xAFE8B0D1L}, {0L, 0xAFE8B0D1L, 1L, 0x1F07B4BCL, (-1L)}, {0L, (-1L), (-1L), (-2L), (-1L)}},
                                        {{0L, 0xF6E229EDL, 0xD50F82BAL, 0xD50F82BAL, 0xF6E229EDL}, {0L, (-1L), (-2L), (-1L), (-1L)}, {0L, (-1L), 0x1F07B4BCL, 1L, 0xAFE8B0D1L}, {0L, 0xAFE8B0D1L, 1L, 0x1F07B4BCL, (-1L)}},
                                        {{0L, (-1L), (-1L), (-2L), (-1L)}, {0L, 0xF6E229EDL, 0xD50F82BAL, 0xD50F82BAL, 0xF6E229EDL}, {0L, (-1L), (-2L), (-1L), (-1L)}, {0L, (-1L), 0x1F07B4BCL, 1L, 0xAFE8B0D1L}}};
static int32_t g_6 = (-9L);
static volatile int32_t g_9[4][1] = {{0x6DAD816FL}, {(-4L)}, {0x6DAD816FL}, {(-4L)}};
static int32_t g_10 = 0x7863718BL;
static uint16_t g_20 = 0x4668L;
static uint16_t g_23 = 0x9552L;
static uint16_t *const g_22 = &g_23;
static int32_t g_25[3] = {0x1CAF1E2CL, 0x1CAF1E2CL, 0x1CAF1E2CL};
static int32_t g_27 = 0L;
static struct S0 g_28 = {-1, 15};
static struct S0 *volatile g_29[4][1][1] = {{{&g_28}}, {{&g_28}}, {{&g_28}}, {{&g_28}}};
static struct S0 *volatile g_30 = &g_28;

static int64_t func_1(void);
static struct S0 func_11(const uint32_t p_12, uint32_t p_13, uint8_t p_14);

static int64_t func_1(void) {
  int16_t l_31 = 3L;
  int32_t l_32 = (-1L);
  for (g_2 = (-26); (g_2 == 15); ++g_2) {
    int32_t *l_33 = &g_25[1];
    int32_t *l_34 = (void *)0;
    int32_t *l_35 = &g_25[1];
    int32_t *l_36 = &g_10;
    int32_t *l_37 = (void *)0;
    int32_t *l_38 = &g_25[0];
    int32_t l_39 = 0xE76DCB0CL;
    int32_t *l_40 = &g_25[0];
    int32_t *l_41[4] = {(void *)0, (void *)0, (void *)0, (void *)0};
    uint16_t l_42[1][5] = {{0xC6C2L, 0xC6C2L, 0xC6C2L, 0xC6C2L, 0xC6C2L}};
    int i, j;
    for (g_6 = 0; (g_6 == 6); g_6 = safe_add_func_uint64_t_u_u(g_6, 9)) {
      for (g_10 = 3; (g_10 >= 0); g_10 -= 1) {
        int i, j, k;
        (*g_30) = func_11(g_5[g_10][g_10][(g_10 + 1)], g_10, g_2);
      }
    }
    ++l_42[0][0];
  }
  return g_28.f0;
}

static struct S0 func_11(const uint32_t p_12, uint32_t p_13, uint8_t p_14) {
  uint16_t *l_19 = &g_20;
  int32_t l_21 = 0L;
  int32_t *l_24 = &g_25[1];
  int32_t *l_26 = &g_27;
  (*l_26) ^= ((*l_24) ^= ((g_9[1][0] == (p_14 | (safe_sub_func_int32_t_s_s(((g_6 <= ((((*l_19) = g_6) & g_10) >= ((l_21, g_22) == l_19))), g_23), 4294967291UL)))) >= g_6));
  return g_28;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_6, "g_6", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 1; j++) {
      transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_23, "g_23", print_hash_value);
  for (i = 0; i < 3; i++) {
    transparent_crc(g_25[i], "g_25[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
  transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
