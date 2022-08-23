#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 5, 7, 22, 34, 45, 53, 54, 55, 65, 67, 70, 80, 84, 85, 87, 88, 97, 98, 100};

    int low_indx = 0;
    int high_indx = 20;
    int mid_index;
    int num = 7;

    while (low_indx <= high_indx)
    {
        mid_index = (low_indx + high_indx) / 2;

        printf("%d is the num\n", mid_index);

        if (num == arr[mid_index])
        {
            break;
        }
        if (num < arr[mid_index])
        {
            high_indx = mid_index - 1;
        }
        else
        {
            low_indx = mid_index + 1;
        }
    }
    if (low_indx > high_indx)
    {

        printf("%d is not found in the array\n, %d %d", num, low_indx, high_indx);
    }
    else
    {
        printf("%d is found in the array. It is the %d th element of the array.\n", arr[mid_index], mid_index);
    }
    return 0;
}