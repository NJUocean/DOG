int a = 0;

void foo() { a++; }
void bar() { a++; }

int main()
{
  foo(); goto lbl2; lbl1: bar ();

  lbl2:
    if (a == 1)
      goto lbl1;
}