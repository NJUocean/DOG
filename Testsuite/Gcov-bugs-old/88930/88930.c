void foo(long dx, long dy, int xi, int yi)
{
  int hints = 0;
  if (dy != 0 && (dx <= 1155)) {
    hints = dy > 0 ? 2 : 1;
    if (xi) {
      hints = 1;
    }
  } else if (dx != 0 && (dy <= 0)) {
    hints = 2;
  } else {
    hints = 3;
  }
}
void main()
{
  foo(0, 18481, 1, 0);
}