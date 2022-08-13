#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in Celsius : ");
    scanf("%lf", &celsius);

    farenheit = (celsius * 1.8) + 32;

    printf("Celsius convert into Farenheit : %0.2lf\n", farenheit);
    return 0;
}
