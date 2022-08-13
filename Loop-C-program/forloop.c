// #include <stdio.h>

// int main()
// {
//     int n = 4;
//     int i = 1;

//     for (; i <= 10; i++)
//     {
//         printf("%d * %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 6;
    int i = 1;

    for (;;)
    {
        if (i > 10)
        {
            break;
        }
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}