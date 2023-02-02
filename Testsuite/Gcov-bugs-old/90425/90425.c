long f1(long a){return a&0xff000000L;}
long f6(long a){return a&~0x0000ffffL;}

main ()
{
  long a = 0x89ABCDEF;

  if (f1(a)!=0x89000000L||
      f6(a)!=0x89AB0000L)
    ; // abort();
  exit(0);
}