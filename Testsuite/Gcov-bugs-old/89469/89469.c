int main()
{
  int start = 0, mid = 3, limit = 3, lastMid = 6, r = 0;
  for (;;) {
      mid = (start + limit) / 2;
      if (lastMid == mid) {
        break;
      }

      r = mid == 1 ? 1 : 0;

      if (r > 0) {
        start = mid;
      } else {
        return 1;
      }
  }
  return 0;
}