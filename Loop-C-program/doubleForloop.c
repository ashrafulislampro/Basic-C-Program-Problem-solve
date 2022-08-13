#include <stdio.h>

int main()
{
    int i, n;

    for (n = 1; n <= 20; n++)

    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i, n, m;

    m = 0;

    for (n = 1; n <= 20; n++)
    {
        m = 0;
        for (i = 1; i <= 10; i++)
        {
            m = n + m;
            printf("%d * %d = %d\n", n, i, m);
        }
    }
    return 0;
}