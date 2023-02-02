int foo()
{
  int hints = 2, xi = 1, dy = 18481, adx = 0, ady = 18481;
  if (dy != 0 && (adx <= ady >> 4)){
    hints = dy > 0 ? 2 : 1;
    if (xi) {
      hints ^= 3;
    }
  }
  else
  {
    hints = 0;
  }
  return hints;
}

int main()
{
  foo();
}