#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter the last number of dara : ");
    scanf("%d", &n);
    sum = (n * (n + 1) / 2);

    printf("Summation is : %d\n", sum);
    return 0;
}

#include <stdio.h>
int main()
{
    int i, sum, n;

    sum = 0;

    printf("Enter the last verse : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("Summation is : %d\n", sum);
    return 0;
}