int test_goto (int f)
{
  for (int i = 0; i < 10; i++)
    if (i == f)
      goto lab;
  return 0;
lab:
  return 1;
}

int main()
{
  test_goto (3);
  return 0;
}