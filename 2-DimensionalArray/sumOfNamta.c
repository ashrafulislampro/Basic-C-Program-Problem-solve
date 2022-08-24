#include <stdio.h>

int main()
{
    int namta[10][10];
    int even = 0, odd = 0;
    int row, col, sum = 0;

    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
        {
            namta[row][col] = (row + 1) * (col + 1);
            sum += namta[row][col];
            printf("%d * %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }
    }
    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
        {
            namta[row][col] = (row + 1) * (col + 1);

            if (namta[row][col] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("Total Even : %d   Total Odd : %d    Total Sum : %d\n", even, odd, sum);
    return 0;
}