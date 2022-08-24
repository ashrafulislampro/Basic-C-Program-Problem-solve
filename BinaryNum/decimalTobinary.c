#include <stdio.h>

int decimalTobinary(int decimalNum);

int main()
{

    int binaryNum, decimal;

    printf("Enter the decimal Number : ");
    scanf("%d ", &decimal);

    binaryNum = decimalTobinary(decimal);

    printf("Binary Number is : %d", binaryNum);

    return 0;
}

int decimalTobinary(int decimalNum)
{
    int binaryNum = 0;
    int rem, temp = 1;

    while (decimalNum != 0)
    {
        rem = decimalNum % 2;

        decimalNum = decimalNum / 2;
        binaryNum = binaryNum + rem * temp;
        temp = temp * 10;
    }
    return binaryNum;
}