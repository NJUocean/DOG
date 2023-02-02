int main()
{
    int i = 0;
    if (1)
    {
        goto lbl;
lbl_dead:
        i++;
lbl:
        if (0) 
            ;
        i++;
    }
}
