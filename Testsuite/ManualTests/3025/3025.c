/* { dg-options { -nostartfiles below100.o -Tbelow100.ld -O2 } } */
/* { dg-final { scan-assembler "clr1 B100,#7" } } */

char acDummy[0xf0] __attribute__((__BELOW100__));
unsigned short B100 __attribute__((__BELOW100__));
unsigned short *p = &B100;

void Do(void) { B100 &= ~0x0080; }

int main(void) {
  *p = 0xedcb;
  Do();
  return (*p == 0xed4b) ? 0 : 1;
}
