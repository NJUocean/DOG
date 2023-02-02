#define ROR(a,b) (((a) >> (b)) | ((a) << ((sizeof (a) * 8) - (b))))

char c = 0xf234;

main ()
{
  if (ROR (c, 4) != ROR (c, 4))
    exit (1);

  exit (0);
}