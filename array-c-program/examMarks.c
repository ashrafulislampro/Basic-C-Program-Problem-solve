#include <stdio.h>

int main()
{
    int count, marks, i;

    int total_marks[] = {
        89,
        89,
        78,
        67,
        56,
        56,
        67,
        56,
        78,
        86,
        97,
        98,
        89,
        78,
        67,
        76,
        65,
        57,
        86,
        76,
        56,
        56,
        78,
        78,
        78,
        67,
        56,
        98,
        99,
        77,
    };

    for (marks = 50; marks <= 100; marks++)
    {
        count = 0;

        for (i = 0; i < 30; i++)
        {
            if (total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks : %d count: %d\n", marks, count);
    }

    return 0;
}