int doit(int sel, int n, void *p)
{
  int * const p0 = p;

  switch (sel)
  {
    case 0:
      do {*p0 += *p0;} while (--n);
      return *p0 == 0;

    default:
      abort ();
  }
}

int main()
{
  int v0;
  v0 = 1; doit(0, 3, &v0);
  exit (0);
}