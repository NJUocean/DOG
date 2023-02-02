#include <stdio.h>

void Test(long long Val, int Amt)
{
  printf("  lshr: 0x%llx \t\t shl: 0x%llx\n", Val >> Amt, Val << Amt);
  printf("  lshr: 0x%llx\t\tshl: 0x%llx\n",
    Val >> Amt, Val << Amt);
  printf("  lshr: 0x%llx \t\t shl: 0x%llx\n",
    (unsigned long long)Val >> Amt, Val << Amt);
}

int main()
{
  Test(10, 4);

  return 0;
}