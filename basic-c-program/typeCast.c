#include <stdio.h>

int main(){

    int n;
    double x;

    x = 10.50;
    n = (int)x;   // variable type cast

    printf("Value of n is %d\n", n);
    printf("Value of x is %lf\n", x);

    return 0;
}