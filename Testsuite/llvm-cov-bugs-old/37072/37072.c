
int
f (int a)
{
  switch (a)
    {
    case 0: return 0; break;
    case 1: return 1; break;
    default: return -1;
    }
}

int
main ()
{
  f(0);
  f(1);

  return 0;
}