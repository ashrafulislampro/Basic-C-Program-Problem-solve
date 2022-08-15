#include <stdio.h>

int main()
{
    int i;
    int total_marks[] = {86, 78, 56, 67, 94, 68, 93, 78, 64, 62, 72, 61, 72, 66, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 84, 88, 73, 62, 66, 76, 70, 67, 65, 77, 63};
    int marks_count[101];

    for (i = 0; i < 101; i++)
    {
        marks_count[i] = 0;
    }

    for (i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }

    return 0;
}