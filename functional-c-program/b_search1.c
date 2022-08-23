#include <stdio.h>

int b_search(int arr[], int low, int hight, int key);

int main()
{
    int arr[] = {22, 33, 44, 55, 66, 77, 88, 99, 111, 121, 135, 150, 160, 175, 180, 200};
    int low = 0;
    int high = 15;
    int key = 555;

    b_search(arr, low, high, key);

    return 0;
}

int b_search(int arr[], int low, int high, int key)
{
    int mid_index;

    while (low <= high)
    {
        mid_index = (low + high) / 2;

        if (key == arr[mid_index])
        {
            break;
        }
        if (key < arr[mid_index])
        {
            high = mid_index - 1;
        }
        else
        {
            low = mid_index + 1;
        }
    }

    if (low > high)
    {
        printf("%d is not found in the array.\n ", key);
    }
    else
    {
        printf("%d the element is found. It is %dth element of the array.\n", arr[mid_index], mid_index);
    }
}