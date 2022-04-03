#include <stdio.h>

int main()
{
    long int result = 1;
    int i, n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result *= i;
    }

    printf("%d! = %ld\n", n, result);

    return 0;
}