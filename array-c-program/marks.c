#include <stdio.h>

int main()
{
    int ft_marks[10] = {67, 78, 89, 89, 67, 45, 58, 69, 97, 23};
    int st_marks[10] = {98, 78, 77, 56, 45, 75, 86, 86, 56, 88};
    int final_marks[10] = {98, 67, 45, 89, 45, 97, 76, 66, 97, 46};

    int i, marks, count;
    double total_marks[10];

    for (i = 0; i < 10; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 4.0;
    }

    for (i = 1; i < 10; i++)
    {
        printf("Roll No: %d\tTotal Marks: %0.0lf\n", i, total_marks[i - 1]);
    }

    return 0;
}