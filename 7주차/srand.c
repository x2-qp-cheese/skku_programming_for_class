#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
        printf("%d ", 1 + rand() % 6);
    printf("\n");

    return 0;
}