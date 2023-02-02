int bar(a) { return a*a + 1; }

int main()
{
    for (int i = 0; i < 10; i++) {
        if (bar(i)) {
            continue;
        }

        if (i == 0) {
            abort();
        } else {
            exit(0);
        }
    }
}