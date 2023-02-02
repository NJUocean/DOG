void foo(int p)
{
  int e;
  int b = 0, f = 0, d = 0;
  if ((p < f) && p) {
L:
    for (e = 0; 0;) ;
  } else if (d) {
    b = (0 >= b);
  }

  for (; e <= 3; e++) {
    if (b) { continue; }
    b = 3;
    goto L;
  }
}

void main()
{
  int a = -1;
  foo(a);
}