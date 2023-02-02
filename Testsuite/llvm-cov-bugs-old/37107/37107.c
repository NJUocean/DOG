void foo(int a)
{
  if (a > 0)
L:
  for(int i = 0; i<10; i++)
    ;
}

int main()
{
  foo(1);
  return 0;
}