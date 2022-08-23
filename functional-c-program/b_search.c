#include <stdio.h>

int b_search(int arrs[], int low, int high, int key);

int main()
{
    int arr[] = {3, 5, 7, 9, 11, 15, 17, 19, 25, 29, 33, 38, 46, 49, 50, 60};
    int low = 0;
    int high = 15;
    int key = 29;

    b_search(arr, low, high, key);

    return 0;
}

int b_search(int arrs[], int low, int high, int key)
{
    int mid_indx;

    while (low <= high)
    {
        mid_indx = (low + high) / 2;

        if (key == arrs[mid_indx])
        {
            break;
        }
        if (key < arrs[mid_indx])
        {
            high = mid_indx - 1;
        }
        else
        {
            low = mid_indx + 1;
        }
    }
    if (low > high)
    {
        printf("%d is not found in the array.\n", key);
    }
    else
    {
        printf("%dth element is found. It is the %dth element of the array.\n", arrs[mid_indx], mid_indx);
    }
    return 0;
}
