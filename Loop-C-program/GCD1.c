#include <stdio.h>

int main()
{
    int a, b, t, gcd;

    printf("Enter the two GCD Num : ");
    scanf("%d %d", &a, &b);

    if (a == 0)
    {
        gcd = a;
    }
    else if (b == 0)
    {
        gcd = a;
    }
    else
    {
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }
    printf("GCD is : %d\n", gcd);
    return 0;
}