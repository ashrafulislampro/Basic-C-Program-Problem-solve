#include <stdio.h>

int main()
{
    int harryNum, larryNum, totalCans, value1, value2;

    totalCans = 10;

    printf("Harry shoot cans: ", harryNum);
    scanf("%d", &harryNum);

    printf("Larry shoot cans: ", larryNum);
    scanf("%d", &larryNum);

    value1 = totalCans - harryNum;
    printf("The number of cans that were not shot by Harry : %d\n", value1);

    value2 = totalCans - larryNum;
    printf("The number of cans that were not shot by Larry : %d\n", value2);

    return 0;
}