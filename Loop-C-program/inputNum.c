#include <stdio.h>

int main()
{
    int n, m, i, j;

    printf("Please Enter Number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);

        for (j = 10; j <= m; j++)
        {
            if (j % 11 == 0)
            {
                continue;
            }
            printf("%d", j);
        }
    }
    return 0;
}