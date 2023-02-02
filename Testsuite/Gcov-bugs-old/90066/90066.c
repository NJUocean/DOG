int check_int (int *i, int align)
{
  *i = 20;
  return *i;
}

typedef int aligned __attribute__((aligned(64)));

static void
inline __attribute__((always_inline))
foo (void)
{
  aligned i;
  if (check_int (&i, __alignof__(i)) != i)
    ; // abort ();
}

int main()
{
  foo ();
  return 0;
}