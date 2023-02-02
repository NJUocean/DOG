long f1(long a){return a&0xff000000L;}
long f2(long a){return a&~0xff000000L;}

void main ()
{
  long a = 0x89ABCDEF;

  if (f1(a)!=0x89000000L||
      f2(a)!=0x00ABCDEFL)
    abort();
  exit(0);
}