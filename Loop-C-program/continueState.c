#include <stdio.h>

int main()
{
    int num = 0;

    while (num < 10)
    {
        num = num + 1;

        if (num % 2 == 0)
        {
            continue;
        }
        printf("%d\n", num);
    }
    return 0;
}