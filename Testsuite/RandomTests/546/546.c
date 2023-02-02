// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_9 = 4L;
static int32_t *const g_8 = &g_9;
static int16_t g_11 = 0L;
static int16_t g_16 = 0x8558L;
static int16_t *g_15 = &g_16;
static int64_t g_27 = (-4L);
static int32_t *g_29 = (void *)0;
static int32_t **volatile g_28 = &g_29;
static int32_t g_46 = 1L;
static uint32_t g_71 = 0xCEA4F543L;

static int16_t func_1(void);
static int32_t *func_2(int32_t *const p_3, int16_t p_4, int32_t *p_5, int32_t *p_6, uint16_t p_7);

static int16_t func_1(void) {
  int16_t *l_10 = &g_11;
  int16_t **l_14[1];
  int16_t *l_17 = &g_16;
  int32_t l_22 = 0x831966C4L;
  int32_t l_25 = 3L;
  int64_t *l_26 = &g_27;
  int32_t **l_51 = (void *)0;
  int32_t **l_52 = &g_29;
  int32_t *l_53 = &g_46;
  int32_t *l_54 = &g_9;
  int32_t *l_55 = &g_9;
  int32_t *l_56 = &l_22;
  int32_t *l_57 = &l_25;
  int32_t *l_58 = &l_22;
  int32_t *l_59 = &g_9;
  int32_t *l_60 = &g_9;
  int32_t *l_61 = &l_22;
  int32_t *l_62 = &g_9;
  int32_t *l_63 = &l_25;
  int32_t *l_64 = &l_22;
  int32_t *l_65 = &l_22;
  int32_t *l_66 = &g_9;
  int32_t *l_67 = &l_25;
  int32_t *l_68 = &g_46;
  int32_t *l_69 = &g_9;
  int32_t *l_70 = &l_25;
  int i;
  for (i = 0; i < 1; i++)
    l_14[i] = (void *)0;
  (*l_52) = func_2(g_8, ((*l_10) = g_9), ((safe_div_func_int8_t_s_s(((g_16 = ((l_17 = (g_15 = (void *)0)) == (void *)0)) != (((safe_sub_func_int8_t_s_s((safe_mul_func_uint64_t_u_u(l_22, ((*l_26) ^= (l_22 & (l_25 = (safe_mul_func_uint16_t_u_u((((void *)0 == &l_10) && (&l_22 == (void *)0)), 65532UL))))))), 0x43L)) == 0xA3A7221EL) > (-1L))), g_9)), (void *)0), &g_9, l_22);
  g_71++;
  return (*l_60);
}

static int32_t *func_2(int32_t *const p_3, int16_t p_4, int32_t *p_5, int32_t *p_6, uint16_t p_7) {
  int64_t l_32[1];
  int i;
  for (i = 0; i < 1; i++)
    l_32[i] = 0xC630DE2FD17BA7DALL;
  (*g_28) = p_6;
  for (g_9 = 8; (g_9 < 21); g_9 = safe_add_func_uint16_t_u_u(g_9, 9)) {
    int64_t l_35[2][1];
    int16_t **l_38 = &g_15;
    int16_t ***l_39 = &l_38;
    int64_t *l_44 = &g_27;
    int32_t *l_45 = &g_46;
    int i, j;
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 1; j++)
        l_35[i][j] = (-1L);
    }
  }
  return p_5;
}

int main(int argc, char *argv[]) {
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_16, "g_16", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_46, "g_46", print_hash_value);
  transparent_crc(g_71, "g_71", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
