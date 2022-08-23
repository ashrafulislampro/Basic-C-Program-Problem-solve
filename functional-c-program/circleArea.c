#include <stdio.h>

int main()
{
    double py, r, area;

    py = 3.1416;

    printf("Enter the circle radius : ");
    scanf("%lf", &r);

    area = py * r;

    printf("Circle Area : %0.2lf", area);
    return 0;
}