int main()
{
    for (int i = 0; i <= 1; i++) {
        int a[2] = {0, 1};
        for (int j = 0; j <= 1; j++) {
            goto lbl;
        }
    }
    goto lbl;
lbl:
    return 0;
}