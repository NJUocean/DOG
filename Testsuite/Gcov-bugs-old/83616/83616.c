int main()
{
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            goto lbl;
        }
    }
lbl:
    return 0;
}