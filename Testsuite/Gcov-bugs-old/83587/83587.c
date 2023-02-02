int main()
{
    int i = 1;
    if (i > 0)
        goto lbl1;

    if (1) {
lbl1:
        i++;        
    }

    if (1)
        goto lbl2;

    if (1) {
lbl2:
        i++;
    }
}