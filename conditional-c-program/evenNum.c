#include <stdio.h>

int main()
{
    int number;
    double divide;

    number = 6;

    divide = number / 2;

    if (divide * 2 == number)
    {
        printf("The number is Even num.\n");
    }
    else
    {
        printf("The number is Odd num.\n");
    }
    return 0;
}