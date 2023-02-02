// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static int32_t g_6 = (-6L);
static int32_t *g_5 = &g_6;
static uint32_t g_33 = 0UL;
static uint8_t g_37 = 1UL;
static uint8_t g_39[4] = {0x03L, 0x03L, 0x03L, 0x03L};
static const int32_t *g_51 = &g_6;
static const int32_t **volatile g_50[5][4] = {{&g_51, &g_51, &g_51, &g_51}, {&g_51, &g_51, &g_51, &g_51}, {&g_51, &g_51, &g_51, &g_51}, {&g_51, &g_51, &g_51, &g_51}, {&g_51, &g_51, &g_51, &g_51}};

static int32_t func_1(void);
static const int32_t *func_2(int32_t *p_3, int32_t *const p_4);

static int32_t func_1(void) {
  uint64_t l_13[2][2] = {{0x371247ADF1ADB2BCLL, 0x371247ADF1ADB2BCLL}, {0x371247ADF1ADB2BCLL, 0x371247ADF1ADB2BCLL}};
  int32_t *l_14 = &g_6;
  uint32_t *l_32 = &g_33;
  uint32_t l_34 = 0x15B45BEAL;
  uint8_t *l_35 = (void *)0;
  uint8_t *l_36 = &g_37;
  uint8_t *l_38 = &g_39[1];
  uint32_t l_40 = 4294967295UL;
  const int32_t **l_52[4];
  const int32_t *l_53 = &g_6;
  int i, j;
  for (i = 0; i < 4; i++)
    l_52[i] = &g_51;
  l_53 = func_2(g_5, ((safe_lshift_func_int32_t_s_s((((safe_div_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u((l_13[1][1] & (l_14 == ((safe_div_func_uint16_t_u_u((((+((safe_add_func_uint64_t_u_u(18446744073709551614UL, (((*g_5) || (((l_40 = ((*l_38) = ((*l_36) ^= (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((*l_14) <= ((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((*l_14), (g_6, ((*l_32) = (safe_lshift_func_uint8_t_u_u((((((*l_14), &g_6) == l_14) < (*l_14)) && (*l_14)), 4)))))), l_34)) || 0xFC167656L)), (*l_14))) ^ (*l_14)), g_6))))) <= g_6) | 0xECL)) == g_6))) ^ 3UL)) && 0L), 0xA325L), 4L)), &g_6))), 0x56CD219FL)) <= g_6) ^ g_6), g_6)) && (*l_14)) > g_6), 16)), l_32));
  return (*g_51);
}

static const int32_t *func_2(int32_t *p_3, int32_t *const p_4) {
  uint32_t l_43 = 0x39F4802DL;
  const int32_t *l_48[4][5] = {{(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}, {&g_6, &g_6, &g_6, &g_6, &g_6}, {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0}, {&g_6, &g_6, &g_6, &g_6, &g_6}};
  int i, j;
  if ((((*g_5) <= (0x26L && (safe_sub_func_uint64_t_u_u(0x32A5B4D633C66883LL, ((l_43, g_39[1]), (!0xFCE2495621847726LL)))))) > (l_43 == l_43))) {
    for (g_37 = (-11); (g_37 == 50); g_37++) {
      int32_t **l_47 = &g_5;
      (*l_47) = &g_6;
    }
    return l_48[0][3];
  } else {
    const int32_t **l_49 = &l_48[0][3];
    (*l_49) = l_48[0][3];
  }
  return l_48[0][3];
}

int main(int argc, char *argv[]) {
  int i, j;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
  transparent_crc(g_33, "g_33", print_hash_value);
  transparent_crc(g_37, "g_37", print_hash_value);
  for (i = 0; i < 4; i++) {
    transparent_crc(g_39[i], "g_39[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
