#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int i;

    for (i = 9;; i--)
    {
        if (i > -1)
        {
            printf("%dth element is : %d\n", i, arr[i]);
        }
        else
        {
            break;
        }
    }
    return 0;
}
