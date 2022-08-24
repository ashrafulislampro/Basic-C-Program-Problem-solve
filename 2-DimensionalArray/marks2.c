#include <stdio.h>

int main()
{
    int marks[4][10];

    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
}