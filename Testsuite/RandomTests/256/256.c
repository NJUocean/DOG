// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S2 {
  signed f0 : 12;
  unsigned f1 : 18;
  signed f2 : 27;
  volatile unsigned f3 : 29;
};

static volatile int32_t g_2 = 0xF1EB32A8L;
static int32_t g_3 = 0x26EC17E5L;
static int32_t g_6[3][4][2] = {{{(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}}, {{(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}}, {{(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}, {(-3L), (-3L)}}};
static int32_t g_9 = (-6L);
static struct S2 g_36 = {54, 309, -7565, 20925};
static uint32_t g_39[4][2] = {{0xAEB9D376L, 0xAEB9D376L}, {0xAEB9D376L, 0xAEB9D376L}, {0xAEB9D376L, 0xAEB9D376L}, {0xAEB9D376L, 0xAEB9D376L}};
static int32_t g_46 = 0xF123EFBBL;

static uint8_t func_1(void);
static int32_t func_12(uint64_t p_13, int32_t p_14, int64_t p_15);

static uint8_t func_1(void) {
  uint32_t l_44 = 0UL;
  for (g_3 = 0; (g_3 < 12); g_3 = safe_add_func_uint16_t_u_u(g_3, 2)) {
    uint16_t l_16 = 65535UL;
    int32_t l_41 = (-1L);
    int8_t l_43 = 0L;
    for (g_6[0][2][1] = 0; (g_6[0][2][1] >= 10); g_6[0][2][1] = safe_add_func_int8_t_s_s(g_6[0][2][1], 2)) {
      int32_t l_27[1];
      int i;
      for (i = 0; i < 1; i++)
        l_27[i] = 0x216709E1L;
      for (g_9 = 0; (g_9 <= (-30)); g_9 = safe_sub_func_uint64_t_u_u(g_9, 1)) {
        int8_t l_37 = 7L;
        uint32_t *l_38 = &g_39[2][0];
        int8_t *l_40 = &l_37;
        int32_t l_42[5][1];
        int32_t *l_51 = &l_41;
        int i, j;
        for (i = 0; i < 5; i++) {
          for (j = 0; j < 1; j++)
            l_42[i][j] = 2L;
        }
        (*l_51) = func_12(l_16, ((((((safe_mod_func_int8_t_s_s(((((safe_add_func_int64_t_s_s((safe_lshift_func_uint64_t_u_u(((l_41 = ((safe_lshift_func_int8_t_s_u(((*l_40) = (((0xA8DBL & (safe_mod_func_uint16_t_u_u((g_3 >= ((((l_27[0], (safe_sub_func_uint16_t_u_u((g_6[1][0][0] < 3L), ((safe_lshift_func_int64_t_s_s((-4L), ((safe_lshift_func_uint32_t_u_u((((*l_38) = ((safe_div_func_uint16_t_u_u(((g_36, ((l_27[0], 0x0735L) <= l_37)) ^ l_37), 0x5894L)) >= l_16)), 0x108F9809L), 10)) >= g_36.f2))) & 0x14L)))) <= 0x6A447D05L) & g_36.f0), 0xCE85662B132DC1B2LL)), l_27[0]))) == g_36.f1) | g_9)), 4)) ^ (-1L))) != 0x00AC80EAL), 15)), g_36.f2)), l_37) == l_27[0]) ^ l_42[3][0]), g_36.f2)) >= l_16) <= 247UL) || l_43) >= 0xCCL) ^ l_44), l_27[0]);
        if ((*l_51))
          break;
      }
      for (l_43 = (-29); (l_43 != 7); ++l_43) {
        return g_9;
      }
    }
  }
  return g_39[2][0];
}

static int32_t func_12(uint64_t p_13, int32_t p_14, int64_t p_15) {
  int32_t *l_45 = &g_46;
  int32_t *l_47[3][3] = {{&g_46, &g_46, &g_46}, {&g_3, &g_3, &g_3}, {&g_46, &g_46, &g_46}};
  uint32_t l_48 = 0x090E7AF8L;
  int i, j;
  ++l_48;
  return p_13;
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
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      for (k = 0; k < 2; k++) {
        transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
        if (print_hash_value)
          printf("index = [%d][%d][%d]\n", i, j, k);
      }
    }
  }
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
  transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
  transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
  transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      transparent_crc(g_39[i][j], "g_39[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);
    }
  }
  transparent_crc(g_46, "g_46", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
