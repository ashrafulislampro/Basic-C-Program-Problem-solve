#include <stdio.h>

int main()
{
    int sum, p, n;

    printf("Enter the last verse : ");
    scanf("%d", &n);

    p = (n + 1) / 2;
    sum = p * p;

    printf("Summation is : %d", sum);

    return 0;
}