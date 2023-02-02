union U
{
    int f0;
    unsigned char f1;
};

int main()
{
    int i = 0;
    union U u = {0};
    for (u.f1 = 0; u.f1 != -2; ++u.f1) {
        i ^= u.f1;
        if (i < 1)
            return 0;
    }

    return 1;
}