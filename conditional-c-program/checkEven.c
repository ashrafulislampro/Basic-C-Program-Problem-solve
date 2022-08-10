#include <stdio.h>

int main()
{
    int number, remainder;

    number = 8;

    remainder = number % 2;

    if (remainder == 0)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
    return 0;
}