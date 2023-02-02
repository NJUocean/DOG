int b = 1, d = 2;
char res[2];

void fn3 ()
{
  for (;;)
  {
    __builtin_snprintf (res, 2, "%d\n", d);
    if (d)
      break;
  }
  printf("%s\n", res);
}

int main ()
{
  fn3 ();
  return 0;
}