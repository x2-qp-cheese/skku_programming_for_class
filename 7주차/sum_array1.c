#include <stdio.h>

int sum_array(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

void main()
{

    int arr[100] = {1,2,3};

    int sum = sum_array(arr, 100);

    printf("Sum of an array: %d\n", sum);
}