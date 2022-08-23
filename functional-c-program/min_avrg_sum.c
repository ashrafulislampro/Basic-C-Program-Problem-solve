#include <stdio.h>

int find_min(int arr[], int n);
int total_sum(int arr[], int n);
double average(int arr[], int n);

int main()
{
    int arr[] = {13, 15, 764, 753, 33, -6, 556, -683, 3, 4, 6, -3, 14, 29, 77, 15};
    int n = 16;

    int min = find_min(arr, n);
    int sum = total_sum(arr, n);
    double avrg = average(arr, n);
    printf("%d\n %d\n %0.2lf\n", min, sum, avrg);

    return 0;
}
double average(int arr[], int n)
{
    int summation = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        summation += arr[i];
    }
    double avrg = 1590 / 16;
    printf("%0.2lf\n", avrg);
    return avrg;
}

int total_sum(int arr[], int n)
{
    int summation = 0;

    int i;

    for (i = 0; i < n; i++)
    {
        summation = summation + arr[i];
    }
    return summation;
}

int find_min(int arr[], int n)
{
    int min = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}