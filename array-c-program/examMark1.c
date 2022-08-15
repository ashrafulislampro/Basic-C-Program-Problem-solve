#include <stdio.h>

int main()
{
    int i, j;
    int total_marks[] = {
        6, 7, 8, 9, 8, 7, 5, 4, 3, 2, 1, 3};

    int marks_count[12];

    for (i = 0; i < 12; i++)
    {
        marks_count[i] = 0;
    }

    for (i = 0; i < 12; i++)
    {
        marks_count[total_marks[i]]++;
        for (j = 0; j <= 11; j++)
        {
            printf("%d ", marks_count[j]);
        }

        printf("\n");
    }
    return 0;
}