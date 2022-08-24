#include <stdio.h>

int main()
{
    int num, i, factMul = 1;

    printf("Enter a Number : ");
    scanf("%d ", &num);

    for (i = num; i > 0; i--)
    {
        factMul = factMul * i;
    }

    printf("Factorial Multiple Number : %d", factMul);

    return 0;
}