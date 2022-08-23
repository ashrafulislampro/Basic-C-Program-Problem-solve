#include <stdio.h>

int b_search(int arr[], int low_index, int high_index, int key);

int main()
{
    int arr[] = {22, 33, 44, 55, 66, 77, 88, 99, 100, 110, 115, 120, 125, 135, 140, 150};
    int low_index = 0;
    int high_index = 15;
    int key = 899;

    b_search(arr, low_index, high_index, key);

    return 0;
}

int b_search(int arr[], int low_index, int high_index, int key)
{
    int mid_index;

    while (low_index <= high_index)
    {
        mid_index = (low_index + high_index) / 2;

        if (key == arr[mid_index])
        {
            break;
        }
        if (key < arr[mid_index])
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }
    if (low_index > high_index)
    {
        printf("%d element is not found in the array.\n", key);
    }
    else
    {
        printf("%d the element is found. It is the %dth element in the array.\n", arr[mid_index], mid_index);
    }
}
