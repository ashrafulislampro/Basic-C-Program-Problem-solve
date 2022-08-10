#include <stdio.h>

int main(){

    double num2 = 0;
    double num1 = 5.55;
    double sum, subtract, mult, divide;
    char plus = '+', minus = '-', mul = '*', div = '/';

    sum = num1 + num2;
    subtract = num1 - num2;
    mult = num1 * num2;
    divide = num1 / num2;

    printf("%0.2lf plus %0.2lf = %lf\n", num1, num2, sum);
    printf("%0.2lf minus %0.2lf = %lf\n", num1, num2, subtract);
    printf("%0.2lf mul %0.2lf = %lf\n", num1, num2, mult);
    printf("%0.2lf div %0.2lf = %lf\n", num1, num2, divide);

    return 0;
}