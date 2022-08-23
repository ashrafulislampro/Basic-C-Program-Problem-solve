#include <stdio.h>

int find_max(int arr[], int n);

int main()
{
    int arr[] = {
        10, -15, 100, 40, 50, 200, 70, 90, 120, 85, 160, 17};
    int n = 11;

    int max = find_max(arr, n);
    printf("%d\n", max);

    return 0;
}

int find_max(int arr[], int n)
{
    int max = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
};
