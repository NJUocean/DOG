#define LENGTH 4
int foo (int n)
{
  int i = 0;
  do {
    if (n > LENGTH)
      i++;
    n = 0;
 } while (n > 0);

 return 0;
}

int main() {
  foo (4);
  return 0;
}
