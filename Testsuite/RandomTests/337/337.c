// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  unsigned f0 : 21;
  const unsigned f1 : 3;
  const unsigned f2 : 14;
};

union U2 {
  volatile int32_t f0;
  const volatile uint16_t f1;
  uint32_t f2;
  uint32_t f3;
  int32_t f4;
};

union U3 {
  uint32_t f0;
  int32_t f1;
  uint32_t f2;
  uint32_t f3;
  uint16_t f4;
};

static int32_t g_6[1] = {0x7747BB7AL};
static union U3 g_24 = {0xE3B00B72L};
static int32_t *g_27 = &g_6[0];
static uint64_t g_36 = 0x3978D11E8E103CA5LL;
static volatile union U2 g_41 = {-2L};
static int32_t ***volatile g_53 = (void *)0;
static int32_t *volatile g_55 = (void *)0;
static int32_t *volatile g_56 = &g_6[0];
static struct S1 g_57 = {448, 1, 21};

static struct S1 func_1(void);
static int32_t func_19(union U3 p_20, const int32_t *p_21, int32_t *p_22, int32_t *p_23);

static struct S1 func_1(void) {
  int64_t l_2 = 0x3244D513C61C71BCLL;
  int32_t l_13[4] = {0x9973063DL, 0x9973063DL, 0x9973063DL, 0x9973063DL};
  const int32_t *l_26 = (void *)0;
  int i;
  if (l_2) {
    int32_t *l_7 = &g_6[0];
    int32_t l_8[1][2];
    int32_t *l_9 = (void *)0;
    int32_t *l_10 = (void *)0;
    int32_t *l_11 = (void *)0;
    int32_t *l_12[4] = {&g_6[0], &g_6[0], &g_6[0], &g_6[0]};
    uint64_t l_14[1][5];
    int i, j;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 2; j++)
        l_8[i][j] = 0x9DADE661L;
    }
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 5; j++)
        l_14[i][j] = 0x260E2EFE8E60A2FCLL;
    }
    for (l_2 = 0; (l_2 < (-21)); l_2--) {
      int32_t *l_5 = &g_6[0];
      (*l_5) &= 0x07182B47L;
    }
    ++l_14[0][3];
  } else {
    const int32_t *l_25 = &g_6[0];
    for (l_2 = 23; (l_2 == 5); l_2--) {
      int32_t *l_54 = &l_13[2];
      (*g_56) = ((*l_54) = func_19(g_24, (l_26 = l_25), g_27, &l_13[2]));
    }
  }
  return g_57;
}

static int32_t func_19(union U3 p_20, const int32_t *p_21, int32_t *p_22, int32_t *p_23) {
  int32_t *l_43 = &g_6[0];
  int32_t l_52 = 0xE5EB906AL;
  (*g_27) = 0L;
  for (p_20.f1 = (-10); (p_20.f1 >= (-13)); p_20.f1 = safe_sub_func_int16_t_s_s(p_20.f1, 6)) {
    int32_t **l_34 = &g_27;
    uint64_t *l_35 = &g_36;
    const struct S1 l_45 = {1327, 0, 73};
    if ((p_20.f1 == ((safe_add_func_uint8_t_u_u(0x64L, (safe_add_func_int64_t_s_s((&g_6[0] == ((*l_34) = p_23)), ((*l_35) = g_24.f0))))) ^ (safe_mod_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((g_41, p_20.f1), ((~(((*p_23) |= 0x552F0C8CL) && (l_43 == p_22))) || (-5L)))) >= g_24.f0), p_20.f1))))) {
      uint32_t l_48 = 0UL;
      int32_t l_51 = 0x2B2C9D53L;
      if ((*g_27))
        break;
      l_52 &= ((*g_27) = ((g_6[0] > (((void *)0 == &g_27) || (~((((p_20, (*g_27)) || ((((-1L) <= (l_45, ((((safe_mul_func_int8_t_s_s((((l_48 && (safe_sub_func_uint8_t_u_u(((*g_27) && l_51), 0xC5L))) > g_24.f0) < p_20.f1), g_6[0])) & 0xFB9E2BF2DCFCB68BLL) < p_20.f1) != 0xDB6CL))) ^ (-1L)) & (*p_22))) || 0x43C5L) && g_36)))) ^ (*p_23)));
    } else {
      l_34 = &p_22;
      return (*p_23);
    }
  }
  return (*g_27);
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = 0; i < 1; i++) {
    transparent_crc(g_6[i], "g_6[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
  transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
  transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
  transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
