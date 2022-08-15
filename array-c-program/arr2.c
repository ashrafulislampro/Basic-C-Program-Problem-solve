
#include <stdio.h>

int main()
{
    int arr[5] = {6, 4, 6, 7, 8};

    printf("%d\n", arr[-1]);
    printf("%d\n", arr[5]);
    printf("%d\n", arr[100]);

    return 0;
}