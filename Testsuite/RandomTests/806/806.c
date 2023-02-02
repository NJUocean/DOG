// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S0 {
  int16_t f0;
  const int16_t f1;
};

static volatile int32_t g_2 = 0x6182EAC4L;
static int32_t g_3 = (-4L);
static struct S0 g_11[1][5][5] = {{{{0x722BL, 0x7B7EL}, {0L, 0x05B2L}, {0x722BL, 0x7B7EL}, {0x722BL, 0x7B7EL}, {0L, 0x05B2L}}, {{0xF498L, 0xFF29L}, {0x8F6CL, 0x18E9L}, {0x331CL, -1L}, {-9L, 0x8F98L}, {0x331CL, -1L}}, {{0L, 0x05B2L}, {0L, 0x05B2L}, {0xCD40L, 0x884CL}, {0L, 0x05B2L}, {0L, 0x05B2L}}, {{0x331CL, -1L}, {-9L, 0x8F98L}, {0x331CL, -1L}, {0x8F6CL, 0x18E9L}, {0xF498L, 0xFF29L}}, {{0L, 0x05B2L}, {0x722BL, 0x7B7EL}, {0x722BL, 0x7B7EL}, {0L, 0x05B2L}, {0x722BL, 0x7B7EL}}}};
static int32_t g_13 = 0xD9BA5F27L;
static struct S0 g_16 = {0x4B7BL, 3L};
static struct S0 *g_15 = &g_16;

static struct S0 func_1(void);
static struct S0 *func_6(struct S0 *p_7, int32_t p_8, struct S0 *p_9);

static struct S0 func_1(void) {
  struct S0 *l_10 = &g_11[0][0][1];
  for (g_3 = 12; (g_3 <= 12); g_3 = safe_add_func_uint16_t_u_u(g_3, 2)) {
    int32_t *l_12 = &g_13;
    g_15 = func_6(l_10, ((*l_12) &= g_11[0][0][1].f0), &g_11[0][3][0]);
  }
  return (*l_10);
}

static struct S0 *func_6(struct S0 *p_7, int32_t p_8, struct S0 *p_9) {
  uint32_t l_14[5] = {0x37D02268L, 0x37D02268L, 0x37D02268L, 0x37D02268L, 0x37D02268L};
  int i;
  g_2 &= (l_14[1] >= l_14[1]);
  return &g_11[0][0][1];
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
  transparent_crc(g_3, "g_3", print_hash_value);
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 5; j++) {
      for (k = 0; k < 5; k++) {
        transparent_crc(g_11[i][j][k].f0, "g_11[i][j][k].f0", print_hash_value);
        transparent_crc(g_11[i][j][k].f1, "g_11[i][j][k].f1", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_13, "g_13", print_hash_value);
  transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
  transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
