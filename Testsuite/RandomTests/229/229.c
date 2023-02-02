// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

static volatile int32_t g_2 = 0L;
static int32_t g_3 = 0L;
static int32_t g_7 = (-5L);
static uint32_t g_9 = 4294967294UL;
static uint32_t g_26 = 1UL;
static uint32_t *g_25 = &g_26;
static const uint32_t g_30 = 4UL;
static const uint32_t *g_29[4][4][3] = {{{(void *)0, (void *)0, (void *)0}, {&g_30, &g_30, (void *)0}, {(void *)0, &g_30, (void *)0}, {&g_30, &g_30, &g_30}}, {{(void *)0, &g_30, (void *)0}, {&g_30, &g_30, &g_30}, {(void *)0, (void *)0, (void *)0}, {&g_30, &g_30, (void *)0}}, {{(void *)0, &g_30, (void *)0}, {&g_30, &g_30, &g_30}, {(void *)0, &g_30, (void *)0}, {&g_30, &g_30, &g_30}}, {{(void *)0, (void *)0, (void *)0}, {&g_30, &g_30, (void *)0}, {(void *)0, &g_30, (void *)0}, {&g_30, (void *)0, (void *)0}}};
static int32_t g_47 = 1L;
static uint16_t g_49[2] = {0UL, 0UL};
static volatile int32_t *g_52 = &g_2;
static volatile int32_t **volatile g_51 = &g_52;

static uint32_t func_1(void);
static uint64_t func_12(int32_t p_13, uint32_t *p_14, int8_t p_15, int64_t p_16);

static uint32_t func_1(void) {
  uint32_t *l_31 = &g_26;
  const int32_t l_48[2] = {0xF7CC73EEL, 0xF7CC73EEL};
  int i;
  for (g_3 = 0; (g_3 != (-14)); g_3--) {
    int64_t l_6[1];
    const uint32_t *l_27[5][2] = {{&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}, {&g_26, &g_26}};
    int i, j;
    for (i = 0; i < 1; i++)
      l_6[i] = 0xFA75C19C5A654FDDLL;
    for (g_7 = 0; (g_7 <= 0); g_7 += 1) {
      uint32_t *l_8[5][4][1] = {{{&g_9}, {&g_9}, {&g_9}, {(void *)0}}, {{&g_9}, {(void *)0}, {&g_9}, {&g_9}}, {{&g_9}, {(void *)0}, {&g_9}, {(void *)0}}, {{&g_9}, {&g_9}, {&g_9}, {(void *)0}}, {{&g_9}, {(void *)0}, {&g_9}, {&g_9}}};
      const uint32_t **l_28[3];
      int32_t *l_46 = &g_47;
      int16_t l_50 = 1L;
      uint32_t l_53 = 0x47311EBCL;
      int i, j, k;
      for (i = 0; i < 3; i++)
        l_28[i] = &l_27[3][0];
      (*l_46) = (((++g_9) ^ ((func_12(((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint32_t_u_s((safe_lshift_func_int32_t_s_u((g_25 == (g_29[3][3][1] = l_27[3][1])), 22)), ((l_6[g_7] <= ((void *)0 != l_31)) | (safe_rshift_func_uint32_t_u_u(((*g_25) = ((((safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_s(l_6[g_7], ((1UL >= (!(g_26 == (((l_50 ^= (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int32_t_s_s(((*l_46) ^= ((safe_div_func_uint64_t_u_u((g_3 > 0xFC0266D9918C6A86LL), g_30)) || 18446744073709551609UL)), 22)) >= l_48[0]) & g_7), g_49[1]))) | (*g_25)), g_7)))), (*l_46)))))) && 0x124CL), 0xD7F7FFFF9752EE8BLL) ^ g_7)), l_48[0]))))), l_48[0])), 0x60700C0DL)), l_6[0]), g_25, g_2, l_6[0]) < 0L) != g_3)) > l_53);
    }
  }
  return l_48[1];
}

static uint64_t func_12(int32_t p_13, uint32_t *p_14, int8_t p_15, int64_t p_16) {
  (*g_51) = &g_2;
  (*g_52) |= p_15;
  return g_30;
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
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_9, "g_9", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_30, "g_30", print_hash_value);
  transparent_crc(g_47, "g_47", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_49[i], "g_49[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
