#include <stdio.h>

int main()
{
    int ara1[] = {3, 1, 5, 4, 2};
    int ara2[5], i, j = 0, minimum, minimum_index;

    for (j = 0; j < 5; j++)
    {
        minimum = 10000;
        for (i = 0; i < 5; i++)
        {
            if (ara1[i] < minimum)
            {
                minimum = ara1[i];
                minimum_index = i;
            }
        }
        ara1[minimum_index] = 10000;
        ara2[j] = minimum;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", ara2[i]);
    }
    return 0;
}