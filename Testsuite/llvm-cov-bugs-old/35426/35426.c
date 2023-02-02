int main()
{
    int i=1, j=1, k=1;
    if (i > 0) {
        if (j == 1) {
            if (k == 1)
                return 0;
            else
                goto lbl;
        } else {
            ;
        }
    }
lbl:
    return 1;
}