int main()
{
    int v = 1;
    if (v > 0) 
        goto lbl;
    if (v < 0) ;
lbl:
    v++;
}