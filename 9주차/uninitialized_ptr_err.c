#include <stdio.h>

int main(void)
{
    int* p;
    printf("%d", *p);

    *p = 1;
    printf("%d", *p);

    return 0;
}