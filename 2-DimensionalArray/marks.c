#include <stdio.h>

int main()
{
    int marks[4][10] = {
        {34, 56, 67, 78, 89, 67, 34, 45, 45, 76},
        {34, 56, 67, 78, 89, 67, 34, 45, 45, 76},
        {34, 56, 67, 78, 89, 67, 34, 45, 45, 76},
        {34, 56, 67, 78, 89, 67, 34, 45, 45, 76}};
    int col;

    for (col = 0; col < 10; col++)
    {
        marks[3][col] = marks[0][col] / 4.0 + marks[0][col] / 4.0 + marks[0][col] / 2.0;
        printf("Roll No: %d    Total Marks : %d\n", col + 1, marks[3][col]);
    }

    return 0;
}