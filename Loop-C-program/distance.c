#include <stdio.h>

int main()
{
    double t, v, s;

    printf("Enter the velocity of car: ");
    scanf("%lf", &v);

    printf("Enter the during time: ");
    scanf("%lf", &t);

    s = 2 * v * t * 60;

    printf("Total Distance of the car : %0.2lf", s);
    return 0;
}