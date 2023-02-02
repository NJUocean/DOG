// Options:   --concise --max-struct-fields 5 --max-funcs 2 --max-array-len-per-dim 5 --max-block-depth 3 --max-block-size 2
#include "csmith.h"

static long __undefined;

struct S1 {
  unsigned f0 : 27;
  unsigned f1 : 27;
};

static uint32_t g_11 = 4294967288UL;
static volatile uint32_t g_18 = 7UL;
static int64_t g_25 = 0L;
static int32_t *const g_28 = (void *)0;
static uint16_t g_36 = 1UL;
static int8_t g_45 = 0L;
static struct S1 g_48[2] = {{9561, 1602}, {9561, 1602}};
static int32_t g_56 = 0x89A98E57L;
static int32_t *g_55 = &g_56;

static int32_t func_1(void);
static int32_t *func_2(struct S1 p_3, int32_t *p_4, struct S1 p_5, int8_t p_6);

static int32_t func_1(void) {
  struct S1 l_7 = {651, 2420};
  uint32_t *l_10 = &g_11;
  int32_t l_34 = (-6L);
  uint16_t *l_35[5][3] = {{&g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36}, {&g_36, &g_36, &g_36}};
  uint16_t l_37 = 0xFEDEL;
  int32_t l_40[3][4][2] = {{{0x39BE99B9L, 0xE0C28056L}, {(-2L), (-2L)}, {(-2L), 0xE0C28056L}, {0x39BE99B9L, (-9L)}}, {{0xE0C28056L, (-9L)}, {0x39BE99B9L, 0xE0C28056L}, {(-2L), (-2L)}, {(-2L), 0xE0C28056L}}, {{0x39BE99B9L, (-9L)}, {0xE0C28056L, (-9L)}, {0x39BE99B9L, 0xE0C28056L}, {(-2L), (-2L)}}};
  uint32_t *l_41[2];
  int32_t l_42 = (-10L);
  int32_t l_43 = 0L;
  int8_t *l_44[4];
  int32_t l_46[3][3][3] = {{{0xA1B4BC71L, 0x2F52174DL, 0x8A97D63FL}, {(-1L), (-1L), (-1L)}, {0x8B108A66L, 0xCEC7E9A0L, 0x8A97D63FL}}, {{0xA1B4BC71L, 0xA52D86A0L, 0xA1B4BC71L}, {0xA1B4BC71L, 0x8B108A66L, 0xA52D86A0L}, {0x8B108A66L, 0xA1B4BC71L, 0xA1B4BC71L}}, {{0xA52D86A0L, 0xA1B4BC71L, 0x8A97D63FL}, {0xCEC7E9A0L, 0x8B108A66L, (-1L)}, {0xA52D86A0L, 0xA52D86A0L, (-1L)}}};
  uint32_t l_47 = 4294967287UL;
  int32_t *l_58 = &l_46[0][0][2];
  int i, j, k;
  for (i = 0; i < 2; i++)
    l_41[i] = (void *)0;
  for (i = 0; i < 4; i++)
    l_44[i] = &g_45;
  l_58 = func_2(l_7, ((safe_mul_func_uint8_t_u_u(((l_46[0][0][2] = ((l_43 |= (((*l_10)--), ((&g_11 == (((*l_10)++), l_10)) | ((safe_add_func_uint32_t_u_u(g_18, ((safe_mul_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_mul_func_int64_t_s_s(g_25, (safe_lshift_func_uint16_t_u_s(((void *)0 != g_28), ((((l_42 = (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((~(((l_34 || ((++l_37), ((((void *)0 != g_28), (void *)0) != l_10))), l_7.f1) < g_25)), g_36)) || l_7.f1), l_40[2][1][0]))), l_40[1][0][1]) != l_7.f1) || 0x5EL))))), l_7.f0)), g_36), l_34)) >= l_7.f0))) && 3L)))) || l_7.f0)), l_47), 255UL)), (void *)0), g_48[1], l_40[2][1][0]);
  (*l_58) = (&g_56 != (void *)0);
  return (*l_58);
}

static int32_t *func_2(struct S1 p_3, int32_t *p_4, struct S1 p_5, int8_t p_6) {
  int32_t *l_57 = &g_56;
  for (g_11 = 0; (g_11 > 46); g_11 = safe_add_func_uint16_t_u_u(g_11, 7)) {
    if (g_36)
      break;
    for (g_25 = 0; (g_25 >= (-20)); g_25--) {
      for (g_45 = 14; (g_45 <= 23); g_45++) {
        return g_55;
      }
    }
  }
  return l_57;
}

int main(int argc, char *argv[]) {
  int i;
  int print_hash_value = 0;
  if (argc == 2 && strcmp(argv[1], "1") == 0)
    print_hash_value = 1;
  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_18, "g_18", print_hash_value);
  transparent_crc(g_25, "g_25", print_hash_value);
  transparent_crc(g_36, "g_36", print_hash_value);
  transparent_crc(g_45, "g_45", print_hash_value);
  for (i = 0; i < 2; i++) {
    transparent_crc(g_48[i].f0, "g_48[i].f0", print_hash_value);
    transparent_crc(g_48[i].f1, "g_48[i].f1", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);
  }
  transparent_crc(g_56, "g_56", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}
