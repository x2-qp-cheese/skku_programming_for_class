#include <stdio.h>
#define SIZE 10

void printArray(int a[], size_t size)
{
    for(size_t i = 0; i < size; i++) 
    {
        char c;
        c = (i==size-1)? '\n' :' ';
        printf("%d%c", a[i], c);
    }
}

int main()
{
    int nums[SIZE];
    for( size_t i = 0; i < SIZE; i++ )
    {
        nums[i] = i;
    }
    printArray(nums, SIZE);

    return 0;
}