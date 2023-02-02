int main()
{
    int t = 1;
    int *p = &t;
lbl:
    if (t > 0) {
        if (0)
            return 0;
        if (0)
            goto lbl;
        return 1;
    }
}