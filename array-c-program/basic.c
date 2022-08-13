#include <stdio.h>

int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;

    printf("Enter the first semister marks : ");
    scanf("%d", &ft_marks);
    printf("Enter the second semister marks : ");
    scanf("%d", &st_marks);
    printf("Enter the final semister marks : ");
    scanf("%d", &final_marks);

    total_marks = ft_marks / 4 + st_marks / 4 + final_marks / 2;

    printf("Total Marks is : %0.2lf", total_marks);
    return 0;
}