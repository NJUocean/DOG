int main()
{
  int ret = 0;
  int a[2] = {1955, -1957};
  for (int i = 0; i < 2; ++i)
  {
    if (i % 2 == 1 && a[i] != -2 * i - 1955) {
      ret = 1;
    }
    else if (i % 2 == 0 && a[i] != 1955 + 2 * i) {
      // ret = 2;
    }
  }
  return ret;
}
